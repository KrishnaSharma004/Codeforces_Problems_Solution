#include <iostream>
#include <vector>
using namespace std;
#define all(n) n.begin(), n.end()
#define vi vector<int>
#define ll long long
void solve(){
    int n;
    cin >> n;

    int mini= INT_MAX;
    vi min_2;
    for(int i=0;i<n;++i){
        int m;
        cin >> m;

        vi arr(m);
        for(int i=0;i<m;++i){
            cin >> arr[i];
        }
        int min_el = *min_element(all(arr));
        mini = min(min_el,mini);

        arr.erase(find(all(arr),min_el));
        min_2.push_back(*min_element(all(arr)));
    }
    ll sum_min_2=0;
    for(int i =0;i<n;++i){
        sum_min_2 += min_2[i];
    }
    long long beauty = mini + sum_min_2 - *min_element(all(min_2));
    cout << beauty << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}