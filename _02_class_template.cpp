#include <iostream>
#include <vector>
#include <memory>



/* 与函数模板不同, 编译器无法自动推导变量类别, 实例化时必须明指明 */
template <typename T>
class Blob {
public:
	typedef T value_type;
	typedef typename std::vector<value_type>::size_type size_type;

	/* 构造函数 */
	/* 默认构造函数 —— 生成一个空指针 */
	Blob(): data (std::make_shared<std::vector<value_type>>()) {}
	/* 接收 initializer_list 的构造函数 */
	Blob(std::initializer_list<value_type> il):
	data(std::make_shared<std::vector<value_type>>(il)) {}

	/* Blob 中的元素数目 */
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	/* 添加和删除元素 */
	void push_back(const value_type &t) { data->push_back(t); }

	/* 移动构造 */
	void push_back(value_type &&t) { data->push_back(std::move(t)); }
	void pop_back() {
		check(0, "pop back on empty Blob");
		data->pop_back();
	}

	/* 元素访问 */
	value_type &back() {
		check(0, "back on empty Blob");
		return data->back();
	}

	/* 随机访问 */
	value_type &operator[](size_type i) {
		check(i, "index out of range");
		return (*data)[i];
	}

private:
	std::shared_ptr<std::vector<value_type>> data;
	/* 若 data[i] 无效, 抛出 msg */
	void check(size_type i, const std::string &msg) const {
		if (i >= data->size())
			throw std::out_of_range(msg);
	}
};



int main(void)
{
	/* 使用模板时, 必须提供显式模板实参 */
	/* 编译器从 Blob 模板实例化出一个类时, 会重写 Blob 模板 */
	Blob<int> ia;
	Blob<int> ia2 = {1, 2, 3, 4, 5};

	ia2.push_back(9);

	std::cout << ia2[2] << std::endl;


	return 0;
}


