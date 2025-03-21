#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    int answer = n;
	    int left = 0,right = n-1;
	    while(left<=right){
	        if(s[left]!=s[right]){
	            answer-=2;
	        }else{
	            break ;
	        }
	        left++;
	        right--;
	    }
	    cout << answer <<endl ;
	}
    return 0;

}
