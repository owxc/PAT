
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

  int n=0;

  while(cin>>n) {
    int a[1001];
    int f[1001];
    int a1=0, flag2=1, a2=0, a3=0, cnt4=0, a5=-1; double a4=0;
    bool d1=false, d2=false, d3=false, d4=false, d5=false;  /// 有时候最简单的方法不代表不好用;

    for(int j=0;j<n;++j) { // each judgment
      cin>>a[j];
      f[j]=a[j]%5;
      switch(f[j]) {
        case 0: {
          if(a[j]%2==0) {
            a1+=a[j];
            d1=true;  /// 加入逻辑注意路径
          }
          break;
        }
        case 1: {
          a2+=flag2*a[j];
          flag2=-flag2;
          d2=true;
          break;
        }
        case 2: {
          ++a3;
          d3=true;
          break;
        }
        case 3: {
          a4+=a[j];
          ++cnt4;
          d4=true;
          break;
        }
        case 4: {
          a5=(a[j]>a5)? a[j]: a5;
          d5=true;
          break;
        }
      }
    }
    a4/=cnt4;
    (d1) ? printf("%d ", a1)  :printf("N ");
    (d2) ? printf("%d ", a2)  :printf("N ");
    (d3) ? printf("%d ", a3)  :printf("N ");
    (d4) ? printf("%.1f ", a4):printf("N ");
    (d5) ? printf("%d", a5)   :printf("N" );
  }

  return 0;
}
