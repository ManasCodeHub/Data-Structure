#include<iostream>
using namespace std;
                                            
int main() {

int i = 1;

while (i<=4) //column
{
    int j =1;
    while (j<=4) //rows
    {
        cout << "*";
          j = j + 1;
    }
    cout << endl;
    i = i + 1;
    
}



return 0;
}