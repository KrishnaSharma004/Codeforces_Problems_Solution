#include <iostream>
#include <vector>
using namespace std;
vector<int> pile(1e5+10);
vector<int> juicy_wrm(1e5+10);
int main(){
    int n;
    cin >> n;
    for(int i=1;i<n+1;++i){
        cin >> pile[i];
    }
    int m;cin >> m;
    for(int i =1;i<m+1;++i){
        cin >> juicy_wrm[i];
    }
    //Prefix sum the pile vector 
    vector<int> pf(n+1);
    for(int i=1;i<n+1;++i){
        pf[i] = pf[i-1]+pile[i];
    }
    //finding upper bound of the all juicy worms lable in the prefix sum using Binary_Search 
    for(int i=1;i<m+1;++i){
        int lo = 1, hi = n, mid;
        while(hi-lo>1){
            mid = (lo+hi)/2;
            if(pf[mid] <= juicy_wrm[i]){
                lo = mid +1;
            }else{
                hi = mid;
            }
        }
        if(pf[lo] > juicy_wrm[i]){
            cout << lo << endl;
        }else{
            cout << hi << endl;
        }
    }
    return 0;
}