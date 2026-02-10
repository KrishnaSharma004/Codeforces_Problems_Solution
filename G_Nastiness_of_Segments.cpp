#include <iostream>
using namespace std;

const int MAX_N = 2e5 + 14;
int n;
int a[MAX_N], seg[MAX_N * 2];

void build() {
    // builds the segment tree 
    copy(a, a + n,seg + n);
    for(int i = n - 1; i; i--)
        seg[i] = min(seg[ i << 1 ], seg[ i << 1 | 1]);
}

void update(int i, int x){
    //changes value of i'th element to x 
    for(seg[ i += n ] = x ; i >>= 1;){
        seg[i] = min(seg[ i << 1 ], seg[ i << 1 | 1]);
    }
}

int get(int l, int r){
    //return the minimum value of seg[l, r]
    int ans = INT_MAX;
    for(l += n, r += n ; l < r ; l >>= 1, r >>= 1){
        if(l & 1)
            ans = min(ans, seg[l++]);
        if(r & 1)
            ans = min(ans, seg[--r]);
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> n >> q;
        for(int i = 0 ; i < n ; ++i)
            cin >> a[i];
        build();
        while(q--){
            int idx;
            cin >> idx;
            if(idx == 1){
                int i , x;
                cin >> i >> x;
                update(--i, x);
            }
            else{
                int l, r;
                cin >> l >> r;
                --l;
                int lo = l, hi = r;
                while(hi - lo > 1){
                    int md = ( hi + lo )/ 2;
                    (get(l, md + 1) >= md -l ? lo : hi ) = md;
                }
                cout << (get(l, lo + 1) == lo - l) << '\n';
            }
        }
    }
    return 0;
}