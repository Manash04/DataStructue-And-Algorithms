//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
  
  void Fn(vector<string>&ans , string temp , vector<vector<int>>&mat , int i , int j , int n){
      
      if(i==n-1 && j==n-1){
          ans.push_back(temp);
          return;
      }
      
      mat[i][j]=-1;
      //down
      if(i<n-1 && mat[i+1][j]==1){
          temp.push_back('D');
          Fn(ans , temp , mat , i+1 ,j , n);
          temp.pop_back();
      }
      //left
      if(j>0 && mat[i][j-1]==1){
          temp.push_back('L');
          Fn(ans , temp , mat , i ,j-1 , n);
          temp.pop_back();
      }
      
      //right
      if(j<n-1 && mat[i][j+1]==1){
          temp.push_back('R');
          Fn(ans , temp , mat , i ,j+1 , n);
          temp.pop_back();
      }
      
      //up
      if(i>0 && mat[i-1][j]==1){
          temp.push_back('U');
          Fn(ans , temp , mat , i-1 ,j , n);
          temp.pop_back();
      }
      mat[i][j]=1;
  }
    vector<string> findPath(vector<vector<int>> &mat) {
        if(mat[0][0]==0) return {};
        vector<string>ans;
        int n = mat.size();
        Fn(ans , "" , mat , 0 , 0 , n);
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends