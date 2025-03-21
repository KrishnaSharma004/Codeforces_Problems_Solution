// #include <iostream>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         long long a[n];
//         for(int i=0;i<n;++i){
//             cin >> a[i];
//         }
//         sort(a,a+n);
//         long long max_num=a[n-1];
//         long long min_num=a[0];
//         if(max_num == min_num){
//             cout << "NO" << endl;
//         }else{
//             cout << "YES" << endl;
//             cout << max_num <<" ";
//             for(int i=0;i<n;++i){
//                 cout << a[i] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int prevSum = 0;

    // bool ugly = false;
    int same = 1;
    for(int i = 0; i < n-1; i++){
        if(nums[i] == nums[i+1]){
        same++;
    } 
    }
    sort(nums.begin(), nums.end(), greater<int>());
    int x = (n+1)/2;
    int y = n-x;
    
    sort(nums.begin()+x, nums.end());
    vector<int> A1,A2;
    vector<int> ans(n);
    if(same == n) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
      int p = 0;
      for(int i = 0; i < x; i++) {
        ans[p] = nums[i];
        p+=2;
    }
      p = 1;
      for(int i = x; i < n; i++) {
        ans[p] = nums[i];
        p+=2;
    }
      for(auto it : ans) {
        cout << it << " ";
    }
      cout << endl;
    }
    }

}