#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    vector<int> superiorElements(vector<int>& arr) {
        // Write your code here.
        vector<int> result;
        int n = arr.size();
            int max = -1;
            for(int i=n-1;i>=0;i--) {
                if(arr[i] > max) {
                    max = arr[i];
                    result.push_back(arr[i]);
                }
            }
            // reverse(result.begin(), result.end());
            return result;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    Solution sol;
    vector<int> result = sol.superiorElements(arr);
    for(auto i: result) cout<<i<<" ";
}