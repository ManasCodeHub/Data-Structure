#include<iostream>
using namespace std;
                                            
struct student {
    float cgpa;
    string name;
    int rollNo;
};
struct cgpa {
    float highestCGPA = 0;
    float lowestCGPA = 10;
};

int main() {
int n;
cout << "Enter the number of students: ";
cin >> n;
struct student studentsInfo[n];
struct cgpa cgp;
for (int i = 0; i <n; i++) {
    cout << "enter the name of student  "; 
    cin >> studentsInfo[i].name;
    cout<<"Enter the rollNumber of student ";
    cin >> studentsInfo[i].rollNo;
    cout<<"Enter the CGPA of student ";
    cin >> studentsInfo[i].cgpa;
}

for(int j = 0; j<n; j++) {
    
    if(studentsInfo[j].cgpa > cgp.highestCGPA) {
        cgp.highestCGPA = studentsInfo[j].cgpa;
    }
    else if(studentsInfo[j].cgpa < cgp.lowestCGPA) {
        cgp.lowestCGPA = studentsInfo[j].cgpa;
    }
}
    cout << cgp.highestCGPA<<endl;
    cout << cgp.lowestCGPA<<endl;
return 0;
}