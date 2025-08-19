// EXP 11C : To calculate the length of a rectange using classes

# include <iostream>
# include <string>
using namespace std;

class Area{
    public:
    int length;
    int breadth;
    int area;


};

int main(){
    Area a;
    Area b;
    cout << "Enter the length of the rectangle 1: ";
    cin >> a.length;
    cout << "Enter the breadth of the rectangle 1: ";
    cin >> a.breadth;
    a.area = a.length * a.breadth;
    cout << "The area of the rectangle 1 is: " << a.area << endl;
    cout << "Enter the length of the rectangle 2: ";
    cin >> b.length;
    cout << "Enter the breadth of the rectangle 2: ";
    cin >> b.breadth;
    b.area = b.length * b.breadth;
    cout << "The area of the rectangle 2 is: " << b.area << endl;

    if (a.length = a.breadth){
        cout << "The rectangle 1 is a square" << endl;
    }
    else{
        cout << "The rectangle 1 is not a square" << endl;
        }
    if (b.length = b.breadth){
        cout << "The rectangle 2 is a square" << endl;
        }
    else{
        cout << "The rectangle 2 is not a square" << endl;
        }

    return 0;
}

/*
OUTPUT :

Enter the length of the rectangle 1: 20
Enter the breadth of the rectangle 1: 30
The area of the rectangle 1 is: 600
Enter the length of the rectangle 2: 10
Enter the breadth of the rectangle 2: 50
The area of the rectangle 2 is: 500

*/
