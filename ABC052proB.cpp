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
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }

int main(){
  int n;cin >> n;
  string s;cin >> s;
  int ans = 0;
  int x=0;
  for(auto&i:s){
    if(i=='I') x++;
    if(i=='D') x--;
    chmax(ans,x);
  }
  cout << ans << endl;
}
