#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    bool brute(int number)
    {
        int cnt = 0;
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                cnt++;
            }
        }
        cout << "Time Complexity: O(N)";
        cout << "Space Complexity : O(1)";
        if (cnt == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool optimal(int number)
    {
        int cnt = 0;
        for (int i = 1; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                cnt++;
                if (number / i != i)
                {
                    cnt++;
                }
            }
        }

        cout << "Time Complexity: O(sqrt(N))";
        cout << "Space Complexity : O(1)";
        if (cnt == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    solution sol;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (sol.optimal(number))
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}