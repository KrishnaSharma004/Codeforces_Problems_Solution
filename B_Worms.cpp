#include <iostream>
#include <vector>
using namespace std;

int Bsrch(vector<int> &pile, int e, int lo, int hi){
    int mid;
    while(hi - lo > 1){
        mid = (hi + lo) / 2;
        if(pile[mid] < e)
            lo = mid + 1;
        else 
            hi = mid;
    }
    if(pile[lo] >= e)
        return lo + 1;
    return hi + 1;
}

int main(){
    int n;
    cin >> n;
    vector<int> pile(n);
    for(int &i : pile) cin >> i;

    int m;
    cin >> m;
    vector<int> j_wrm(m);
    for(int &i : j_wrm) cin >> i;

    for(int i = 1; i < n ; ++i){
        pile[i] = pile[i] + pile[i-1];
    }

    for(int i = 0; i < m ; ++i){
        cout << Bsrch(pile, j_wrm[i], 0, n - 1) << '\n';
    }

    return 0;
}