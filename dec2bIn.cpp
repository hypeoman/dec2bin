#include <iostream>
#include <vector>
#include <string>

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> bin;

	for (;;) {
		if (n <= 0) {
			break;
		}
		bin.push_back(n % 2);
		n /= 2;
		

	}

	int bin_size = bin.size();

	for (int i = 0; i <= ( bin_size) ;i++) {
		 std::cout << bin.back();
		 bin.pop_back();
		
	}
}
