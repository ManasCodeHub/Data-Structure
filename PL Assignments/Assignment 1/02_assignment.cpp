#include<iostream>
using namespace std;

int sum() {
    while (true)
    {    
    int A;
    int B;
    int C;
    cout<<"Enter value of a b c : ";
    cin >> A >> B >> C;
    int x = (A*B)-(C/B);
    cout<<"Answer of x: " << x << " "<< endl;
    }
}
int main() {
    sum();
    return 0;
}