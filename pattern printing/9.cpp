#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
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
// Enter the number of rows : 7
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1