#include <iostream>
using namespace std;

int main(){

    int x,y;
    cout << "Enter two numbers : ";
    cin >> x >> y;

    int large = ( x > y ) ? x : y;
    cout << "Largest number is : " << large << endl;

    return 0;
}