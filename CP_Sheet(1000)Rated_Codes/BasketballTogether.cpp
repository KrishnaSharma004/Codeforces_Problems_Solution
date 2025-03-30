#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;
#define ll long long 
#define vint vector<int>
#define vll vector<long long>
#define vchar vector<char>
#define rr(x) x.begin(),x.end()
#define nl endl
#define str string
#define si set<int>

int main(){
    int n,d;
    cin >> n >> d;
    vll arr(n);
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    sort(rr(arr));

    int wins =0 ;
    int i = -1, j= n-1;

    ll cur = arr[j];
    while(i<j){
        ll maxp = arr[j];
        if(cur <= d){
            i++;
            cur += maxp;
        }else{
            wins++;
            j--;
            if(j >= 0) cur = arr[j];
        }
    }
    cout << wins << endl;
}

