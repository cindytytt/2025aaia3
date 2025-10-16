//week06-3.cpp
//Leetcode 學習計畫 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {//C++進階迴圈
        vector<int> a;
         for(string op:operations){
            //cout <<op <<"\n";
            if(op[0]=='+'){//末數相加
                int temp=a.back();//記最後一夜
                a.pop_back();//暫時吐掉
                int temp2 =a.back();//記最後兩夜
                a.push_back(temp);//塞回最後一項
                a.push_back(temp+temp2);//兩數相加

            }else if(op[0]=='D'){//複製最後一頁*2
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){//吐最後一位
                a.pop_back();
            }else{//整數塞回
                a.push_back(stoi(op));
            }
          } //最後用for迴圈把a的值全部加起來
          int ans = 0;
          for(int now :a){//C++進階回圈
            ans += now;
          }
        return ans;
     }
};
