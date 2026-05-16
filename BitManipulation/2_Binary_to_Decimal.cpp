#include<bits/stdc++.h>
using namespace std;
int BTD(int binary){
    int res=0, power=0;
    while(binary>0){
        int rem= binary%10;
        res=res+(rem*pow(2,power));
        power++;

        binary=binary/10;
    }
    return res;
}

int main(){
    int binary;
    cout<<"Enter a Binary number: ";
    cin>>binary;
    int result = BTD(binary);
    cout<<"Decimal representation is: "<<result;

    return 0;
}