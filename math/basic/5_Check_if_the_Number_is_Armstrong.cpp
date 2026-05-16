#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
        bool optimal(int number){
            int len= to_string(number).length();
            int dummy=number;
            int ans=0;
            while(number>0){
                int rem= number%10;
                ans += round(pow(rem, len));
                cout<<ans<<" "<<endl;
                number/=10;

            }
            cout<<"Time Complexity: O((log10N)";
            cout<<"Space Complexity : O(1)";
            return dummy==ans;
        }
};

int main(){
    solution sol;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(sol.optimal(number)){
        cout<<number<<" is a armstrong number";
    }else{
        cout<<number<<" is a not armstrong number";
    }


    return 0;
}