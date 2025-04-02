#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define sp " "
void solve(){
    int m,s;
    cin >> m >> s;
    if(s==0){
        if(m==1){
            cout << "0 0";
            return ;
        }else{
            cout << "-1 -1";
        }
        return;
    }
    str maxi = "";
    str mini = "";
    for(int i=0;i<m;++i){
        int k = min(9,s);
        maxi.pb('0'+k);
        s-=k;
    }
    if(s>0){
        cout << "-1 -1";
        return;
    }
    for(int i=m-1;i>=0;i--)
        mini.pb(maxi[i]);
    int j=0;
    while(mini[j]=='0')
        j++;
    mini[0]++;
    mini[j]--;
    cout << mini <<sp<< maxi;
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}