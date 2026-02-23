#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i;j++){
            if((i+j)<10){
                cout<<" "<<i+j<<" ";
            }else{
                cout<<i+j<<" ";
            }
            
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
//  1 
//  2  3
//  3  4  5
//  4  5  6  7
//  5  6  7  8  9
//  6  7  8  9 10 11
//  7  8  9 10 11 12 13
//  8  9 10 11 12 13 14 15
