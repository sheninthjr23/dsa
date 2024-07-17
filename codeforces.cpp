#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {4,1,2,1,2};
    int ans=0;
	for(auto x:nums) {
        cout << ans;
	    ans^=x;
    }
    cout << ans;
    return 0;
}