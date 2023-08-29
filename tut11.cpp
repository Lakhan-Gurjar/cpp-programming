# include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 4; i++)
    {
        /* code */
        if(i==2){
            break; ---> exit the looop
        }
        cout<<i<<endl;
    }

    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue; // ---> skip current iteration
        }
        cout<<i<<endl;
    }
    
    return 0;
}
