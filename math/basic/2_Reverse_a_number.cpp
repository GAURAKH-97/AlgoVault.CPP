#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        int optimal(int number){
            int rev=0;
            while(number>0){
                int rem= number%10;
                number=number/10;
                rev=(rev*10)+rem;
            }
            cout<<"Time Complexity: O((log10N + 1)";
            cout<<"Space Complexity : O(1)";
            
            return rev;

        }
};

int main(){
    solution sol;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int res= sol.optimal(number);
    cout<<"reverse of "<<number<<" is: "<<res;

    return 0;
}