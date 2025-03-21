#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i=0;i<n;++i){
            cin >>a[i];
        }
        int oper_cnt =0;
        for(int i=0;i<n-1;++i){
            if((a[i]%2)==(a[i+1]%2)){
                oper_cnt++;
            }
        }
        cout << oper_cnt << endl;
    }
    return 0;
}