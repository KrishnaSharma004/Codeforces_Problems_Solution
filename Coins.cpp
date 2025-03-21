#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int n,k;
	    cin>>n>>k;
	    if(n%2==0 || (n-k)%2==0){
	        cout << "YES" <<endl;
	    }else{
	        cout << "NO" <<endl;
	    }
	}
    return 0;

}
