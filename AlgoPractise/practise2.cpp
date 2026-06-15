#include <iostream>
using namespace std;

int fib(int n , int arr[])
{
   int sum = 1;
   arr[0] = 0;

   if(n > 0){
    arr[1] = 1;

    for(int i = 2 ; i < n + 1 ; i++){
       arr[i] = arr[i-1] + arr[i-2];
       sum += arr[i];
    }
   }

   return sum;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    cout << fib(n,arr);
}