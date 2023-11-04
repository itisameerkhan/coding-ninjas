#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralMatrix(vector<vector<int>> &matrix) {
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size()-1;
        vector<int> result;

        while(top <= bottom && left <= right) {
            for(int i=left;i<=right;i++) result.push_back(matrix[top][i]);
            top++;
            for(int i=top;i<=bottom;i++) result.push_back(matrix[i][right]);
            right--;
            if(top <= bottom) {
                for(int i=right;i>=left;i--) result.push_back(matrix[bottom][i]);
            }
            bottom--;
            if(left <= right) {
                for(int i=bottom;i>=top;i--) result.push_back(matrix[i][left]);
            }
            left++;
        }
        return result;
    }
};

int main() 
{
    vector<vector<int>> matrix = {{1,2,3,4,5},
                                  {16,17,18,19,6},
                                  {15,24,25,20,7},
                                  {14,23,22,21,8},
                                  {13,12,11,10,9}};
    
    Solution sol;
    vector<int> result = sol.spiralMatrix(matrix);
    for(auto i: result) cout<<i<<" ";
}

/*
Runtime
Details
4ms
Beats 33.34%of users with C++
Memory
Details
8.62MB
Beats 27.53%of users with C++
*/