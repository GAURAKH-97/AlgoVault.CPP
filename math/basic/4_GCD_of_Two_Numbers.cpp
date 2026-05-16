#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int brute(int number1, int number2){
        int res=1;
        for(int i=1;i<=min(number1,number2);i++){
            if(number1%i==0&&number2%i==0){
                res=i;
            }
        }
        cout<<"Time Complexity: O(min(N1, N2))"<<endl;
        cout<<"Space Complexity: O(1)"<<endl;
        return res;

    }
    int better(int number1, int number2){
        int res=1;
        for(int i=min(number1,number2);i>0;i--){
            if(number1%i==0&&number2%i==0){
                res=i;
                break;
            }
        }
        cout<<"Time Complexity: O(min(N1, N2))"<<endl;
        cout<<"Space Complexity: O(1)"<<endl;
        return res;

    }
    int optimal(int number1, int number2){
        int res=1;
        while(number1>0&&number2>0){
            if(number1>number2){
                number1=number1%number2;
            }else{
                number2=number2%number1;
            }
        }
        cout<<"Time Complexity: O(log(min(N1, N2)))"<<endl;
        cout<<"Space Complexity: O(1)"<<endl;
        return number1!=0?number1:number2;

    }
};

int main(){
    solution sol;
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    int res= sol.optimal(num1,num2);
    cout<<"GCD of two number is: "<<res;

    return 0;
}