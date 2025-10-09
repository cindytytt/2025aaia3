//week05-1.cpp
//Leetcode 學習計畫 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        //ss >> word;
        //cout << "讀到了" << word << "\n";
        while(ss >> word){

        }
        return word.length();
    }
};
