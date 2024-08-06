#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasArrayTwoCandidates(vector<int> &arr, int x){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                return true;
            }
        }
    }
    return false;
}
bool twoSum2PointerApproach(vector<int> &arr, int x){
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = arr.size();
    sort(arr.begin(),arr.end());
    
    int l = 0;
    int h = n-1;                     
    while(l < h){
        int sum = arr[l] + arr[h];
        if (sum == x) return true;
        else if (sum < x) l++;
        else h--;
    }
    return false;
}   

int main(){ 
    return 0;
}