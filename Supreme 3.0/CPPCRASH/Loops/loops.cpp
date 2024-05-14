#include <iostream>
using namespace std;

int main(){

    //for
    // for (initialisation; condition; update){}
    // nothing is mandatory inside for loop all three can be skipped
    
    for (int count = 1; count <= 10; count++)
    {
        cout << "PSA for " << count << endl;
        if (count == 5) break;
    }
    

    //while
    int count = 0;
    while (count <= 9)
    { 
        count = count + 1;
        if (count == 5) continue;
        cout << "PSA while " << count << endl;
    }
    // Iteration Skip - Continue   

    //Do While 
    int i = 1;
    do{
        cout << "PSA DO WHILE "<< i << endl;
        i += 1;
    }while (i>10);
    
    // Nested LOOPS
    for (int i = 1; i <= 3; i++){
        for (int j=1; j<=3; j++){
            cout << i << j << " ";
        }
        cout << endl;
    }

    return 0;
}