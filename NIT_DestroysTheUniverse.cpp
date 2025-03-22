#include <iostream>
#include <vector>
 using namespace std;
 int main(){
     long long t;
     cin >> t;
     while(t--){
         long long n;
         cin >> n;
         vector <long long> a(n);
         for(int i = 0;i<n;++i){
             cin >> a[i];
         }
         int count_of_zeros=0;
         for(int i=0;i<n;++i){
             if(a[i]==0){
                 count_of_zeros++;
             }
         }
         bool found_zeros = false;
         int left=0;
         int right=n-1;
         while(a[left]==0){
             left++;
         }
         while(a[right]==0){
             right--;
         }
         for(int i=left;i<right;++i){
             if(a[i]==0){
                 found_zeros=true;
             }
         }
         if(count_of_zeros==n) cout << 0 << endl;
         else if(found_zeros==false) cout << 1 << endl;
         else cout << 2 << endl;
     }
     return 0;
 }