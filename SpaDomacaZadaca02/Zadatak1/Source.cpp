#include<iostream>
#include <algorithm>
#include <array>
using namespace std;

void fill(array<int, 10> &odd) {
	for (int i = 0; i < odd.size(); i++)
	{
		odd[i] = i + 1;
	}
}

void print(array<int, 10> &odd) {
	for (int i = 0; i < odd.size(); i++)
	{
			cout << rand() % 100 + 1 << endl;
	}
}

void oddNumbers(array<int, 10> &odd) {
	for (int i = 0; i < odd.size(); i++)
	{
		if (odd[i] % 3 == 0)
		{
			cout << odd[i] << endl;
		}
	}
}

int main() {

	array<int, 10> odd = {};
	fill(odd);
	print(odd);

	if (std::all_of(odd.begin(), odd.end(), [](int i) {return i % 2; }))
		std::cout << "All the elements are odd numbers.\n";

	else
	{
		cout << "Not all elements are odd numbers.\n";
	}

	return 0;
}