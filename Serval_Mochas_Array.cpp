#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector <int> a(n);
	    for(int i=0;i<n;++i){
	        cin >> a[i];
	    }
	    //input taken till now
	    //main logic is as follows 
	    int flag = 0;
	    for(int i=0;i<n;++i){
	    for(int j= i+1;j<n;++j){
	        if(__gcd(a[i],a[j])<=2){
	            flag = 1;
	        }
	        
	    }
	    }
	    if(flag==0)
	        cout << "NO" << endl;
	    else
	        cout << "YES" << endl;
	}
    return 0;

}
