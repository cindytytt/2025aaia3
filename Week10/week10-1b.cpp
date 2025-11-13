//week10-1b.cpp 第一次for迴圈 第二次數學
//1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;
        if(high%2==1 || low%2==1)ans++;
        return ans;
    }
};
