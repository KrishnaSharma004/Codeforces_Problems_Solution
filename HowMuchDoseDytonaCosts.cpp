#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >>n>>k;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        int num_present = 0;
        for(int i=0;i<n;++i){
            if(a[i]==k){
                num_present = 1;
                break;
            }
        }
        if(num_present){
            cout <<"yes"<<endl;
        }else cout<<"NO"<<endl;
    }
	return 0;

}
