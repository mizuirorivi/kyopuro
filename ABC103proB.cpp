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
  string s,t;cin >> s >> t;
  bool ans = false;
  for(int i=0;i<s.size();i++){
    if(s==t){
      ans = true;
      break;
    }
    s=s.back()+s.substr(0,s.size()-1);
  }
  cout << (ans?"Yes":"No") << endl;
}
