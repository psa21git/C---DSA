#include<iostream>
using namespace std;

//136 leetcode problem
//Leetcode Q
// XOR operator - 2^2^3 ans is 3
// same numbers get deleted
// 0 ^ any number =  that number
int findUniqueNumber(int arr[], int n){
    int ans=0;
    // to find the final answer, we need to XOR all the numbers in the array
    for(int i=0; i<n;i++){
        ans=ans^arr[i];
    }

    return ans;
}

int main(){
    int arr[]={2,4,1,4,1};
    int size=5;
    int ans= findUniqueNumber(arr,size);
    cout<<"Unique Number is: "<< ans << endl;
    return 0;
}