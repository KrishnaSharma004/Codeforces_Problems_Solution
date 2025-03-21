#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n,x;
        cin >>n>>x;
        vector<long long int> points_arr;
        points_arr.push_back(0);
        for(int i=0;i<n;++i){
            long long int point;
            cin >> point;
            points_arr.push_back(point);
        }
        points_arr.push_back(x);
        n=points_arr.size();
        long long int max_dis = INT_MIN;
        for(int i=1;i<n;++i ){
            if(i==n-1){
                max_dis=max(max_dis,2*(points_arr[i]- points_arr[i-1]));
                
            }else{
                max_dis=max(max_dis,points_arr[i]- points_arr[i-1]);
            }
            
        }
        cout << max_dis <<endl;
    }
	    
	
	return 0;

}
