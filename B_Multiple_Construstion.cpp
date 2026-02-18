#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans;
        for(int i = n ; i > 0 ; --i){
            ans.push_back(i);
        }
        ans.push_back(n);
        for(int i = 1 ; i < n ; ++i){
            ans.push_back(i);
        }
        for(int i : ans) cout << i << " ";
        cout << '\n';
    }
    return 0;
}