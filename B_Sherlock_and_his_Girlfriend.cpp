#include <bits/stdc++.h>

using namespace std;
#define int long long int 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

const int N = 100005;

vector<bool> is_prime(N, true);
vector<int> ans(N);
void sieve(){
	is_prime[0] = is_prime[1] = false;
    for(int i = 2 ; i < N ; ++i){
    	if(is_prime[i]){
    		ans[i] = 1;
    		for(int j = i * i ; j < N ; j += i){
    			is_prime[j] = false;
    			ans[j] = 2;
    		}
    	}
    }
}
int32_t main(){
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    sieve();
    
    int n;
    cin >> n;

    if(n == 1){
    	cout << 1 << '\n';
    	cout << ans[2] << '\n';
    }
    else if(n == 2){
    	cout << 1 << '\n';
    	cout << ans[2] << " " << ans[3] << '\n'; 
    }
    else{
    	cout << 2 << '\n';
    	for(int i = 2 ; i <= n + 1 ; ++i){
    		cout << ans[i] << " ";
    	}
    	cout << '\n';

    }
	return 0;
}