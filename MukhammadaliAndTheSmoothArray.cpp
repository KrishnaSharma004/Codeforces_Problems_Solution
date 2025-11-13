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
using int64 = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    const int64 INF = (int64)4e18;
    while (t--){
        int n; cin >> n;
        vector<int64> a(n), c(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int64 total = 0;
        for (int i = 0; i < n; ++i) { cin >> c[i]; total += c[i]; }

        const int64 NEG = (int64)(-9e18);
        vector<int64> dp(n, NEG);
        int64 best = 0; 
        for (int i = 0; i < n; ++i) {
            int64 bestPrev = 0;
            for (int j = 0; j < i; ++j) {
                if (a[j] <= a[i]) bestPrev = max(bestPrev, dp[j]);
            }
            dp[i] = bestPrev + c[i];
            best = max(best, dp[i]);
        }
        cout << (total - best) << '\n';
    }
    return 0;
}
