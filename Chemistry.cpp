#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
	    long long n,k;
	    cin >> n >> k;
	    string s;
	    cin >> s;
	    vector <int> freq_of_ch(26,0);
	    for(int i=0;i<n;++i){
	        freq_of_ch[s[i]-'a']++;
	    }
	    long long odd_freq=0;
	    for(int i=0;i<26;++i){
	        odd_freq+=freq_of_ch[i]%2;
	    }
	    if(odd_freq>k+1){
	        cout << "NO" << endl;
	    }else{
	        cout << "YES" << endl;
	    }
	}
	
	return 0;

}
