#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long longest_substr_l=1;
        long long current_substr_l=1;
        for(int i=1;i<n;++i){
            if(s[i]==s[i-1]){
                current_substr_l++;
            }else{
                longest_substr_l=max(longest_substr_l,current_substr_l);
                current_substr_l=1;
            }
        }

        longest_substr_l= max(longest_substr_l,current_substr_l);

        cout << longest_substr_l + 1<< endl;
    }
    return 0;
}