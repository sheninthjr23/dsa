#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int i = n - 2;
    while(i >= 0 && s[i] >= s[i+1]) {
        i--;
    }
    if(i >= 0) {
        int j = n - 1;
        while(s[j] <= s[i]) {
            j--;
        }
        swap(s[i],s[j]);
    }
    reverse(s.begin()+i+1,s.end());
    cout << s << endl;
    return 0;
}