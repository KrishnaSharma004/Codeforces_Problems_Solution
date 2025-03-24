#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int min_operations(string n,string pos_value){
    int oper = 0;
    int checker_i = pos_value.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==pos_value[checker_i]){
            checker_i--;
            if(checker_i < 0){
                break ;
            }
        }else{
            oper++;
        }
    }
    if(checker_i >= 0){
        oper = INT_MAX;
    }
    return oper ;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector <string> pos_value = {"00","25","50","75"};
        int ans = INT_MAX;

        for(auto x : pos_value){
            ans = min(ans, min_operations(s,x));
        }

        cout << ans << endl;
    }
    return 0;
} 