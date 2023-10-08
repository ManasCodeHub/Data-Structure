#include<iostream>
using namespace std;                                            
int main() {

// formula to calculate the sum is n/2 (a + l ) "n"  number entered "a" starting number "l" is ending number     
 int sum = 0;
int n;
cin >> n;
int i =1;
while( i <=n) {
    sum = sum + i;
    i = i + 1;
}
cout << sum;


return 0;
}