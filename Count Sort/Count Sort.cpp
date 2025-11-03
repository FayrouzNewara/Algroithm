#include<iostream>
using namespace std;
const int N = 10;
int Arr[N] = { 1,3,1,9,4,3,8,7,1,4 };
int* counting_Sort(int* arr)
{
	int max_val = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max_val)
		{
			max_val = arr[i];
		}
	}
	int* prefix = new int[max_val+1]();
	for (int i = 0; i <N; i++)
	{
		prefix[arr[i]]++;
	}
	for (int i = 1; i <= max_val; i++)
	{
		prefix[i] += prefix[i - 1];
	}
	int* res = new int[N];
	for (int i = N-1; i >= 0; i--)
	{
		res[--prefix[arr[i]]] = arr[i];
	}
	delete[] prefix;
	return res;
}
int main()
{
	int* sorted = counting_Sort(Arr);
	for (int i = 0; i < N; i++)
	{
		cout << sorted[i] << " ";
	}
	delete[] sorted;
	return 0;
}