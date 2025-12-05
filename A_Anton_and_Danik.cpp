#include <iostream>
using namespace std;


int main(){
    int n; cin >> n;
    string s; cin >> s;
    int count_a = 0;
    int count_d = 0;
    for(int i=0;i<n;++i){
        if(s[i] == 'A'){
            ++count_a;
        }
        if(s[i] == 'D'){
            ++count_d;
        }
    }
    if(count_a > count_d){
        cout << "Anton" << endl;
    }
    else if(count_a < count_d){
         cout << "Danik" << endl;
    } 
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}