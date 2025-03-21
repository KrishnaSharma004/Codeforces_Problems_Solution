#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;++i){
            cin >> a[i];
        }//input taken
        int count_zeros=0;
        int max_length=0;
        for(int i=0;i<n;++i){
            if(a[i]==0) count_zeros++;
            else count_zeros=0;
            max_length=max(max_length,count_zeros);
        }
        cout <<max_length<<endl;
    }
	return 0;

}
