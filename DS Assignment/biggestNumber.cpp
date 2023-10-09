#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
int max;
int = 1;
while (i <= n)
{
    cin >> arr[i];
    i = i + 1;
}

for (int j = 0; j < n-1; j++)
{
    for (int k = 1; i < n; i++)
    {
        if(arr[j] < arr[k]) {
            min = arr[j];
        }else if(arr[j] > arr[k]) {
            max = arr[j];
        }
    }
    
}

cout << max;
cout << min;







    return 0;
}