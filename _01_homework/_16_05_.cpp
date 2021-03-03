#include <iostream>


template <typename T, unsigned N>
void print(const T (&arr)[N]) {
	std::cout << "( Arry , [";
	for (int i = 0; i < N - 1; i++)
		std::cout << arr[i] << ", ";
	std::cout << arr[N - 1] << "])" << std::endl;
}



int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	double arrf[] = {1, 2, 3, 4, 5, 6, 7};
	print(arr);
	print(arrf);

	return 0;
}