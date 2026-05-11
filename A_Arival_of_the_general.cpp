#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second 
#define pb push_back
#define pp pop_back
#define all(x) x.begin(), x.end()
#define vi vector<int> 
#define vll vector<ll> 
#define si set<int> 
#define sch set<char> 
#define sll set<ll> 
#define mpii map<int, int> 
#define mpll map<ll, ll> 
#define mpli map<ll, int> 
#define mpil map<int, ll> 
#define vpii vector<pair<int, int>>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define floopinc(i,x,y) for(int i = x; i < y ; ++i)
#define floopdec(i,x,y) for(int i = x; i >= y ; --i)
#define fauto(i,x) for(auto &i : x)
typedef long long ll;
void yn(bool condition){
    if(condition){
        yes;
    }else{
        no;
    }
}
void ny(bool condition) { yn(!condition);}

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
void copyvector(vector<int> &a, vector<int> &res){
    floopinc(i,0,a.size()){
        res[i] = a[i];
    }
}
int findmn(vector<int> &a){
    int minele = a[0];
    int minidx = 0;
    floopinc(i,0,a.size()){
        if(a[i]<=minele){
            minele = a[i];
            minidx = i;
        }
    }
    return minidx;
}
int findmx(vector<int> &a){
    int maxele = a[0];
    int maxidx = 0;
    floopinc(i,0,a.size()){
        if(a[i]> maxele){
            maxele = a[i];
            maxidx = i;
        }
    }
    return maxidx;
}
void krishna(){
    int n;
    cin >> n;
    vi a(n);
    fauto(i,a) cin >> i;
    int minidx = findmn(a);
    int maxidx = findmx(a);
    if(minidx < maxidx){
        cout << (n-1) - minidx + maxidx - 1;
    }else{
        cout << (n-1) - minidx + maxidx;
    }
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); 
    krishna();
    return 0;
}
