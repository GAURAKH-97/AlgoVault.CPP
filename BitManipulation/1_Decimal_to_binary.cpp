#include <bits/stdc++.h>
using namespace std;
int DTB(int num){
    // string res="";
    // while(num>0){
    //     int rem= num%2;
    //     num=num/2;
    //     res=to_string(rem)+res;

    // }
    int res=0;
    int place=1;
    while(num>0){
        int rem= num%2;
        num=num/2;
        res=res+(rem*place);
        place=place*10;
    }
    return res;
    
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=0;i<=num;i++){
        int result = DTB(i);
        cout<<"Binary representation of "<<i<<" is: "<<result<<endl;
    }

    return 0;
}