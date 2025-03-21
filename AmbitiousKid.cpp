#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i= 0;i<n;++i){
        cin >> a[i];
    }//input
    int min_operations = INT_MAX;
    for(int i=0;i<n;++i){
        min_operations=min(min_operations,abs(a[i]));
    }
    cout << min_operations <<endl;
	return 0;

}
