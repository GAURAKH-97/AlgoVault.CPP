#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j>=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1; i<=n; i++){
        int j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        while(j<n){
            cout<<"*";
            j++;
        }
        cout<<endl;

    }
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    pattern1(n);
    return 0;
}
// Enter the number of rows : 8
// ********
//  *******
//   ******
//    *****
//     ****
//      ***
//       **
//        *
