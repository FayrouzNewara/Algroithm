#include <iostream>
using namespace std;
int binarySerach(int arr[],int l , int h ,int key)
{
    int mid;
    while(l <= h)
    {
        mid = (l + h) / 2;
        if(arr[mid] == key)
        {
            return mid;
        }
        if(arr[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;

}
int main()
{
    const int N = 10;
    int Arr[N] = { 1,4,6,2,8,11,9,3,2,7 };
    int X;
    cout << "Enter The Item To Search\n";
    cin >> X;
    int l = 0, h = N - 1;
    int Y = binarySerach(Arr, l, h, X);
    if(Y!= -1)
    {
        cout << "Item " << X << " Is Found At Position " << Y << endl;
    }
    else
    {
        cout << "Item " << X << " Is Not Found " << endl;
    }
}