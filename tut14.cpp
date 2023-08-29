# include <iostream>
using namespace std;

typedef struct employee
{
    /* data */  // total = 9 bytes
    int eID; // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 bytes
} ep;

union money
{
    /* data */
    int rice; // 4 bytes
    char car; // 1 byte
    float pounds; // 4 bytes
};

int main() {
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout << m1;
    // cout << breakfast;
    // cout << lunch;
    // cout << dinner;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout << m1.car;

    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eID = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout << harry.eID << endl;
    // cout << harry.favChar << endl;
    // cout << harry.salary << endl;
    return 0;
}