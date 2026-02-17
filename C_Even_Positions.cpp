#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> a;
        int ans = 0;
        for(int i = 0; i < n ; ++i){
            if(s[i] == '_'){
                if(a.empty()) a.push_back(i);
                else{
                    ans += i - a.back();
                    a.pop_back();
                }
            }
            else if(s[i] == '(') a.push_back(i);
            else{
                ans += i - a.back();
                a.pop_back();
            }
        }
        cout << ans << '\n';
    }
    return 0;
}