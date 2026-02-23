#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern(n);
    return 0;
}
// Enter the number of rows : 12
// 12 11 10 9 8 7 6 5 4 3 2 1 
// 12 11 10 9 8 7 6 5 4 3 2
// 12 11 10 9 8 7 6 5 4 3
// 12 11 10 9 8 7 6 5 4
// 12 11 10 9 8 7 6 5
// 12 11 10 9 8 7 6 
// 12 11 10 9 8 7
// 12 11 10 9 8
// 12 11 10 9
// 12 11 10
// 12 11
// 12