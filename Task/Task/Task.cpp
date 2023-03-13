#include <iostream>
#include <ctime>

/*
	
	Task.
		Implement the sort of the array with 10 elements.
		Initializing of the array - console inputed.
		The algorithm of the sort - student can choose any the sort algorithm.
		The work with the array must be done through the pointer
		(for example: for access to the first element used - *(array + 1)).

*/

void InitializeArray(int* arr, const int size);
void ShowArray(int* arr, const int size);
void ShowSortedArray(int* arr, const int size);

int main()
{
	srand(time(nullptr));

	const int size = 10;
	int arr[size];

	InitializeArray(arr, size);
	ShowArray(arr, size);
	ShowSortedArray(arr, size);

	return 0;
}

void InitializeArray(int* arr, const int size)
{
	std::cout << "Fill the array with elements (10 elements): \n\n";

	for (int index = 0; index < size; index++)
	{
		std::cout << index + 1 << ". ";
		std::cin >> *(arr + index);
	}

	std::cout << std::endl;
}

void ShowArray(int* arr, const int size)
{
	std::cout << "Your array: ";

	for (int index = 0; index < size; index++)
		std::cout << *(arr + index) << " ";

	std::cout << std::endl;
}

void ShowSortedArray(int* arr, const int size)
{
	for (int index = 0; index < size; index++)
		for (int j = index + 1; j < size; j++)
			if (*(arr + j) < *(arr + index))
				std::swap(*(arr + index), *(arr + j));

	std::cout << "Sorted the array from the minimum element to the maximum element: ";

	for (int index = 0; index < size; index++)
		std::cout << *(arr + index) << " ";

	std::cout << std::endl;
}
