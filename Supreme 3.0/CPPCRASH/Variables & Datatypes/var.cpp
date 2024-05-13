#include <iostream>
using namespace std;

int main(){
    // variable define
    int age = 20;
    cout << "My age is : " << age << endl;

    // redifination is not allowed in same codeblock

    // manipulation
    age = 101;
    cout << "New age is : " << age << endl;

    int count = 6;
    // size - 4 byte
    // signed - +ve and -ve both // unsigned - 0 to +ve
    // signed size - 2^n to 2^n - 1
    // unsigned size - 0 to 2^n - 1

    float pi = 3.14;

    double weight = 72.21763461;
    // size - 8 byte
    // double rounds off to 4 places after decimal in CPP(unless its precision is set). But in memory no change occurs to the original value!
    cout << "Double : " << weight << endl;
    
    // 0 || false && 1 || true
    bool isMale = true;
    bool isFemale = 0;
    // size - 1 byte
    char alpha = 'p';

    //Smallest Addressable space in memory is 1 byte !

    return 0;
}