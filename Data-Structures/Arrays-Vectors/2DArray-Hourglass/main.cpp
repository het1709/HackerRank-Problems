#include <map>
#include <queue>
#include <iostream>

using namespace std;


int getHourglassSum(vector< vector<int> > arr ,int i, int j){
    return (arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
}

int getLargestHourglassSum(vector< vector<int> > arr){
    int maxSum = -99;
    for(int i = 0; i < arr.size() - 2; i++){
        for(int j = 0; j < arr[0].size() - 2; j++){
            int hourglassSum = getHourglassSum(arr, i, j);
            if(hourglassSum > maxSum) maxSum = hourglassSum;
        }
    }
    return maxSum;
}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    cout << getLargestHourglassSum(arr);
    return 0;
}
