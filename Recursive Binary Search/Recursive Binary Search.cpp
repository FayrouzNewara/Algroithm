#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int h, int key)
{
	if (l <= h)
	{
		int mid = (l + h) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		if (arr[mid] > key)
		{
			return binarySearch(arr, l, mid - 1, key);
		}
		else
		{
			return binarySearch(arr, mid + 1, h, key);
		}
	}
	return -1;
}
int main()
{
	const int N = 10;
	int Arr[N] = { 1,2,5,8,9,11,15,17,20,22 };
	int X;
	cout << "Enter The Item To Search\n";
	cin >> X;
	int l = 0, h = N-1;
	int Y = binarySearch(Arr, l, h, X);
	if (Y != -1)
	{
		cout << "Item " << X << " Is Found At Position " << Y << endl;
	}
	else
	{
		cout << "Item " << X << " Not Found In Array \n";
	}
}
