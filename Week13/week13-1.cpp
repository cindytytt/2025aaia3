//weekk13-1.cpp 聖誕倒數寫程式 2025第一天第一題
int main() {
    char c;
    int d;
    int now = 50;
    int ans = 0;
    while (cin>>c>>d){
        //if(c=='L') cout<<"往左轉"<<d<<"格\n";
        //if(c=='R') cout<<"往右轉"<<d<<"格\n";
        if(c=='L') now = now-d;
        if(c=='R') now = now+d;

        now = (now%100 + 100)%100;
        //cout<<"現在刻度是:"<<now<<"\n";
        if(now==0) ans++;
    }
    cout << "答案是:"<<ans;
}
