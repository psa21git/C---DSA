#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector <int> arr = {1,2,3,4,5};

    // creating a copy temporary array
    vector <int> temp;
    cout << "actual array : " << endl;
    for(int i: arr){
        cout << i << " ";
        temp.push_back(i);
    }
    cout << endl;
    
    int x;
    cout << "Number of Rotations? : ";
    cin >> x;

    int rot = x % arr.size();

    for (int i = 0; i < arr.size(); i++){
        if ((i + rot) < arr.size()){
            arr[i + rot] = temp[i];
        }
        else{
            arr[(i + rot) - arr.size()] = temp[i];
        }
    }

    cout << "rotated array : " << endl;
    for (int j: arr){
        cout << j << " ";
    }
    return 0;
}