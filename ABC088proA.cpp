#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a;cin >> n >> a;
  n%=500;
  if(n>a) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
