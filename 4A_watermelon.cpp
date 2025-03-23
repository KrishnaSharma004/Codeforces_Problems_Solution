#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight; // Input the weight of the watermelon

    // Check if the weight can be divided into two even parts
    if (weight > 2 && weight % 2 == 0) {
        cout << "YES" << endl; // If possible, print "YES"
    } else {
        cout << "NO" << endl; // Otherwise, print "NO"
    }

    return 0;
}
