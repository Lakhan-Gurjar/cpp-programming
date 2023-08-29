// There are two types of header file :
// 1. System header files: It comes with the compiler 
# include <iostream>
// 2. User defined header files : It is written by the programmer
// #include "this.h" --> This will produce an error if "this.h" is not present in the current directory

using namespace std;

/* https://en.cppreference.com/w/cpp/header --> website for header files in c++ */

int main() 
{
    int a = 4, b = 5;
    cout<<"Operators in c++ :"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    // Arithmetic Operators
    cout <<"The value of a + b is "<< a+b<<endl;
    cout <<"The value of a - b is "<< a-b<<endl;
    cout <<"The value of a * b is "<< a*b<<endl;
    cout <<"The value of a / b is "<< a/b<<endl;
    cout <<"The value of a % b is "<< a%b<<endl;
    cout <<"The value of a++ is "<< a++<<endl;
    cout <<"The value of a-- b is "<< a--<<endl;
    cout <<"The value of ++a is "<< ++a<<endl;
    cout <<"The value of --a is "<< --a<<endl;
    cout<<endl;
    // Assignment Operators --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison operators
     cout<<"following are the Comparison operators in c++"<<endl;
    cout << "The value of a == b is "<< (a==b) << endl;
    cout << "The value of a != b is "<< (a!=b) << endl;
    cout << "The value of a >= b is "<< (a>=b) << endl;
    cout << "The value of a <= b is "<< (a<=b) << endl;
    cout << "The value of a > b is "<< (a>b) << endl;
    cout << "The value of a < b is "<< (a<b) << endl;

    // Logical operators
     cout<<"following are the Logical operators in c++"<<endl;
    cout << "The value of this logical and operator ((a==b) && (a<b))  is "<< ((a==b) && (a<b)) 
    <<endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is "<< ((a==b) || (a<b)) 
    <<endl;
    cout << "The value of this logical not operator (!(a==b)) is "<< (!(a==b)) 
    <<endl;
    
    return 0;
}
