#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        bool flag = false;
        long long new_A = 2*b-c;
        if(new_A/a>0 && new_A%a==0)
            flag = true ;
        long long new_B = (a+c)/2;
        if(new_B/b>0 && new_B%b==0 && (c-a)%2 == 0)
            flag = true ;
        long long new_C = 2*b-a;
        if(new_C/c>0 && new_C%c ==0 )
            flag = true ;
        if(flag)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}