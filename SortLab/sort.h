#pragma once


class Sort
{
public:

	template <class T>
	static void InsertionSort(T& arr, int size);

	template <class T>
	static void BubbleSort(T& arr, int size);


private:
	Sort() = default;
	Sort(const Sort & r) = default;
	Sort(Sort && r) = default;

};

template<class T>
inline void Sort::InsertionSort(T& arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		int m = i - 1;
		while (m >= 0 && arr[m] > arr[m + 1])
		{
			std::swap(arr[m], arr[m+1]);
			m--;
		}
	}

}

template<class T>
inline void Sort::BubbleSort(T& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int m = 0; m < size - 1; m++)
			if (arr[m] > arr[m + 1])
				std::swap(arr[m], arr[m + 1]);
	}
}