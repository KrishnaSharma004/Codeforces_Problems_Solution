#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long  

void solve(){
    string b;
    cin >> b;
    for(int i=0;i<b.length()-1;i+=2){
        cout << b[i];
    }
    cout << b[b.length()-1] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}