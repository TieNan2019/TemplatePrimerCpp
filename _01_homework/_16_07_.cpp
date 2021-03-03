#include <iostream>




template <typename T, unsigned int N>
constexpr T size(const T (&arr)[N]) {
	return N;
}



int main(void)
{
	int X[] = {1, 2, 3, 4, 5, 6, 7, 8};
	std::cout << size(X) << std::endl;

	return 0;
}