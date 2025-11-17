#include<iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char,int> hash;
    for(int i=0;i<s.size();++i){
        hash[s[i]]++;
    }
    int cnt=0;
    for(auto it:hash){
        cnt++;
    }
    if(cnt%2==0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}