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
  set<string> ss;
  string s;
  int k;
  cin >> s >> k;
  for(int i=0;i+k<=s.size();i++) ss.insert(s.substr(i,k));
  cout << ss.size() << endl;
  return 0;
}
