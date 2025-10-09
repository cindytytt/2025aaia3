///week05-3c.cpp Part2
///CPE 第二題 UVA 483
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while ( getline(cin,line) ){
        stringstream ss(line);
        string word;
        ss >> word;
        reverse(word.begin(), word.end() );
        cout<<word;
        while (ss>>word){
            reverse(word.begin(), word.end());
            cout<<" "<<word;
            cout << "讀到了"<<word<<endl;
        }
        cout << line << endl;
    }

}
