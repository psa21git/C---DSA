#include<iostream>
#include <limits.h> //for INT_MIN

using namespace std;

void solve(int num[],int n){
   for (int index = 0; index < n; index++)
    {
        num[index] += 10;
    } 
}

void printArray(int arr[],int size){
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
    
}

bool findTarget(int arr[],int size, int target){
    for (int i = 0;i<size; i++){
        int currentElement = arr[i];
        if(currentElement == target) return true;
    }
    return false;
}

int findMax(int arr[],int size){
    int maxAns = INT_MIN; // -2^31
    for (int i =0;i<size;i++){
        // max and min are predefined functions
        maxAns = max(maxAns,arr[i]);
        // if(arr[i]>maxAns) maxAns = arr[i];
    }
    return maxAns;
}

void printZeroesAndOnes(int arr[],int size){
    int countZeroes = 0;
    int countOnes = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0) countZeroes++;
        else if (arr[i] == 1) countOnes++;
    }
    cout << "Number of Ones : " << countOnes << endl;
    cout << "Number of Zeroes : " << countZeroes << endl;
    
}
 
void extremePrint(int arr[], int n) {
    int i = 0;
    int j = n-1;
    cout << "Extreme Printing : " << endl;
    while(i <= j) {
        if(i == j) {
            cout << arr[i] << " ";
            break;
        }
        else {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}

int main(){

    // //Array creation
    // int arr[10];
    
    // //error
    // // int brr[];

    // int crr[] = {10,20,30,40};
    // // index 4,5,6... shows garbage value!

    // int drr[5] = {100}; // rest all elements zero upto 5
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << drr[i] << endl;
    // }
    
    // //fill method
    // int fill_arr[4] = {10,20,30,40};
    // //starting address, ending address, value to be filled
    // fill(fill_arr, fill_arr + 4, 100);
    // for (int i = 0; i < 4; i++){
    //     cout << fill_arr[i] << " ";
    // }

    // //Input
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter array element : ";
    //     cin >> arr[i];
    // }
    // //Print
    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << arr[i] << " ";
    //     cout << i[arr] << " ";
    //     // arr[i] == i[arr]
    // }
    
    int size;
    cout << "enter size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0;i <size;i++){
        cout << "Enter array element : ";
        cin >> arr[i];
    }


    // //Functions
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // solve(arr,size);
    // printArray(arr,size);
    // //Array me pass by reference hota hai... agar function k andar change karrenge kuch value to real array me bhi change hoga !

    // //Linear Search
    // int target;
    // cout << "Enter target element : ";
    // cin >> target;

    // bool ans = findTarget(arr,size,target);
    // cout << "Search Result : " << ans << endl;

    // //Find MAX element in Array
    // int maxAns = findMax(arr,size);
    // cout << "Max element is : " << maxAns << endl;

    // //Count Zeroes and Ones
    // printZeroesAndOnes(arr,size);

    //Extreme Printing
    // extremePrint(arr,size);

    return 0;
}