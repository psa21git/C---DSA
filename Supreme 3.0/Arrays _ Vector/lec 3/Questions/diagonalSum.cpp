#include<iostream>
using namespace std;
//diagonal sum
void principalDiagonalSum(int arr[][3],int rowSize, int colSize){
    int sum=0;
    for(int i=0; i<rowSize; i++){
        sum=sum+arr[i][i];
    }
    cout<<" principal diagonal sum: "<< sum << endl;
}
void secondaryDiagonalSum(int arr[][3],int rowSize, int colSize){
    int sum = 0;
    for(int r = 0; r<rowSize; r++){
        for (int c= 0;c<colSize; c++){
            // as it is a square matrix rowSize ==  colSize
            if ((r+c) == (rowSize-1)){
                sum += arr[r][c]; 
            }
        }
    }
    cout<<" secondary diagonal sum: "<< sum << endl;
}
int main(){
    int arr[3][3]={{10,20,30},
                    {40,80,20},
                    {20,40,30}};
    int rowSize=3;
    int colSize=3;
    principalDiagonalSum(arr,rowSize,colSize);
    secondaryDiagonalSum(arr,rowSize,colSize);
    return 0;
} 
