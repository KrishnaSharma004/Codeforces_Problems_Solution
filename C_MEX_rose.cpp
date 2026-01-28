#include <iostream>
#include <vector> 
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0 ; i < n ; ++i)
            cin >> a[i];

        int pr = 0;
        for(int i = 0; i < n ; ++i){
            if(a[i] == k) pr++;
        }
        multiset<int> ms;
        for(int i = 0; i < n; ++i) ms.insert(a[i]);

        int npr = 0;
        while(k > 0){
            if(ms.find(k - 1) == ms.end()) npr++;
            k--;
        }
        if(npr >= pr) cout << npr << '\n';
        else cout << pr << '\n';
    }
    return 0;
}