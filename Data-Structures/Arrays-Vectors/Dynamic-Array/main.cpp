#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
void executeQuery(int querySelector, int x, int y, int &lastAns, vector< vector<int> > &seqList){
    unsigned long index = (x^lastAns)%seqList.size();
    switch(querySelector){
        case 1:
            seqList[index].push_back(y);
            break;
        case 2:
            lastAns = seqList[index][y%seqList[index].size()];
            cout << lastAns << endl;
            break;
        default:
            cout << "INVALID INPUT";
    }
}
int main() {
    int n, q, lastAns = 0;
    cin >> n >> q;
    vector< vector<int> > seqList(n);
    for(int i = 0; i < q; i++){
        int querySelector, x, y;
        cin >> querySelector >> x >> y;
        executeQuery(querySelector, x, y, lastAns, seqList);
    }
    return 0;
}
