#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    long long  n,k;
	    cin >>n>>k;
	    vector<long long> a(n);
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    vector<long long> copy_a=a;
	    sort(copy_a.begin(),copy_a.end());
	    
	    if(copy_a==a || k>1){
	        cout << "Yes"<<endl;
	    }else{
	        cout <<"No"<<endl;
	    }
	    
	}
	return 0;

}
