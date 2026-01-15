#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,h;
    cin >> n >> h;

    vector<int> s(n);
    for(int i=0;i<n;++i)
        cin >> s[i];
    int count = 0;
    for(int i=0;i<n;++i){
        if(s[i] > h) count += 2;
        else count++;
    }
    cout << count << '\n';
    return 0;
}