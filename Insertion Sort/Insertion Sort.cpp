#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
	for (int m1 = 1; m1 < n; m1++)
	{
		int temp = arr[m1];
		int m2 = m1 - 1;
		while (temp < arr[m2] && m2 >= 0)
		{
			arr[m2 + 1] = arr[m2];
			m2--;
		}
		arr[m2 + 1] = temp;
	}
}
int main()
{
	const int N = 10;
	int Arr[N] = { 4,8,1,4,9,0,3,6,2,5 };
	insertionSort(Arr, N);
	for (int i = 0; i < N; i++)
	{
		cout << Arr[i] << " ";
	}

}

