///week05-2.cpp
///���xstringstream
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    cout <<"�п�J�@�q�^��,�̭��i���Ů�: ";
    string s;
    getline(cin,s);
    cout << "Ū��Fs�r��:"<<s<<endl;

    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<"���@�Ӧr:"<<word<< endl;
    }
}
