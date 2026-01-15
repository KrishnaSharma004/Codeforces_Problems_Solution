#include <iostream>
#include <vector>
const int max_y = 1e9 + 7;
using namespace std;

bool dist_dgt(int n){
    vector<int> hs(10,0);
    while(n>0){
        int ls_dg = n%10;
        hs[ls_dg]++;
        n /= 10;
    }
    for(int i=0;i<10;++i){
        if(hs[i] > 1) return false;
    }
    return true;
}
int main(){
    int y;
    cin >> y;

    int ans;
    for(int i=y+1;i <= max_y;++i){
        if(dist_dgt(i)){
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}