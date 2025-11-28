#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    cin >> word;
    if(word[0] <= 90 && word[0] >= 65){
        cout << word << endl;
    }
    else{
        word[0] = (char)(word[0]-32);
        cout << word << endl;
    }
    return 0;
}