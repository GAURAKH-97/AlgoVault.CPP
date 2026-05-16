#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isOdd(int n) {
        return (n & 1) != 0?true:false; 
    }
};

int main() {
    Solution sol;
    int num = 0;

    if (sol.isOdd(num)) {
        cout << num << " is odd." << endl;
    } else {
        cout << num << " is not odd." << endl;
    }

    return 0;
}