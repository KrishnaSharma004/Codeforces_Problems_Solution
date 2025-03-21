#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        map<int,int> freq_map;
        for(int i=0;i<n;++i){
            freq_map[a[i]]++;
        }
        if(freq_map.size()>=3){
            cout <<"NO"<<endl;
        }else{
            int freq_1 = freq_map.begin()->second;
            int freq_2 = freq_map.rbegin()->second;
            if(freq_1==freq_2) cout <<"yes"<<endl;
            else if(n%2==1 && abs(freq_1-freq_2)==1) cout <<"yes"<<endl;
            else cout <<"NO"<<endl;
        }
	}
	return 0;

}
