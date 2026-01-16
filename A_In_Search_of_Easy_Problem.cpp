#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    int sum = accumulate(a.begin(),a.end(),(int)0);

    if(sum) cout << "HARD" << '\n';
    else cout << "EASY" << '\n';

    return 0;
}