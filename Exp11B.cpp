// EXP 11B : Entering Car details through a class

#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
    string brand;
    string year;

    
};

int main(){
    Car car1;
    Car car2;
    Car car3;
    cout << "Enter brand for car1 :";
    cin >> car1.brand;
    cout << "Enter year for car1 :";
    cin >> car1.year;
    cout << "Enter brand for car2 :";
    cin >> car2.brand;
    cout << "Enter year for car2 :";
    cin >> car2.year;
    cout << "Enter brand for car3 :";
    cin >> car3.brand;
    cout << "Enter year for car3 :";
    cin >> car3.year;
    
    cout << endl;
    cout << car1.brand << " " << car1.year << endl;
    cout << car2.brand << " " << car2.year << endl;
    cout << car3.brand << " " << car3.year << endl;

    return 0;

}

/*
OUTPUT :

Enter brand for car1 :Honda
Enter year for car1 :2020
Enter brand for car2 :Toyota
Enter year for car2 :2017
Enter brand for car3 :BMW
Enter year for car3 :2023

Honda 2020
Toyota 2017
BMW 2023

*/
