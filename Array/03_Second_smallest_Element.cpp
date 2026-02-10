#include<bits/stdc++.h>
using namespace std;

class largest {
    public:
        void brute_force(int arr[], int n){
            if (n == 0 || n == 1)
                cout << -1 << " " << -1 << endl;
            int smallest = INT_MAX, second_smallest = INT_MAX;
            int i;
            for (i = 0; i < n; i++) {
                smallest = min(smallest, arr[i]); 
            }
            for (i = 0; i < n; i++) {
                if (arr[i] < second_smallest && arr[i] != smallest)
                    second_smallest = arr[i];
            }
            cout << "Second smallest element is " << second_smallest << endl;
            cout<<"Time Complexity: O(2N), we do two linear traversals in our array."<<endl;
            cout<<"Space Complexity: O(1), as we are using a constant amount of space for variables."<<endl;
        }
        void better(int arr[], int n){
            //work only if all element is unique
            if(n == 0 || n == 1)
                cout << -1 << " " << -1 << endl;
            sort(arr, arr + n);
            int second_smallest = arr[1]; 
            cout << "Second smallest element is " << second_smallest << endl;
            cout<<"Time Complexity: O(N log N), for sorting the array."<<endl;
            cout<<"Space Complexity: O(1), as we are using a constant amount of space for variables."<<endl;
        }
        int optimal(int arr[], int n) {
            if (n < 2)
                cout<< -1;
            int smallest = INT_MAX, second_smallest = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (arr[i] < smallest) {
                    second_smallest = smallest;
                    smallest = arr[i];
                } 
                else if (arr[i] < second_smallest && arr[i] != smallest) {
                    second_smallest = arr[i];
                }
            }
            cout << "Second smallest element is " << second_smallest << endl;
            cout<<"Time Complexity: O(N), we do two linear traversals in our array."<<endl;
            cout<<"Space Complexity: O(1), as we are using a constant amount of space for variables."<<endl;
        
        }

};


int main() {
    largest largest;
    int arr[]  = {2, 5, 1,8, 10, 5, 25, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // largest.better(arr, n);
    largest.brute_force(arr,n);
    // largest.optimal(arr, n);
   
    return 0;
}