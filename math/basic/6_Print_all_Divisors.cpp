#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
     vector<int> brute(int number){
        vector<int> res;
        for(int i=1; i<=number; i++){
            if(number%i==0){
                res.push_back(i);
            }
        }
        cout<<"Time Complexity: O(N)";
        cout<<"Space Complexity : O(1)";
        return res;
            
    }    
    vector<int> optimal(int number){
        vector<int> res;
        for(int i=1; i<=sqrt(number); i++){
            if(number%i==0){
                res.push_back(i);
                if(i!=number/i){
                    res.push_back(number/i);
                }
            }
        }
        cout<<"Time Complexity: O(sqrt(N))";
        cout<<"Space Complexity : O(2*sqrt(N))";
        return res;
        

            
        }
};

int main(){
    solution sol;
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    vector<int> result=sol.brute(number);
    cout << "Divisors of " << number << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}