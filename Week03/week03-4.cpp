//week03-4.cpp
//Leetcode 挑戰題120. Triangle
class Solution {//使用動態規劃 慢慢更新找到陣列
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int N = triangle.size();
        for(int i=N-2; i>=0; i--){
            for(int j=0; j<=i; j++){
              triangle[i][j] +=min(triangle[i+1][j],triangle[i+1][j+1]);
            }

        }
        return triangle[0][0];
    }
};
