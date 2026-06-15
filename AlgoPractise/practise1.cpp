#include <iostream>
using namespace std;

void sieve(bool arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = true;

    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    bool *arr = new bool[n + 1];
    sieve(arr, n);

    for(int i = 0 ; i <= n ; i++)
    {
        if(arr[i])
        cout << i;
    }
}