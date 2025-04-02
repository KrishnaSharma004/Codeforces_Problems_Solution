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
#define pb(x) push_back(x)
#define ull unsigned long long 

int main(){
    int n,a,b,c;
    cin >>n>>a>>b>>c;
    
    int ans =0;
    for(int i=0;i<=4000;++i){
        for(int j=0;j<=4000;++j){
            int zc = n- (i*a +j*b);
            if(zc<0) break;
            
            double z = (zc/(double)c);
            int zz = (int)z; 
            if(z==zz) 
            ans = max(ans,(i+j+zz));
        }
    }
    cout << ans ;
}
