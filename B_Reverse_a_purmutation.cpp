#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
		cin >> n;

		int p[n + 5], ind = 1;

		for( int i = 1; i <= n; i ++ )
		{
			cin >> p[i];
		}
		while( ind <= n && p[ind] == n - ind + 1 ) ind ++;
		int id = -1;

		for( int i = ind; i <= n; i ++ )
		{
			if( p[i] == n - ind + 1 ) id = i;
		}
		for( int i = 1; i < ind; i ++ ) cout << p[i] << ' ';

		if( id != -1 )
		{
			for( int i = id; i >= ind; i -- ) cout << p[i] << ' ';
			for( int i = id + 1; i <= n; i ++ ) cout << p[i] << ' ';
		}
		cout << '\n';
    }
    return 0;
}