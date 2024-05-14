#include <iostream>
using namespace std;

int main(){

    char grade;
    cout << "Enter your grade : ";
    cin >> grade;

    /*
    Switch - int , char , enum
    No Range checking in case only value equal or not!
    */

    switch(grade){
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good, Keep it Up" << endl;
            break;
        case 'C':
            cout << "Well done" << endl;
            break;
        default:
            cout << "You have to improve..." << endl;
    }

    return 0;
}