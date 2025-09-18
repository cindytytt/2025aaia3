///week02-3.cpp Part2
///在CodeBlock 裡 必須開啟Settings-Compiler...把c++11打勾勾
///(SOIT106_ADVANCE_001) Using c++
#include <iostream>///cin cout 讀入資料 印出資料
#include <string>///string字串的功能
using namespace std;///使用(命名空間)的標準的 std
int main()
{
	string a;///宣告字串a
	cin>>a;///讀入字串 a
	string ans;///宣告字串 ans 放答案用的
	int N = a.length();///a字串的長度
	for(int i=N-1; i>=0;i--){///到過來的迴圈
		ans += a[i];///在迴圈裡,把a[i]塞到ans的後面
	}
	cout<<a <<'+'<<stoi(ans)<<'='
		<< stoi(a) +stoi(ans)<< endl;
}///stoi() is "string to int"把(字串)變成(整數)
