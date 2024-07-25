#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j = 0; j<3;j++) {
            int data;
            cin >> data;
            if(data == 1) sum++;
        }
        if(sum >= 2) {
            res++;
        }
    }
    cout << res;
    return 0;
}