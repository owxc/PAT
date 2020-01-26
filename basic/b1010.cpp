#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

  int a[101];
  int e[101];
  int n=0;

  int i=0;
  while(cin>>a[i]) { // 写cin>>a[i] != 0 可能由于类型不同编译不通过;
    cin>>e[i];

    if(i==0 && e[i]==0) { // 如果最高次项就是常数项
      a[i]=0;
      e[i]=0;
      n=1;
      break;
    }else {
      a[i]*=e[i]; // 系数
      if(a[i]==0) n--;
      e[i]--;
    }
    ++n;
    ++i;
  }
  for(int j=0;j<n;++j) {
    printf("%d %d", a[j], e[j]);
    if(j!=n-1) printf(" ");
  }
  return 0;
}
