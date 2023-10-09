#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    // int i = 1;
    // while(i<=n) {
    //     int j = 1;
    //     while(j<=n) {
    //         cout << j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // output
    // 12345
    // 12345
    // 12345
    // 12345
    // 12345

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // output
    // 54321
    // 54321
    // 54321
    // 54321
    // 54321

    // int i = 1;
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;

    //     i++;
    // }
    // 1 2 3
    // 4 5 6
    // 7 8 9

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    // *
    // **
    // ***
    // ****
    // *****

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <=i)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // 1
    // 22
    // 333
    // 4444

    int i = 1;
    // int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i+j-1 << " ";
            // count++;
            j++;
        }
        cout << endl;
        i++;

        // 1 
        // 2 3 
        // 4 5 6 
        // 7 8 9 10 


    }
    return 0;
}