//week06-4.cpp
//Leetcode 學習計畫657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x= 0,y = 0;//在原點
        for(char c : moves){//C++進階迴圈
            if(c=='U'){//上
                y++;
            }else if(c=='D'){//下
                y--;
            }else if(c=='L'){//左
                x--;
            }else if(c=='R'){//右
                x++;
            }
        }//最後是否還在原點
        if(x==0 && y==0)return true;
        else return false;
    }
};
