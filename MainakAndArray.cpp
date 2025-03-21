#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <long long> v(n);
        for(long long i=0;i<n;++i){
            cin >> v[i];
        }//input taken till now
        long long ans = v[n-1] - v[0];
        for(long long i=1;i<n;++i){
            ans = max(ans,v[i]-v[0]);
        }
        for(long long i=0;i<n-1;++i){
            ans = max(ans,v[n-1]-v[i]);
        }
        for(long long i=0;i<n-1;++i){
            ans = max(ans,v[i]-v[i+1]);
        }
        cout << ans << endl;
        
    }
    return 0;
}