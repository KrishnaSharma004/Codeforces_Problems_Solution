#include <iostream>
using namespace std;
int solve(int x){
    int count = 0;
    while(x >= 5){
        x -= 5;
        count++;
        if(x <= 0) return count;
    }
    while(x >= 4){
        x -= 4;
        count++;
        if(x <= 0) return count;
    }
    while(x >= 3){
        x -= 3;
        count++;
        if(x <= 0) return count;
    }
    while(x >= 2){
        x -= 2;
        count++;
        if(x <= 0) return count;
    }
    while(x >= 1){
        x -= 1;
        count++;
        if(x <= 0) return count;
    }
    return count;
}
int main(){
    int x;
    cin >> x;
    cout << solve(x) << '\n';
    return 0;
}