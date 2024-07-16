#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int n)
{
    int l = 0, h = n - 1;

    // while (l < h)
    // {
    //     swap(arr[l], arr[h]);
    //     l++;
    //     h--;
    // }

    // Pro ki trh code
    // while (l < h)
    // swap(arr[l++], arr[h--]);

    while (l < h)
    {
        // swap(arr[l], arr[h]);
        arr[l] = arr[l] ^ arr[h];
        arr[h] = arr[h] ^ arr[l];
        arr[l] = arr[l] ^ arr[h];
        l++;
        h--;
    }
}

int main(){

    // int a[10];

    // fill(a,a+5,69);
    // fill(a+5,a+10,100);

    // for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    // {
    //     cout << i << "-->" << a[i] << endl;
    // }
    
    // Different Methods of Swap

    // 1. swap inbuilt fn
    // int a = 5, b = 6;
    // swap(a, b);
    // cout << "a: =" << a << ", b:" << b << endl;

    // 2. temp variable
    // int a = 5, b = 6;
    // int temp = a; // temp will be 5
    // a = b; // a will be 6
    // b = temp; // b will be 5
    // cout << "a: =" << a << ", b:" << b << endl;

    // 3. arithematic method, interview question????????
    // int a = 5, b = 6;
    // a = a + b; // sum of a and b stored in a, a = 11, b = 6;
    // b = a - b; // subtracting b from new a gives initial value of a,, a = 11, b = 5
    // a = a - b; // subtract new b from new a gives initial value of b... a = 6, b = 5
    // cout << "a:" << a << ", b:" << b << endl;


    // 4. XOR bitwise method, interview question ???
    // int a = 5, b = 6;
    // a = a ^ b;
    // b = b ^ a;
    // a = a ^ b;
    // cout << "a:" << a << ", b:" << b << endl;


    // reverse array
    
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    // M1. custom reversal using 2-pointer approach
    reverseArray(arr, n);

    // M2. STL, C++ lib
    // reverse(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}