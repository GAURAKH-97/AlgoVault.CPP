#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    int i=0;
    while(i<n){
        int j=0;{
            while(j<n-i){
                cout<<n-i-j<<" ";
                j++;
            }
            cout<<endl;
        }

        i++;
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
// Enter the number of rows : 8
// 8 7 6 5 4 3 2 1 
// 7 6 5 4 3 2 1
// 6 5 4 3 2 1
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1