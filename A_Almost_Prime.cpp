#include <bits/stdc++.h>

using namespace std;
#define int long long int 
#define f first
#define s second 
#define pb push_back
#define pop pop_back
#define all(x) x.begin(), x.end()

const int N = 3e3 + 10;

vector<int> prime_fct(N, 0);
void sieve(){
	prime_fct[0] = prime_fct[1] = 0;
    for(int i = 2 ; i < N ; ++i){
    	if(prime_fct[i] == 0){
    		for(int j = i + i ; j < N ; j += i){
    			prime_fct[j]++;
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
    int cnt = 0;
    for(int i = 1 ; i <= n ; ++i){
    	if(prime_fct[i] == 2) cnt++;
    }
    cout << cnt << '\n';

	return 0;
}