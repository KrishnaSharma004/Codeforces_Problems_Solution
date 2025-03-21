#include <iostream>
#include <set>
using namespace std;

int dx[4]={-1,1,-1,1} , dy[4]={-1,-1,1,1};
int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n--){
	    long long a,b;
	    cin >>a>>b;
	    long long x_k,y_k;
	    cin >> x_k>>y_k;
	    long long x_q,y_q;
	    cin >> x_q>>y_q;
	    
	    set< pair<int,int> > k_hits,q_hits;
	    for(int i=0;i<4;++i){
	        k_hits.insert({x_k+dx[i]*a,y_k+dy[i]*b});
	        k_hits.insert({x_k+dx[i]*b,y_k+dy[i]*a});
	        q_hits.insert({x_q+dx[i]*a,y_q+dy[i]*b});
	        q_hits.insert({x_q+dx[i]*b,y_q+dy[i]*a});
	    }
	    int ans = 0;
	    for(auto position:k_hits)
	        if(q_hits.find(position)!=q_hits.end())
	           ans++;
	    cout << ans <<endl;       
	}
	
	return 0;

}
