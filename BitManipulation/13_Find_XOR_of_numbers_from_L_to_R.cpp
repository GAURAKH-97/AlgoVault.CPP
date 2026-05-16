#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int XORtillN(int n) {
        if(n % 4 == 1) return 1;
        if(n % 4 == 2) return n+1;
        if(n % 4 == 3) return 0;
        return n;
    }
public:
    int brute(int l, int r){		
		int ans = 0;
		for(int i=l; i <= r; i++) {
		    ans ^= i;
		}
		return ans;
	}
    int optimal(int l, int r){			
		return XORtillN(l-1) ^ XORtillN(r);
	}


int main() {
    int l = 3, r = 5;
    Solution sol; 
    int ans = sol.optimal(l, r);
    
    cout << "The XOR of numbers from " << l << " to " << r << " is: " << ans;
    
    return 0;
}
