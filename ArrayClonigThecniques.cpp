#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >>n;
	    vector <long long> a(n);
	    for(int i=0;i<n;++i){
	        cin >> a[i];
	    }
	    map<long long,long long> mp;
	    for(int i=0;i<n;++i){
	        mp[a[i]]++;
	    }
	    long long current_high_feq=0;
	    for(auto i:mp)
	        current_high_feq=max(current_high_feq,i.second);
	    long long oper = 0;
	    while(current_high_feq<n){
	        oper++;
	        if(current_high_feq*2<=n){
	            oper+= current_high_feq;
	            current_high_feq*=2;
	        }else{
	            oper += n- current_high_feq;
	            current_high_feq=n;
	        }
	    }
	    cout << oper << endl;
	    
	}
    return 0;
}
