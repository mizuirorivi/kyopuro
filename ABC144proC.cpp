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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  Int n;
  cin >> n;
  Int ans = n-1;
  for(Int i=1;i*i<=n;i++){
    if(n%i==0){
      ans = min(ans,i+n/i-2);
    }
  }
  cout << ans << endl;
  return 0;
}
