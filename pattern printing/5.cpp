#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1; i<=n;i++){
        for(int j=0; j<i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    pattern(n);
    return 0;
}
// Enter the number of rows : 8
// * 
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * * * *
// * * * * * * * *