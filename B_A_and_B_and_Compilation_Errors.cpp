#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int sumA = 0, sumB = 0, sumC = 0;
    for(int i = 0; i < n ; ++i){
        int x;
        cin >> x;
        sumA += x;
    }
    for(int i = 0; i < n - 1 ; ++i){
        int x;
        cin >> x;
        sumB += x;
    }
    for(int i = 0; i < n - 2; ++i){
        int x;
        cin >> x;
        sumC += x;
    }
    cout << sumA - sumB << '\n' << sumB - sumC << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}