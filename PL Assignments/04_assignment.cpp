#include<iostream>
using namespace std;

class calculate {
    int a, b ,c, d;
    public:
    calculate() {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }
    calculate(int w, int x, int y, int z) {
        a = w;
        b = x;
        c = y;
        d = z;
    }
    calculate(calculate &ref) {
        a = ref.a;
        b = ref.b;
        c = ref.c;
        d = ref.d;
    }

    void num() {

        cout <<"radius of circle: " <<3.14159 * a*a;
    }
};

int main() {
    int radius;
    cout <<" Enter radius: ";
    cin >> radius;
    calculate obj(radius,0,0,0);
    calculate obj1 = obj;
    obj.num();
    return 0;
}