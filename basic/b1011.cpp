#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

  int n=0;
  int i=0;
  bool res[20];
  long long int a=0, b=0, c=0; // must

  while(cin>>n) {
    for(int j=0;j<n;++j) { // each judgment
      cin>>a;
      cin>>b;
      cin>>c;

      if(a+b>c) res[i]=true;
      else res[i]=false;
      ++i;
    }
  }
  for(int j=0;j<n;++j) {
    if(res[j]) printf("Case #%d: true\n", j+1);
    else printf("Case #%d: false\n", j+1);
  }
  return 0;
}
