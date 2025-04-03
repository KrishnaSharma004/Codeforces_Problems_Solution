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
#define for(i,a,b) for(int i=a;i<b;++i)
#define sp " "
int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vint a(n);
            int sum=0;
            for(i,0,n/2){
                a[i]=2*(i+1);
                sum+=a[i];
            }

            int k=0;
            bool flag = false ;
            for(i,n/2,n){
                if(i==n-1){
                    if(sum%2!=0){
                        a[i] = sum;
                        flag = true;
                    }
                }else{
                    a[i]= (2*k) + 1;
                    k++;
                    sum -= a[i];
                }
            }

            if(!flag) cout << "NO" << nl;
            else{
                cout << "YES" << nl;

                for(i,0,n) cout << a[i] << sp;
                cout << nl;
            }

        }


    return 0;
}