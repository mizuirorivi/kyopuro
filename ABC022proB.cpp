#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'
#define INF 999999999
typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;

int main(){
  int n;cin >> n;
  int ans = 0;
  vector<pair<int,int>> a(n);
  rep(i,n){
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.begin(),a.end());
  rep(i,n-1){
    if(a[i].first==a[i+1].first) ans++;
  }
  /*rep(i,n){
    debug(a[i].first);
    debug(a[i].second);
  }
  debug(ans);
  */
  cout << ans << endl;
}
