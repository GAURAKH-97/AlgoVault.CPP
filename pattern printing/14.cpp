#include <bits/stdc++.h>
using namespace std;
void pattern1(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=(n-i)){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=((2*i)-1)){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}

void pattern2(int n){
    for(int i=1; i<=n; i++){
        int j=1;
        while(j<=(n+i-1)){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
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
    pattern2(n);
    return 0;
}
// Enter the number of rows : 6
//      *
//     ***
//    *****
//   *******
//  *********
// ***********