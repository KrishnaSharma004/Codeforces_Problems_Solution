#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
    map<string, int> mp;
    while(n--){
        string str;
        cin >> str; 
        if(mp.find(str) == mp.end()){
            cout << "OK" << '\n';
            mp[str]++;
        }else{
            cout << str << mp[str] << '\n';
            mp[str]++;
        }
    }
    return 0;
}