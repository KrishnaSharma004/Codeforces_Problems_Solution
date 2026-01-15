#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    for(int i=1;i<n+1;++i)
        cin >> a[i] >> b[i];
    
    vector<int> max_pas(n+1,0);
    for(int i=1;i<n+1;++i){
        max_pas[i] = max_pas[i-1] - a[i] + b[i];
    }    

    int ans = *max_element(max_pas.begin(),max_pas.end());

    cout << ans << '\n';
    return 0;
}