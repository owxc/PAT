#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 0;
  int m = 0;
  int a[101];
  while(cin>>n) {
    cin>>m;
    for(int i=0;i<n;++i) {
      cin >> a[i];
    }
    int tmp = n-m%n; ///右移m=j+n*k位(j=1,2,...,n)与m=j效果相同;
    //printf("tmp = %d\n", tmp);
    for(int i=0;i<n;++i) {
      printf("%d", a[(tmp+i)%n]);
      if(i+1!=n) printf(" ");
    }
  }
  return 0;
}

