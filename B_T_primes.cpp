#include <iostream>
#include <vector>
#include <set>
using namespace std;

const int mx = 1000001;
vector<bool> is_prime(mx, true);
set<long long> prime_sqr; 

void sieve_ersthns(){
    is_prime[0] = is_prime[1] = false;
    for(int i = 2 ; i < mx ; ++i){
        if(is_prime[i] && (long long)i * i < mx ){
            for(int j = i * i ; j < mx ; j += i){
                is_prime[j] = false;
            }
        }
    }
    for(int i = 2 ; i < mx ; ++i){
        if(is_prime[i]){
            prime_sqr.insert((long long)i * i);
        }
    }
}
int main(){
    int n;
    cin >> n;
    sieve_ersthns();
    for(int i = 0 ; i < n; ++i){
        long long num;
        cin >> num;
        if(prime_sqr.find(num) != prime_sqr.end())
            cout << "YES\n" ;
        else
            cout << "NO\n" ;
    }
    return 0;
}