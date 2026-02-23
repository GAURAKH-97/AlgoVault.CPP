#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
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
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// 6 5 4 3 2 1
// 7 6 5 4 3 2 1 
// 8 7 6 5 4 3 2 1