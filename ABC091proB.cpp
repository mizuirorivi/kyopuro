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
  int pron;cin >> pron;
  map<string,int> mp;
  for(int i=0;i<pron;i++){
    string s;cin >> s;
    mp[s]++;
  }
  int mn;cin >> mn;
  for(int i=0;i<mn;i++){
    string s;cin >> s;
    mp[s]--;
  }
  int ans = 0;
  for(auto&i:mp){
    ans = max(ans,i.second);
  }
  cout << ans << endl;
}
