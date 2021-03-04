#include <vector>
#include <list>

#include <iostream>





template <typename T>
void print(const T &start, const T &end) {
	std::cout << "[";
	for (T cur = start; cur != end; cur++)
		std::cout << *cur << " ";
	std::cout << "]" << std::endl;
}


int main(void)
{
	std::vector<int> v{1, 2, 3, 4, 5, 6};
	print(v.begin(), v.end());

	std::list<std::string> l{"Hell", "friend", "or", "maybe",
	"I", "should", "give", "you", "a", "name"};
	
	print(l.begin(), l.end());

	return 0;
}


