#include <iostream>
#include <vector>
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
	    int count_of_odd = 0;
	    for(int i=0;i<n;++i){
	        if(a[i]%2==1) count_of_odd++;
	    }
	    if(count_of_odd%2==1){
	        cout << "NO" <<endl;
	    }else{
	        cout << "YES" <<endl;
	    }
	}
    return 0;

}
