#include <iostream>
using namespace std;
void selectionSort(int arr[] , int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i; 
        for(int j = i+1 ; j < n ; j++)
        {
        if(arr[j] < arr[min])
        {
            min = j;
        }
        }
        swap(arr[i], arr[min]);
    }

}
int main()
{
    const int N = 10;
    int Arr[N] = { 4,7,2,11,8,5,0,23,9,1 };
    selectionSort(Arr, N);
    for(int i = 0 ; i < N ;i++)
    {
        cout << Arr[i] << " ";
    }
}

