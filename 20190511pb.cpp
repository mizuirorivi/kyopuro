#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,f,b;
  cin >> m >> f >> b;
  if(m+f<b){
    cout << "NA" << endl;
  }else{
    if(m>=b){
      cout << 0 << endl;
    }else{
      cout << b-m << endl;
    }
  }
  return 0;
}
