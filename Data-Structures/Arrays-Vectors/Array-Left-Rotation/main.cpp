#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> leftRotate(vector<int> arr, int rotations){
    vector<int> rotatedArr = arr;
    for(int i = 0; i < rotations; i++){
        int firstElement = rotatedArr[0];
        rotatedArr.erase(rotatedArr.begin());
        rotatedArr.push_back(firstElement);
    }
    return rotatedArr;
}

int main() {
    int n, d; //n: number of integers in the array, d: number of left rotations to perform
    cin >> n >> d;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> rotatedArr = leftRotate(arr, d);
    for(int j = 0; j < rotatedArr.size(); j++){
        cout << rotatedArr[j] << " ";
    }
    return 0;
}
