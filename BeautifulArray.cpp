#include <iostream>
#include <istream>
#include <ostream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <string>
#include <locale>
#include <cctype>
#include <cstring>
#include <complex>
#include <valarray>
#include <numeric>
#include <cmath>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <climits>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstdarg>
#include <cctype>
#include <clocale>
#include <csignal>
#include <cwchar>
#include <cwctype>
#include <cstddef>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <cfenv>
#include <cfloat>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        long long x, mx = LLONG_MIN;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x > mx) mx = x;
        }
        cout << mx << endl;
    }
    return 0;
}
