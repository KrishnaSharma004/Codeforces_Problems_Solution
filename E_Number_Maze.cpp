#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fact(int n){
    if(n == 0) return 1;
    return n * fact(n-1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        int j, k;
        cin >> n >> j >> k;
        int l = fact(n.size());
        vector<string> pr(l);
        pr[0] = n; 
        for(int i = 1 ; i < l ; ++i){
            next_permutation(n.begin(), n.end());
            pr[i] = n;
        }
        sort(pr.begin(),pr.end());

        string p_j = pr[j-1];
        string p_k = pr[k-1];
        
        int a = 0;
        int b = 0;
        for(int i = 0; i< n.size(); ++i)
            for(int j = 0; j < n.size(); ++j){
                if(p_j[i] == p_k[j]){
                    if(i == j) a++;
                    else b++;
                }
            }
        cout << a << "A" << b << "B" << '\n';
    }
    return 0;
}