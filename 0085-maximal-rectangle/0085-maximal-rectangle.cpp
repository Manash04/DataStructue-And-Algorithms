class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int maxi=0;
        vector<vector<int>>preSum(row , vector<int>(col,0));
        
        for(int i=0; i<col; i++){
            int sum=0;
            for(int j=0; j<row; j++){
                if(matrix[j][i]=='0'){
                    sum=0;
                }else{
                    sum+=1;
                }
                preSum[j][i]=sum;
            }
        }

        // Calculating the max area of the preSum[row]

        for(int i=0; i<row; i++){
            stack<int>st;
            for(int j=0; j<col; j++){
                while(!st.empty() && preSum[i][j]< preSum[i][st.top()]){
                    int temp = preSum[i][st.top()];
                    st.pop();
                    if(!st.empty()){
                    maxi = max (maxi , (temp*(j - st.top() -1)));
                    }else{
                    maxi = max (maxi , (temp*(j - (-1) -1)));
                    }
                }
                st.push(j);
            }
            while(!st.empty()){
                int temp = preSum[i][st.top()];
                    st.pop();
                    if(!st.empty()){
                    maxi = max (maxi , (temp*(col - st.top() -1)));
                    }else{
                    maxi = max (maxi , (temp*(col - (-1) -1)));
                    }
            }
        }return maxi;

    }
};