#include<bits/stdc++.h>
using namespace std;
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define SZ(x) ((int)(x).size())
#define debug(x) cerr << #x << ": " << x << '\n'

typedef long long int Int;
typedef pair<int,int> P;
using ll = long long;
using VI = vector<int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const long long INF = 1LL<<60;

using Graph = vector<vector<int>>;
ios::sync_with_stdio(false);
cin.tie(nullptr);

auto output_all = []( auto first, auto last )
{
    for ( auto iter = first ; iter != last ; ++iter )
    {
        std::cout << *iter << "\n"s ;
    }
} ;

#define SUM(vec) accumulate(ALL((vec)), 0)  // 0 は初期値
#define COPY(vec1, vec2) copy(ALL(vec1), back_inserter(vec2))  // vec1をvec2にコピーする vec2は空にしておく必要あり
#define PI 3.14159265359
const int MOD = 1e9+7;
#define UNIQUE(v) v.erase( unique(v.begin(), v.end()), v.end() );



int gcd(Int a, Int b) {
 return b != 0 ? gcd(b, a % b) : a;
}//gcd

int lcm(Int a, Int b) {
 return a / gcd(a, b)*b;
}//lcm

bool isSquare(Int a){
  bool flag = false;
  double z = double(sqrt(a));
  if(ceil(z)==floor(z)) flag = true;
  return flag;
}//平方根があるか調べる

map< int64_t, int > prime_factor(int64_t n) {
  map< int64_t, int > ret;
  for(int64_t i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if(n != 1) ret[n] = 1;
  return ret;
}//素因数分解

/*dfsテンプレート！！
// v は現在見ている頂点, p は v の親
void dfs(int v,int p){
  for(auto nv:G[v]){
    if(nv==p) continue;//これがツリー探索で一般的な書き方
    dfs(nv,v);
  }
}
int main(){
  int root = 0;
  dfs(root,-1);
}*/




/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
         fozubaoyou    pass System Test!
*/
