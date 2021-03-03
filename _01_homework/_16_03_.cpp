#include <iostream>




template <typename T>
int compare(const T &a, const T &b) {
	if (std::greater<T>()(a, b)) return 1;
	if (std::less<T>()(a, b)) return -1;
	return 0;
}


class Sales_data {
	int someData;
};



int main(void)
{
	Sales_data a, b;

	/* 将会尝试特化 int compare(const Sales_data &a, const Sales_data &b) */
	compare(a, b);


	return 0;
}
