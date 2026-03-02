#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int grp = 0;
    string temp = "";
    for(int i=0;i<n;++i){
        string s;
        cin >> s;
        if(s != temp) grp++;
        temp = s;
    }
    cout << grp << '\n';
    return 0;
}