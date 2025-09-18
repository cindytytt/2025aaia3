//week02-2b.cpp Part2
//(SOIT106_ADVANCE_001) Using c++
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	string ans;
	cin>>a;
	int N = a.length();
	for(int i=N-1; i>=0;i--){
		ans += a[i];
	}
	cout<<a <<'+'<<stoi(ans)s<<'='
		<< stoi(a) +stoi(ans)<< endl;
}
