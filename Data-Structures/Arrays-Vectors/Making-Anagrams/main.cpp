#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    unordered_map<char,int> map_a, map_b;
    for(int i = 0; i < a.length(); i++) {
        if(map_a.count(a.at(i) > 0))
            map_a[a.at(i)]++;
        else
            map_a.insert(make_pair(a.at(i), 1);
    }
    for(int i = 0; i < b.length(); i++) {
        if(map_b.count(b.at(i) > 0))
            map_b[b.at(i)]++;
        else
            map_b.insert(make_pair(b.at(i), 1);
    }
}

int main() {
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

/*
 * LOGIC:
 *
 * -> Store the occurrences of all characters in two unordered_maps.
 * -> Iterate through the unordered_maps
 * */