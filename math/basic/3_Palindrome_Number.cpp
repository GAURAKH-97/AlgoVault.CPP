#include <iostream>
using namespace std;
bool palindrome(int n) {
    int revNum = 0;
    int dup = n;
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
     cout<<"Time Complexity: O((log10N)";
    cout<<"Space Complexity : O(1)";
    if (dup == revNum) {
        return true; 
    } else {
        return false; 
    }
}

int main() {
     int number;
    cout<<"Enter a number: ";
    cin>>number;

    if (palindrome(number)) { 
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
