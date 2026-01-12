#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> num(n);
        for(int i=0;i<n;++i) 
            cin >> num[i];

        long long t_sum = accumulate(num.begin(),num.end(),0LL);
        long long check = INT_MAX;
        int remove;
        for(int i=0;i<n;++i){
            if(check > t_sum - num[i]){
                check = t_sum - num[i];
                remove = i;
            }
        }
        
        vector<int> temp;
        for(int i=0;i<n;++i){
            if(i == remove) continue;
            else temp.push_back(num[i]);
        }
        int minsum = 0;
        for(int i =0; i < temp.size()-1 ;++i){
            minsum += abs(temp[i] - temp[i+1]);
        }
        cout << minsum << '\n';
    }
    return 0;
}