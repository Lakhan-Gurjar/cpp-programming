# include <iostream>
using namespace std;

int main ()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age"<<endl;
    cin >> age;
    // Selection control structure : If-else ladder 
    // if(age<18){
    //     cout <<"You can not come to my party" <<endl;
    // }
    // else if (age == 18){
    //     cout <<"You are a kid and you wil get a kid pass to the party" <<endl;
    // }
    // else {
    //     cout << "You can come to the party"<<endl;
    // }

    // Selection control structure : Switch case statements
    switch (age)
    {
    case 18:
        cout << "You are 18"<<endl;
        break;

    case 22:
        cout << "You are 22"<<endl;
        break;    
    
    case 2:
        cout << "You are 2"<<endl;
        break;

    default:
        cout << "No special cases"<<endl;
        break;
    }

    cout <<"Done with switch case";
    return 0;
}
