// it is a container in which we can strore any value  of any type 
//single char is stored in single quotes and multiple char stored in double quortes
//type casting:
#include <iostream>
using namespace std;
int main() {
    // Variable declaration and initialization
    int a = 10; // Integer variable
    float b = 20.5; // Float variable
    char c = 'A'; // Character variable
    string d = "Hello"; // String variable

    // Output the values of the variables
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "String: " << d << endl;

    return 0;
}
// This code demonstrates the declaration and initialization of different types of variables in C++.  

// type casting : converting data from one type to another type
// implicit type casting: automatic conversion by the compiler
// from small to big 




// explicit type casting: manual conversion by the programmer
// Example of implicit type casting
#include <iostream>
using namespace std;
int main() {
    int a = 10; // Integer
    float b = a; // Implicit type casting from int to float

    cout << "Integer: " << a << endl;
    cout << "Float after implicit casting: " << b << endl;

    // Example of explicit type casting
    // bog data type to small dat type 
    double c = 9.99; // Double
    int d = (int)c; // Explicit type casting from double to int

    cout << "Double: " << c << endl;
    cout << "Integer after explicit casting: " << d << endl;

    return 0;
}



