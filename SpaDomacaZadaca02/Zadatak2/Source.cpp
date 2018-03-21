#include<iostream>
#include <algorithm>
#include <array>
using namespace std;

bool IsEven(int i) {
	return ((i % 2) == 0);
}

int main() {

	array<int, 10> num = {5, 7, 9, 12, 13, 15, 28, 32, 0, 109};


	std::array<int, 10>::iterator it = std::find_if(num.begin(), num.end(), IsEven);
	std::cout << "The first even value is " << *it << '\n';


	return 0;
}

