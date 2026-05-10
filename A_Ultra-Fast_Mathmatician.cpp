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
    string s1,s2;
    cin >> s1;
    cin >> s2;
    floopinc(i,0,s1.size()){
        if(s1[i] != s2[i]) s1[i] = '1';
        else s1[i] = '0';
    }
    cout << s1 << '\n';
}
int32_t main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    krishna();
    return 0;
}
