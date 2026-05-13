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
void krishna(){
    int n;
    cin >> n;
    int cnt = 0;
    if(n >= 100){
        cnt += n/100;
        n %= 100;
    }
    if(n >= 20){
        cnt += n/20;
        n %= 20;
    }
    if(n >= 10){
        cnt += n/10;
        n %= 10;
    }
    if(n >= 5){
        cnt += n/5;
        n %= 5;
    }
    if(n >= 1){
        cnt += n/1;
        n %= 1;
    }
    cout << cnt << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); 
    krishna();
    return 0;
}
