#include <iostream>
#include <vector>
#include <string>
#include <cmath>
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
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vint a(n);
        floop(i,0,n){
            cin >> a[i];
        }

        if(n==1){
            cout << a[0] << nl;
            continue;
        }

        bool flag = false ;
        //agar sare elements negative hai to

        int ans = a[0];
        floop(i,0,n){
            if(a[i]>0){
                flag = true;
                break;
            }
            ans = max(ans,a[i]);
        }

        if(!flag){
            cout << ans << nl;
            continue;
        }
        int sign;
        ans = a[0];
        if(a[0]>0) sign = 1;
        else sign = -1;

        ll total_max = 0;
        floop(i,0,n){
            if((sign == 1 && a[i]>0) || (sign == -1 && a[i]<0)) ans = max(ans,a[i]);

            else{
                total_max+=ans;
                ans = a[i];
                if(sign==1)  sign = -1;
                else sign = 1;
            }

            if(i==(n-1)){
                if((a[n-1]>0 && a[n-2]>0) || (a[n-1]<0 && a[n-2]<0)){
                    ans = max(ans,a[i]);
                    total_max+=ans;
                }else{
                    total_max += a[n-1];
                }
            }
        }

        cout << total_max << nl;
    }
    return 0;
}