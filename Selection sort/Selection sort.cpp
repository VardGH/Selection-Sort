#include <iostream>
#include <vector>
#include <ctime>
#include <limits>

void Selection_sort(std::vector<int>& vec)
{
	int maxID;

	for (int i = 0; i < vec.size()-1; ++i) {
		maxID = 0;
		for (int j = 0; j < vec.size() - i; ++j) {
			if (vec[maxID] <= vec[j]) {
				maxID = j;
			}
		}
		std::swap(vec[maxID],vec[vec.size()-i-1]);
	}
}

void Print(std::vector<int>& vec)
{
	for (auto elem : vec) {
		std::cout << elem << " ";
	}
	std::cout << "\n";
}

int main()
{
	std::vector<int> myvector(10);

	srand(time(NULL));

	for (auto& elem : myvector) {
		elem = rand() % 50 - 5;
	}

	std::cout << "Unsorted Vector: ";
	Print(myvector);

	std::cout << "Selection Sort: ";

	Selection_sort(myvector);
	Print(myvector);
	
	return 0;
}