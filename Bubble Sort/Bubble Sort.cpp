#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			{
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
}
int main()
{
	const int N = 10;
	int Arr[N] = { 4,6,8,9,11,23,44,14,5,0 };
	bubbleSort(Arr,N);
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << " ";
	}
}
