#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,m;
  cin >> n >> m;
  if(n>m) swap(n,m);
  if(n==1&&m==1) cout << 1 << endl;
  else if(n==1) cout << m-2 << endl;
  else cout << (n-2)*(m-2) << endl;
  return 0;
}
