#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,flag=1;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=1;i<n-1;i++){
	    
	       int d1= a[i]-a[i-1];
	       int d2=a[i+1]-a[i];
       if(d1!=2*d2&&d2!=2*d1){
	        flag=0;
	        break;
	    }
	    
	    }
	    if(flag==1){
	    cout<<"Yes"<<endl;
	    }
	    else{
	    cout<<"No"<<endl;
	    }
	}
	return 0;
}