#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int numOccurences(string input, vector<string> arr){
    int occurences = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i].compare(input) == 0) occurences++;
    }
    return occurences;
}

int main() {
    int n, q;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        arr.push_back(input);
    }
    cin >> q;
    for(int j = 0; j < q; j++){
        string input;
        cin >> input;
        int occurences = numOccurences(input, arr);
        cout << occurences << endl;
    }
    return 0;
}
