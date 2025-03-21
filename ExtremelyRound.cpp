#include <iostream>
#include <vector>
using namespace std;
bool check(int x){
    int digit_count=0;
    int digit_zeros=0;
    while(x){
        if(x%10==0){
            digit_zeros++;
        }
        digit_count++;
        x /=10;
    }
    return digit_zeros==(digit_count-1);
}


int main() {
    vector <int> round_integers;
    for(int i=1;i<=999999;++i){
        if(check(i)==true){
            round_integers.push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i < round_integers.size();++i){
            if(round_integers[i]<=n){
                ans++;
            }else{
                break;
            }
        }
        cout<<ans<<endl;
    }
	return 0;

}
