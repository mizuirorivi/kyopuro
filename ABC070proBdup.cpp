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
  int a,b,c,d;cin >> a >> b >> c >> d;
  const int lower = max(a,c);
  const int upper = min(b,d);

  cout << max(0,upper-lower) << endl;
  return 0;
}
