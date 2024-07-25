#include<iostream>
#include<vector>

using namespace std;

int main() {
    int rowIndex = 3;
    vector<int> res(1,1);
    int prev = 1;
    for(int k = 1;k <= rowIndex;k++) {
        cout << rowIndex - k + 1 << endl;
        int nextVal = prev * (rowIndex - k + 1) / k;
        res.push_back(nextVal);
        prev = nextVal;
    }
    return 0;
}