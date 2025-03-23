#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long operations = 0; 
        bool possible = true;

        for (int i = n - 2; i >= 0; i--){
            while (a[i] >= a[i + 1]) {
                a[i] /= 2;
                operations++;
                if (a[i] == 0 && a[i] >= a[i + 1]){
                    possible = false;
                    break;
                }
            }
            if(!possible) break;
        }

        if(possible){
            cout << operations << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector <int> a(n);
//         for(int i=0; i<n ;++i){
//             cin >> a[i];
//         }
//         long long result = 0;
//         for(int i = n-2 ; i>=0 ; i--){
//             while(a[i] >= a[i+1]){
//                 result++;
//                 a[i] /= 2;
//                 if(a[i] == 0){
//                     break;
//                 }
//                 if(a[i]==0 && a[i+1] == 0){
//                     result = -1;
//                     break;
//                 }
//             }
//         }
//         cout << result << endl;
//     }
//     return 0;
// }