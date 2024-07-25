#include<iostream>
#include<cmath>

using namespace std;

int main() {
    unsigned long long n,m,a;
    cin >> n >> m >> a;
    unsigned long long val = ceil((double)m/a) * ceil((double)n/a);
    cout << val;
    return 0;
}