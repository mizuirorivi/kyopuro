#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int flag =0,ifla = 0;
  while(ifla!=n){
    
  for(int j=ifla;j<n-1;j++){
    if(a[j]<a[j+1]) flag++;
  }
  
  ifla++;
  
  }
  cout << flag << endl;
}
