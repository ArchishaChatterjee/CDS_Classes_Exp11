// EXP 11A : To access values from a class

# include <iostream>
# include <string>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;


};

int main(){
    Student s1;
    s1.name = "Archisha";
    s1.branch = "ENTC";
    s1.subject = "C++";
    s1.year = "2nd";
    s1.result = 8.6;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;
    


    return 0;
}


/*
OUTPUT :
Name: Archisha
Branch: ENTC
Subject: C++
Year: 2nd
Result: 8.6


*/
