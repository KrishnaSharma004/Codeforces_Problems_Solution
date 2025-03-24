#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector <int> a(n);
	    for(int i=0;i<n;++i){
	        cin >> a[i];
	    }
	    
	    int total_and = a[0];
	    for(int i=0;i<n;++i){
	        total_and &= a[i];
	    }
	    
	    cout << total_and << endl;
	    
	}
    return 0;
}
