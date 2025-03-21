#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    int count = 0;
    while (t--) {
        int a, b, c; 
        cin >> a >> b >> c;

        // Check if at least two members agree (sum of a, b, c >= 2)
        if (a + b + c >= 2) {
            count++;
        }
    }
    cout << count << endl; 

    return 0;
}
