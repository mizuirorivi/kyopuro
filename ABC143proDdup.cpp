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
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  sort(l.begin(),l.end());
  Int ans = 0;
  //aとbの固定
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int k = lower_bound(l.begin(),l.end(),l[i]+l[j]) - l.begin();
      ans +=max(k-(j+1),0);
    }
  }
  cout << ans << endl;
}
