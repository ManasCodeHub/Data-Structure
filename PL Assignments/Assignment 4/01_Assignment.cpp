#include<iostream>
using namespace std;

class shape {
    double a, b;
    public:
    void get_data() {
        cout << "Enter the number 1 :";
        cin >> a;
        cout << "Enter the number 2 :";
        cin >> b;
    }

    virtual void display_area() {
        t

    }

};

class traignle : shape {

}

class rectangle : shape {

}


int main() {

    return 0;
}