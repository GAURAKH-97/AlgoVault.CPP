#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int Number=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Number<10){
                cout<<" "<<Number++<<" ";
            }else{
                cout<<Number++<<" ";
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
// Enter the number of rows : 6
//  1  2  3  4  5  6 
//  7  8  9 10 11 12 
// 13 14 15 16 17 18
// 19 20 21 22 23 24 
// 25 26 27 28 29 30
// 31 32 33 34 35 36 