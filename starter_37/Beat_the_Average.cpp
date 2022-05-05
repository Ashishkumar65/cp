#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
while(t--){
    int n,m,x;
    cin>>n>>m>>x;
    if(m>x){
        cout<<(n*x)/(x+1)<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
return 0;
}