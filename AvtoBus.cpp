#include <iostream>
using namespace std;

void solve(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;

        // If n is odd or less than 4, it's impossible
        if (n % 2 != 0 || n < 4){
            cout << -1 << endl;
            continue;
        }
        // Maximum buses: Use only 4-wheel buses
        long long maxBuses = n / 4;
        // Minimum buses: Use as many 6-wheel buses as possible
        long long minBuses = (n % 6 == 0) ? n / 6 : (n / 6 + 1);
        cout << minBuses << " " << maxBuses << endl;
    }
}
int main() {
    solve();
    return 0;
}

// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long n;
//         cin >> n;
//         if( n < 4 || n % 2 == 1){
//             cout << -1 << endl;
//         }else{
//             long long min_bus = ceil(n * 1.0/6);
//             long long max_bus = n/4;
//             cout << min_bus << " " << max_bus << endl;
//         } 
//     }
//     return 0;
// }
