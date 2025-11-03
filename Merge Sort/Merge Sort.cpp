#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1, n2 = h - mid;
    int* arr_1 = new int[n1];
    int* arr_2 = new int[n2];

    for (int i = 0; i < n1; i++)
        arr_1[i] = arr[l + i];

    for (int j = 0; j < n2; j++)
        arr_2[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (arr_1[i] < arr_2[j])
            arr[k++] = arr_1[i++];
        else
            arr[k++] = arr_2[j++];
    }

    while (i < n1)
        arr[k++] = arr_1[i++];

    while (j < n2)
        arr[k++] = arr_2[j++];

    delete[] arr_1;
    delete[] arr_2;
}
void mergeSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}
int main()
{
    const int N = 10;
    int Arr[N] = { 7,11,28,3,9,18,22,18,22,4 };
    mergeSort(Arr, 0, N - 1);
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
}