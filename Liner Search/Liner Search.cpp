#include <iostream>
using namespace std;
int linerSearch(int Arr[], int N, int Key)
{
    for(int i = 0 ; i < N ;i++)
    {
    if(Arr[i] == Key)
    {
        return i;
    }
    }
    return -1;
}
int main()
{
    int X;
    const int N = 10;
    int Arr[N] = { 10,20,30,40,50,60,70,80,90,100 };
    cout << "Enter Item To Search\n";
    cin >> X;
    int Y = linerSearch(Arr, 10, X);
    if(Y !=-1)
    {
        cout << "The Item " << X << " Is Found At Position " << Y << endl;;
    }
    else
    {
        cout << "The Item " << X << " Is Not Found\n";
    }
}
