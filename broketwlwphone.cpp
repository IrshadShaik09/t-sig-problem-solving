#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    int cnt=0;
	    
	    for(int k=0;k<n;k++){
	        int pnt=0;
	        
	        if(k>=0 && k<= n-2){
	            
	        
	        if(a[k] != a[k+1]){
	            cnt++;
	            pnt++;
	        }
	        
	        }
	        
	        if(k>0 && pnt==0){
	            if(a[k] != a[k-1])
	            cnt++;
	        }
	    }
	    
	    cout<<cnt<<endl;
	    
	    
	    
	}
	return 0;
}

