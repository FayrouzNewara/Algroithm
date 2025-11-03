#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high); 
    }
}
int main()
{
    const int N = 10;
    int Arr[N] = { 7,11,28,3,9,18,22,18,22,4 };
    quickSort(Arr, 0, N - 1);
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
}