#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
/**1 for correct; 0 for wrong
**/
int judge(string s) {
  int len = s.length();
  int x=0, y=0, z=0;
  if(s[0]=='A') {//如果是A开头
    x=1;
    int i=1;
    while(i<len && s[i]=='A') {//如果后面还是A就继续
      ++x;
      ++i;
    }
    if(i<len) { // 如果还有，看是不是PAT
      if(s[i]=='P') { // 如果是P还有可能正确
        ++i;
        while(i<len && s[i]=='A') {
          ++y;
          ++i;
        }
        if(y==0) return 0;
        if(i<len && s[i]=='T') {
          ++i;
          while(i<len && s[i]=='A') {
            ++z;
            ++i;
          }
          if(z==x*y) return 1;
          else return 0;
        }else return 0;
      }else return 0;
    }else return 0;
  }else if(s[0]=='P') {
    if(!strcmp(s.c_str(), "PAT")) return 1;
    else {
      int j=1;
      while(j<len && s[j]=='A') {
        ++y;
        ++j;
      }
      if(y==0) return 0;
      if(j<len && s[j]=='T') {
        return 1;
      }else return 0;
    }
    return 1;
  }

  return 0;
}
int main(int argc, char const *argv[])
{
  int n = 0;  // 需要检测的字符串数
  while(cin>>n) {
    while(n--) {
      string s;
      cin >> s;

      if(judge(s)) printf("YES\n");
      else printf("NO\n");
    }
  }
  return 0;
}

