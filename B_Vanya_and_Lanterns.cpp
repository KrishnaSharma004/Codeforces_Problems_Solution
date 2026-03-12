#include <bits/stdc++.h>

using namespace std;
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, l;
    cin >> n >> l;

    vector<int> a(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i];
    }
    sort(all(a));
    vector<double> diff(n + 1);
    diff[n] = l - a[n - 1];
    diff[0] = a[0];
    for(int i = 1 ; i < n ; ++i){
        diff[i] = (a[i] - a[i - 1]) / 2.0;
    }
    double mx = diff[0];
    for(int i = 0 ; i <= n ; ++i){
        mx = max(diff[i], mx);
    }
    cout << fixed;
    cout << setprecision(10) << mx <<  '\n';
    
    return 0;
}