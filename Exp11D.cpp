// EXP 11D : Calculator using Classes and Functions

#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
    int a, b;

public:
    void get_num(int x, int y) {
        a = x;
        b = y;
    }

    int add()
    {
        return a + b;
    }

    int subtract()
    {
        return a - b;
    }
    int multiply()
    {
        return a * b;
    }
    int divide()
    {
        if (b == 0)
        {
            return 0;
        }
        else
        {
            return a / b;
        }
    }
};

int main()
{
    Calculator calc;


    int a, b;

    cout << "Enter two numbers (separated by space):";
    cin >> a >> b;
    calc.get_num(a, b);
    
    cout << "addition :" << calc.add() << endl;
    cout << "subtraction :" << calc.subtract() << endl;
    cout << "product :" << calc.multiply() << endl;
    cout << "division : "<< calc.divide() << endl;
    return 0;
}

/*
OUTPUT :

Enter two numbers (separated by space):3 4
addition :7
subtraction :-1
product :12
division : 0

*/
