#include <iostream>
#include <cstring>
#include <cstdio>

#define MAX 131070
/// 第10000个素数是104729

using namespace std;

int main(int argc, char const *argv[])
{

  int m=0, n=0;
  bool p[MAX];

  p[0]=false;
  p[1]=false;
  for(int i=2;i<MAX;++i) p[i]=true;/// init
  for(int i=2;i<MAX;++i) {
    for(int j=2;i*j<MAX;++j) {
      p[i*j]=false;
    }
  }

//  for(int i=0; i<100; ++i) {
//    printf("%d ", p[i]);
//  }printf("\n");
  while(cin>>m) {
    cin>>n;/// input over
    int k=1;
    int i=2;
    while(k<m){ /// move to m-th prime
      if(p[i]) {
        ++k;
      }
      ++i;
    }
    int pos=0; /// for print format
    while(k<=n) { /// print until n-th prime
      if(p[i]) {
        printf("%d", i);++pos;
        if(pos%10==0) {
          printf("\n");
        }else if(k!=n) {
          printf(" ");
        }
        ++k;
      }
      ++i;
    }
  }
  return 0;
}
