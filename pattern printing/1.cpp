#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cout<<i<<" ";
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
// 1 1 1 1 1 1 
// 2 2 2 2 2 2
// 3 3 3 3 3 3
// 4 4 4 4 4 4
// 5 5 5 5 5 5
// 6 6 6 6 6 6