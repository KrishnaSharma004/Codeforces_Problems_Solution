#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>

void solve(){
    int n,k;
    cin >> n >> k;
    
    str s;
    cin >> s;
    //want : k consecutive Bs with least ws recolored
    //find all the possible 'k' length segments
    //find the 'k' length window with least ws
    
    //sliding window
    int mini = n;//worst case entire string can made of Bs
    int i = 0,j=0;//bounds of the window
    int whites = 0;//count of ws in this window
    while(j<n){
        if(s[j]=='W') whites++;
        //if wnd size is less than k.
        if(j-i+1 < k){
            j++;
            continue;
        }
        mini =min(whites,mini);
        //slide the window
        j++;
        if(s[i]=='W') whites--;
        i++;
    }
    cout << mini << nl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
