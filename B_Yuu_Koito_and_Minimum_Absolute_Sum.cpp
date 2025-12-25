#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
            cin >> a[i];
        if(a[n-1]==-1)
            if(a[0]==-1)
                a[0] = a[n-1] = 0;
            else
                a[n-1] = a[0];
        else if(a[0]==-1)
            a[0] = a[n-1];
        cout << abs(a[n-1] - a[0]) << '\n';
        for(int i=0;i<n;++i)
            cout << (a[i]==-1 ? 0 : a[i]) << ' ';
        cout << '\n';
    }
    return 0;
}
