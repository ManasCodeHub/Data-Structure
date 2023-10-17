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

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i+j-1 << " ";
    //         // count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;

    //     // 1
    //     // 2 3
    //     // 4 5 6
    //     // 7 8 9 10

    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     int column = 1;
    //     while (column <= row)
    //     {
    //         cout << row - column + 1;
    //         column++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    // 1
    // 21
    // 321
    // 4321
    // 54321
    // 654321
    // 7654321

    // int row = 1;
    // while(row<=n) {
    //     int col = 1;
    //     while(col<=n) {
    //         char ch = 'A' + col - 1;
    //         cout << ch;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    // ABC
    // ABC
    // ABC

    /*

        int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch;
            col = col + 1;
            ch = ch + 1;
        }
        cout << endl;
        row = row + 1;
    }
    ABCD
    EFGH
    IJKL
    MNOP
    int row = 1;
    while(row<=n) {
        int col = 1;
        while(col<=row) {
            char ch = 'A' + col - 1;
            cout << ch <<" ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
A 
A B 
A B C 
A B C D     
   int row = 1;
   char ch = 'A';
   while(row<=n) {
    int col = 1;
    while(col<=row) {
        cout << ch << " ";
        ch++;
        col = col + 1;
    }
    cout << endl;
    row = row + 1;
   }
A 
B C 
D E F 
G H I J 
    */

   char ch = 'A';
   int row = 1;
   while(row<=n) {
    int col = 1;
    while(col<=row) {
        cout << ch << " ";
        ch++;
        col = col + 1;
    }
    cout<<endl;
    row = row + 1;

   }







    return 0;
}