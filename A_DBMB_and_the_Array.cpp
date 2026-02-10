#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        for(int i = 0 ;i < n ; ++i){
            int e;
            cin >> e;
            sum += e;
        }
        int cnt = 0;
        while(1){
            if(sum == s){
                cout << "YES" << '\n';
                break;
            }
            else{
                sum += x;
                if(sum > s){
                    cout << "NO" << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}