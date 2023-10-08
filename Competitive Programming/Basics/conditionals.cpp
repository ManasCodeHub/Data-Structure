#include <iostream>
using namespace std;

int main()
{
    // a = cin.get();   //get returns character value from ASCII table
    // cout << a ;

    // conditional statement;

    // cin >> a;
    // if (a > 0)
    // {
    //     cout << "A is Positive " << endl;
    // }
    // else if (a < 0)
    // {
    //     cout << "A is negative" << endl;
    // }
    // else
    // {
    //     cout << "A is 0";
    // }

    // homework

    int a = 2;
    int b = a + 1;

    if((a=3)==b) {
        cout << a;
    }
    else {
        cout << a+1;
    }


    // homework
    
    char ch; 
    cin>>ch;
    if(isupper(ch)) {
        cout << "Is upper case";
    }
    else if(islower(ch)) {
        cout << "is lower case";
    }
    else {
        cout << "value is numeric";
    }
 
    return 0;
}