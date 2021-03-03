#include <iostream>
#include <vector>
#include <list>


template <typename T, typename S>
T find(const T &first, const T &last, const S &value) {
	T p = first;
	while (*p != value && p != last)
		p++;

	return p;
}




int main(void)
{
	std::vector<int> v{3, 4, 5, 6, 7};
	/* 特化 std::vector<int>::iterator find(
	 * const std::vector<int>::iterator &first,
	 * const std::vector<int>::iterator &last,
	 * const int &value) 版本 */
	auto it = find(v.begin(), v.end(), 6);
	std::cout << *it << std::endl;


	std::list<std::string> l{"hello", "hi", "how are you"};
	/* 特化 std::list<std::string>::iterator find(
	 * const std::list<std::string>::iterator first,
	 * const std::list<std::string>::iterator last,
	 * const char *value) 版本 */
	auto sit = find(l.begin(), l.end(), "hi");

	std::cout << *sit << std::endl;


	return 0;
}
