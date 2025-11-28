#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i=0;
    int j=1;
    int count = 0;
    while(j<=s.size()){
        if(s[i] == s[j]){
            count++;
            j++;
        }else{
            i=j;
            j=i+1;
        }
    }
    
    cout << count << endl;

    return 0;
}