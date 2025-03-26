#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    vector<int> a(n);
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    
	    int d =k-1;
	    int ev_cnt = 0;
	    for(int i=0;i<n;++i){
	        if(a[i]%2==0) ev_cnt++;
	        
	        if(a[i]%k==0) d=0;
	        
	        else d=min(d,k-a[i]%k);
	    }
	    if(k != 4) cout << d << endl;
	    else{
	        if(ev_cnt>=2) cout << 0 << endl;
	        else if(ev_cnt == 1) cout << min(d,1) << endl;
	        else cout << min(2,d) << endl;
	    }
	}
    return 0;
}
