#include <iostream>
#include <vector>
using namespace std;
#define vi vector<int>
#define vpii vector<pair <int,int> >
#define all(n) n.begin() , n.end()

void solve(){
    int n,k;
    cin >> n >>k ;

    vi arr(n);
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }

    vpii hp_idx;
    for(int i =0;i<n;++i){
        if(arr[i]%k == 0){
            hp_idx.push_back({k, -i});
        }else{
            hp_idx.push_back({arr[i]%k, -i});
        }
    }

    sort(all(hp_idx));

    for(int i=n-1;i>=0;i--){
        cout << abs(hp_idx[i].second) + 1 << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}