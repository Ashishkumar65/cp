#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
while(t--){
    int n;
    double x;
    cin>>n>>x;
    double a[n];
    double count=0,max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
     if(a[i]>max){
        max=a[i];
    }
    int multi=max;
    }
    for(int i=0;i<n;i++){
        count+=ceil(a[i]/x);
    }
    
   cout<<min(count,max)<<endl;
       
       
         
      }
      
    

return 0;
}
