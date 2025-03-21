#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >>s;
        
        bool count_emp_cells=false;
        int total_empty_count=0;
        for(int i=0;i<n;++i){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                count_emp_cells=true;
                break;
            }
            if(s[i]=='.')
            total_empty_count++;
        }
        if(count_emp_cells){
            cout <<2<<endl;
        }else{
            cout<<total_empty_count<<endl;
        }
        
	}
	return 0;

}
