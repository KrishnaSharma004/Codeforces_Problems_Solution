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
    
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a == 1 && b == 1 && c == 1) cout << a + b + c << '\n';
    else if(a == 1){
        int pr = a + b;
        if(c == 1) cout << pr + c << '\n';
        else cout << pr * c << '\n';
    }
    else if(b == 1){
        if(c == 1){
            cout << a * (b + c) << '\n';
        }else{
            cout << (min(a, c) + b) * max(a, c) << '\n';
        }
    }
    else if(c == 1){
        int pr = c + b;
        if(a == 1) cout << pr + a << '\n';
        else cout << pr * a << '\n';
    }
    else{
        cout << a * b * c << '\n';
    }
    return 0;
}