//week07-3.cpp
//1275. Find Winner on a Tic Tac Toe Game 學習計畫
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};//{}代表初始直
        int now = 1;//現在的玩家
        int winner = 0;//還沒人勝利
        for(vector<int>&move : moves){
            int i=move[0],j = move[1];
            a[i][j] = now;//下棋在陣列
            if (now==a[i][0] && now==a[i][1]&&now==a[i][2])winner = now;//橫線
            if (now==a[0][j] && now==a[1][j]&&now==a[2][j])winner = now;//直線
            if (now==a[0][0] && now==a[1][1]&&now==a[2][2])winner = now;//左上
            if (now==a[0][2] && now==a[1][1]&&now==a[2][0])winner = now;//右上
            if (now==1) now = 2;
            else now = 1;
        }
        if(winner==1) return "A";
        else if(winner==2) return"B";
        else if (moves.size()==9)return "Draw";//平手
        else return "Pending";//還沒下完
    }
};
