#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    string str;
    cin >> str;
    string nw = "";
    nw = str[str.size() - 1];
    str.pop();
    if(str.size() > 0)
        nw += str[str.size() - 1];
    reverse(all(nw));
    int num = stoi(nw);
    int p = num % 4;
    int one = 1, two = 1, three = 1, four = 1;
    for(int i  = 0; i < p ; ++i){
        two *= 2;
        three *= 3;
        four *= 4;
    }
    cout << (one + two + three + four) % 5 << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
