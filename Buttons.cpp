#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a>> b>>c;
	    if(c%2==1){
	        if(b>a)
	           cout << "Second" << endl;
	        else 
	           cout << "First" << endl ;
	    }else{
	        if(a>b)
	           cout <<"First" <<endl;
	        else 
	           cout << "Second"<<endl;
	    }
	}
    return 0;
}
