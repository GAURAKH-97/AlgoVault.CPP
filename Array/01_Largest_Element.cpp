#include<bits/stdc++.h>
using namespace std;

class largest {
    public:
        int Brute_force(vector<int>& arr) {
            sort(arr.begin(), arr.end());
            cout<<endl<<"Time Complexity: O(N log N), where N is the size of the array, as we are sorting the array."<<endl;
            cout<<"Space Complexity: O(1), as we are using a constant"<<endl;
            return arr[arr.size() - 1];
        }
        int optimal(vector<int>& arr) {
            int max=arr[0];
            for(int i=1; i<arr.size(); i++){
                if(arr[i]>=max){
                    max=arr[i];
                }
            }
            cout<<endl<<"Time Complexity: O(N), where N is the size of the array, as we are iterating through the array once."<<endl;
            cout<<"Space Complexity: O(1), as we are using a constant"<<endl;
            return max;
        }

};


int main() {
    largest largest;
    vector<int> arr1 = {2, 5, 1,8, 10, 5, 7, 3, 0, 9};
    // cout << "The Largest element in the array is: " << largest.Brute_force(arr1) << endl;
    cout << "The Largest element in the array is: " << largest.optimal(arr1);
   
    return 0;
}