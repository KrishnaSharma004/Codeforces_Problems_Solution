#include <iostream>
using namespace std;

int main() {
	int m[5][5];
	int r,c;
	for(int i=0;i<5;++i){
	    for(int j=0;j<5;++j){
	        cin >> m[i][j];
	        if(m[i][j]==1){
	            r=i;
	            c=j;
	        }
	    }
	}
	int moves = abs(r-2)+abs(c-2);
	cout << moves << endl;
    return 0;
}
