//week07-3.cpp
//1275. Find Winner on a Tic Tac Toe Game �ǲ߭p�e
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};//{}�N���l��
        int now = 1;//�{�b�����a
        int winner = 0;//�٨S�H�ӧQ
        for(vector<int>&move : moves){
            int i=move[0],j = move[1];
            a[i][j] = now;//�U�Ѧb�}�C
            if (now==a[i][0] && now==a[i][1]&&now==a[i][2])winner = now;//��u
            if (now==a[0][j] && now==a[1][j]&&now==a[2][j])winner = now;//���u
            if (now==a[0][0] && now==a[1][1]&&now==a[2][2])winner = now;//���W
            if (now==a[0][2] && now==a[1][1]&&now==a[2][0])winner = now;//�k�W
            if (now==1) now = 2;
            else now = 1;
        }
        if(winner==1) return "A";
        else if(winner==2) return"B";
        else if (moves.size()==9)return "Draw";//����
        else return "Pending";//�٨S�U��
    }
};
