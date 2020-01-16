#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
  int n = 0;
  while(cin>>n) {
    int h=n/100;
    n%=100;
    int t=n/10;
    n%=10;

    while(h--) cout << "B";
    while(t--) cout << "S";
    for(int i=1; i<=n; ++i) cout << i;
    cout <<endl;
  }
  return 0;
}

