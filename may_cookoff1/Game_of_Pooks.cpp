#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      if(n==2||n==3){
          cout<<n-1<<endl;
      }
      else{
          cout<<n<<endl;
      }
  }
	return 0;
}
