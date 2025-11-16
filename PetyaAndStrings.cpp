#include <iostream>
#include <string>

using namespace std;
//Another way to solve the problem, by simply making the string to lowercase using parameters and functions :
// void solve()
// {
//     string s1,s2;
//     cin>>s1;
//     cin>>s2;
//     transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
//     cout<<s1.compare(s2)<<endl;
// }

int main(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    //Making all letters off s1 and s2 in lowercase, so that it wil be easy to compare the strings
    for(int i=0;i<s1.size();++i){
        if(s1[i]<92){
            s1[i] += 32;
        }
        if(s2[i]<92){
            s2[i] +=32;
        }
    }
    if(s1<s2){
        cout << -1 << endl;
    }
    if(s2<s1){
        cout << 1 << endl;
    }
    if(s1==s2){
        cout << 0;
    }
    return 0;
}