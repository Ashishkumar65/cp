#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int> m;
    for(auto i:v){
        m[i]++;
    }
    int  count=0;
    int ans=0;
    for(auto v:m){
        if(v.second>=count)
        count=v.second,ans=v.first;
    }
    int confused=0;
    for(auto it:m){
        if(it.second==count)
        confused++;
    }
    if(confused>1)
    cout<<"CONFUSED"<<endl;
    else
    cout<<ans<<endl;

    


}
return 0;
}