#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,b,f,r,v,i,j,k;
  int s[4][3][10]={};
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> b >> f >> r >> v;
    s[b-1][f-1][r-1] += v;
  }
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      for(k=0;k<10;k++){
          cout << " " <<s[i][j][k];
      }
      cout << endl;
    }
    if(i!=3){
      cout << "####################" << endl;
    }
  }
  return 0;
}
