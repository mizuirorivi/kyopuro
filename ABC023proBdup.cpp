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
  int n,m;string s,t="b";cin >> n >> s;
  m = (n-1)/2;
  rep(i,m){
    if(i%3==0) t="a"+t+"c";
    else if(i%3==1) t="c"+t+"a";
    else t="b"+t+"b";
  }
  cout << (s==t?m:-1) << endl;
}
