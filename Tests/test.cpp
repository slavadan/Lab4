#include "pch.h"
#include "../SortLab/sort.h"


TEST(InsertionSortTest, charArray)
{
	char arr[10] = {'F', 'A', 'P', 'I', 'E', 'Z', 'W', 'S', 'G', 'M'};

	Sort::InsertionSort(arr, 10);

	for (int i = 0; i < 9; i++)
		EXPECT_TRUE(arr[i] < arr[i+1]);
}

TEST(InsertionSortTest, vectorArray)
{
	std::vector<int> arr = {8, 9, 1, 0, 90, 31, 11, 3, 7, 66, 2};

	Sort::InsertionSort(arr, arr.size());

	for (int i = 0; i < arr.size() - 1; i++)
		EXPECT_TRUE(arr[i] < arr[i+1]);
}

TEST(InsertionSortTest, intArray)
{
	int arr[8] = { 99, 204, 1, 2, 9, 5, 299, 0 };

	Sort::InsertionSort(arr, 8);

	for (int i = 0; i < 7; i++)
	{
		EXPECT_TRUE(arr[i] < arr[i + 1]);
	}
}

TEST(BubbleSort, charArray)
{
	char arr[10] = { 'F', 'A', 'P', 'I', 'E', 'Z', 'W', 'S', 'G', 'M' };

	Sort::BubbleSort(arr, 10);

	for (int i = 0; i < 9; i++)
		EXPECT_TRUE(arr[i] < arr[i + 1]);
}

TEST(BubbleSort, vectorArray)
{
	std::vector<int> arr = { 8, 9, 1, 0, 90, 31, 11, 3, 7, 66, 2 };

	Sort::BubbleSort(arr, arr.size());

	for (int i = 0; i < arr.size() - 1; i++)
		EXPECT_TRUE(arr[i] < arr[i + 1]);
}

TEST(BubbleSort, intArray)
{
	int arr[8] = { 99, 204, 1, 2, 9, 5, 299, 0 };

	Sort::BubbleSort(arr, 8);

	for (int i = 0; i < 7; i++)
	{
		EXPECT_TRUE(arr[i] < arr[i + 1]);
	}
}