#include <iostream>




template <typename T>
int compare(const T &a, const T &b) {
	std::cout << a << " vs. " << b << std::endl;

	if (std::greater<T>()(a, b)) return 1;
	if (std::less<T>()(a, b)) return -1;
	return 0;
}




int main(void)
{
	/* 特化结果: int compare(const int &a, const int &b) */
	compare(15, 20);
	/* 特化结果: int compare(const double &a, const double &b) */
	compare(3.14, 2.5);

	return 0;
}
