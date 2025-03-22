#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,q;
        cin >> n >> q;
        vector <long long> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        long long o_sum =0;
        for(int i=0;i<n;++i){
            o_sum +=a[i];
        }
        vector <long long> pf_sum(n+1,0);
        for(int i=1;i<=n;++i){
            pf_sum[i] = pf_sum[i-1]+a[i-1];
        }
        while(q--){
            long long l,r,k;
            cin >> l >> r >> k;
            long long remove = pf_sum[r]-pf_sum[l-1];
            long long add = (r-l+1)*k;
            long long sum = o_sum - remove + add ;
            if(sum%2==1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        
    }
    return 0;
}