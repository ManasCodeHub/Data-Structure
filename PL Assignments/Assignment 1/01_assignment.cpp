#include <iostream>
using namespace std;

class students
{
public:
    int n;
    students()
    {
        int arr[5];
        for (int i = 1; i <= 5; i++)
        {
            cout << "Enter the marks of student " << i << " : ";
            cin >> arr[i];
        }

            for (int j = 0; j < 5; ++j)
            {
                for (int i = 0; i < 5 - j; ++i)
                {
                    if (arr[i] > arr[i + 1])
                    {
                        int temp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = temp;
                    }
                }
            }

            for (int i = 0; i < 5; i++)
            {
                cout << arr[i] << endl;
            }

            cout << "highest element is: " <<arr[5] << endl;
            cout << "Second highest element is: " <<arr[4] <<endl;
            cout << "Smallest element is: " <<arr[1] <<endl;
            cout << "Second smallest element is: " <<arr[2]<<endl;
            cout << "Second smallest element is: " <<arr[3]<<endl;
    }
};

int main()
{
    students myobj;
    return 0;
}