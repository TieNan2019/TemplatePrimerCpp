#include <cstring>
#include <iostream>


/* 此处为非类型模板参数 */
template<unsigned N, unsigned M>
/* 入参为字符串引用, 如果使用指针传参, 编译器将无法推导出 N, M 的值 */
int compare(const char (&p1)[N], const char (&p2)[M]) {
	std::cout << "length of A : " << N << std::endl;
	std::cout << "length of B : " << M << std::endl;
	return strcmp(p1, p2);
}


int main(void)
{
	/* 编译器实例化出的版本 */
	/* int compare(const char (&p1)[3], const char (&p2)[4]) */

	return compare("hi", "mom");
}
