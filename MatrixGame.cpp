#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <cstring>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define vstr vector<string>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>
#define pb(x) push_back(x)
#define ull unsigned long long 
#define floop(i,a,b) for(int i=a;i<b;++i)
#define sp " "
#define mii map<int,int>
#define fauto(i,x) for(auto i:x)

void logic(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    memset(a,0,sizeof(a));
    floop(i,0,n){
        floop(j,0,m){
            int k ;
            cin >> k;
            if(k==1){
                floop(x,0,m){
                    a[i][x]=1;
                }
                floop(x,0,n){
                    a[x][j]=1;
                }
            }
        }
    }
    int turn =0;
    int flag =0 ;
    while(1){
        flag = 0;
        floop(i,0,n){
            floop(j,0,m){
                if(a[i][j]==0){
                    turn++;
                    flag= 1;
                    floop(x,0,m) a[i][x] = 1;
                    floop(x,0,n) a[x][j] = 1;
                    break;
                }
            }
            if(flag) break;
        }
        if(!flag) break;
    }
    if(turn%2==0) cout << "Vivek" << nl;
    else cout << "Ashish" << nl;
    return ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        logic();
    }
    return 0;
}