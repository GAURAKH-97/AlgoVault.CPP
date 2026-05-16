#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int brute(int number){
            int count=0;
            while(number>0){
                number=number/10;
                count++;
            }
            cout<<"Time Complexity: O((log10N + 1), as simple arithmetic operations in constant time are computed on integers.";
            cout<<"Space Complexity : O(1), as only a constant amount of additional memory for the count variable regardless of size of the input number.";
            return count;
        }
        int optimal(int number){
            int cnt = (int)(log10(number)+1);
            cout<<"Time Complexity: O(1), as simple arithmetic operations in constant time are computed on integers.";
            cout<<"Space Complexity : O(1), as only a constant amount of additional memory for the count variable regardless of size of the input number.";
            
            return cnt;
        }
        

};

int main(){
    solution sol;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int res= sol.optimal(number);
    cout<<"total digit is: "<<res;

    return 0;
}