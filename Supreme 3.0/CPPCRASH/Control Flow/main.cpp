#include <iostream>
using namespace std;

int main(){

    int budget;
    cout << "Enter your budget : " ;
    // cin >> budget;
    if (budget > 5000000) {
        cout << "You can buy a Tesla Model S" << endl;
    }
    else{
        cout << "You cannot buy Tesla Model S" << endl;
    }

    //Driving License
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age >= 18 && age <= 60) {
        cout << "You can drive a car" << endl;
    }
    else if (age >= 60){
        cout << "You are too old to drive" << endl;
    }
    else{
        cout << "You are too young to drive" << endl;
    }

    //Nested IF
    if (age >= 18 ){
        if (age <= 60){
            cout << "You are eligible to have a license" << endl;
        }
    }
    else{
        cout << "You are not eligible to have a license" << endl;
    }

    return 0;
}