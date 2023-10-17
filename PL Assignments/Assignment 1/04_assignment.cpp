#include <iostream>
using namespace std;

class calculate {
    int a, b;

public:
    calculate() {
        a = 0;
        b = 0;
    }

    calculate(int w, int x) {
        a = w;
        b = x;
    }

    calculate(calculate& ref) {
        this->a = ref.a;
        this->b = ref.b;
    }

    void areaCircle() {
        cout << "Area of Circle: " << 3.14159 * a * a << endl << endl;
    }

    void areaTriangle() {
        cout << "Area of Triangle: " << (0.5 * a * b) << endl << endl;
    }

    void areaSquare() {
        cout << "Area of Square: " << a * a <<  endl << endl;
    }
};

int main() {
    int radius, length, side;
    int choice;
    calculate obj1;

    while (true) {
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Triangle" << endl;
        cout << "3. Area of Square" << endl;
        cout << "4. Exit " << endl;
        cin >> choice;

        if (choice == 4) {
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter the radius: ";
                cin >> radius;
                obj1 = calculate(radius, 0);
                obj1.areaCircle();
                break;

            case 2:
                cout << "Enter base and height: ";
                cin >> length >> side;
                obj1 = calculate(length, side);
                obj1.areaTriangle();
                
                // calculate obj2(obj1);
                break;

            case 3:
                cout << "Enter side length: ";
                cin >> side;
                obj1 = calculate(side, 0);
                obj1.areaSquare();
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}
