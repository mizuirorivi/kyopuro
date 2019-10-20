#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
using ll = long long;
using VI = vector<int>;

int main(){
  int n;cin >> n;
  vector<int> a(n);
  for(auto &i:a) cin >> i;
  reverse(a.begin(),a.end());
  int count = 0;
  int ans = 0;
  for(int i=0;i<n;i++){
    if(a[i+1]>=a[i]) count++;
    else{
      ans = max(ans,count);
      count = 0;
    }
  }

  cout << ans << endl;
}
