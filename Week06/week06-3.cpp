//week06-3.cpp
//Leetcode �ǲ߭p�e 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {//C++�i���j��
        vector<int> a;
         for(string op:operations){
            //cout <<op <<"\n";
            if(op[0]=='+'){//���Ƭۥ[
                int temp=a.back();//�O�̫�@�]
                a.pop_back();//�ȮɦR��
                int temp2 =a.back();//�O�̫��]
                a.push_back(temp);//��^�̫�@��
                a.push_back(temp+temp2);//��Ƭۥ[

            }else if(op[0]=='D'){//�ƻs�̫�@��*2
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){//�R�̫�@��
                a.pop_back();
            }else{//��ƶ�^
                a.push_back(stoi(op));
            }
          } //�̫��for�j���a���ȥ����[�_��
          int ans = 0;
          for(int now :a){//C++�i���^��
            ans += now;
          }
        return ans;
     }
};
