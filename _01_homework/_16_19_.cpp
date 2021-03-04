#include <iostream>
#include <vector>
#include <list>




template <typename T>
void print(const T &v) {
	typedef typename T::value_type value_type;
	typedef typename T::size_type size_type;


	std::cout << "[";
	for (size_type i = 0; i < v.size() - 1; i++)
		std::cout << v[i] << " ";
	std::cout << v.back();
	std::cout << "]" << std::endl;
};




int main(void)
{
	std::vector<int> v{1, 2, 3, 4};
	print(v);

	/* 链表不支持随机访问 */
	// std::list<std::string> l {"Hello", "my", "friend", "or", 
	// "mabybe", "I", "should", "give", "you", "a", "name"};
	// print(l);


	return 0;
}
