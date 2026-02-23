#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>0; j--){
            cout<<j<<" ";
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
// 8 7 6 5 4 3 2 1 
// 8 7 6 5 4 3 2 1 
// 8 7 6 5 4 3 2 1
// 8 7 6 5 4 3 2 1
// 8 7 6 5 4 3 2 1 
// 8 7 6 5 4 3 2 1 
// 8 7 6 5 4 3 2 1
// 8 7 6 5 4 3 2 1