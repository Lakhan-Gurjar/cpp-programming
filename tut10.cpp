# include <iostream>

using namespace std;

int main(){
    /*Loops in C++:
    There are three types of loops in c++:
    1. For loop
    2. while Loop
    3. do-while loop
    */

   /*For loop in c++*/

   // syntax for for loop
   // for(initialization; condition; updation)
   // {
   //  loop body (C++ code);
   // }

   for (int i = 0; i < 40; i++)
   {
    /* code */
    cout << i << endl;
   }

   // Example of infinite for loop   
   for (int i = 0; 34 <= 40; i++) // if we leave condition blank or put a condition which is always true then it will create a infinte for loop
   {
    /* code */
    cout << i << endl;
   }

   /*While loop in c++*/

   // syntax for while loop
   // while (condition) 
   // {
   //  c++ statements;
   // }

   // Printing 1 to 40 using while loop
   int i = 1;
   while (i <= 40)
   {
    cout << i << endl;
    i++;
   }
   
   // Example of infinite while loop   
   int i = 1;
   while (true) 
   {
    cout << i << endl;
    i++;
   }

   /*do-While loop in c++*/

   // syntax for do-while loop
   // do {
   //  c++ statements;
   // } while (condition);

   // Printing 1 to 40 using do-while loop 
   int i = 1; 
   do { 
    cout << i << endl; 
    i++; 
   } while (i <= 40);

   // printing table of n using do-while loop
   int i = 1, k, n;
   cout << "Print table of : " << endl;
   cin >> n;
   do {
    cout << n * i << endl;
    i++;
   }while (i <= 10);



    return 0;
}
