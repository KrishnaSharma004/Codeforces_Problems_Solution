#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        int totalofxor=0;
        for(int i=0;i<n;++i){
            totalofxor ^=a[i];
        }
        if(n%2==1){
            cout << totalofxor << endl;
        }else{
            if(totalofxor==0){
                cout << 1<<endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
	return 0;

}
