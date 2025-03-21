#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector <int> a(n);
	    for(int i=0;i<n;++i){
	        cin >> a[i];
	    }
	    //input taken till now 
	    //main login begins !!
        //agar number of two even hai then the answer will be the logic which is written in else condition. 
	    //agar number of two is zero then the answer is 1.
	    //agar number of two is odd then the ams is always -1.
	    int count_of_two = 0;
	    for(int i=0;i<n;++i){
	        if(a[i]==2){
	            count_of_two++;
	        }
	    }
	    if(count_of_two%2==1){
	        cout <<-1<<endl;
	    }
	    else{
	        if(count_of_two==0){
	            cout << 1 << endl;
	        }else{
	        int ans;
	        int count =0;
	        for(int i=0;i<n;++i){
	            ans=i;
	            if(a[i]==2){
	                count++;
	            }
	            if(count==(count_of_two/2)){
	                cout << ans+1 << endl;
	                break;
	            }
	        }
	        }
	        
	    }
	    
	}
    return 0;

}
