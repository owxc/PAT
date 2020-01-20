#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 100

int main(int argc, char const *argv[])
{
  int N = 0;  // 需要检测的字符串数
  int n = 0;
  while(cin>>N) { // 单个用例
    map<int, bool> m;
    for(int i=0;i<N;++i) {  // input and sort
      cin.get();
      cin>>n;
      m.insert(pair<int, bool>(n,false));
    }
    for(map<int, bool>::iterator iter=m.begin(); iter!=m.end(); ++iter) {
      int n = iter->first;
      while(n!=1) {
        if(n%2==0) {
          n = n/2;
        }else {
          n = (3*n + 1)/2;
        }
        map<int, bool>::iterator res = m.find(n);
        if(res!=m.end()) // if found
          m.erase(res); //覆盖到的直接删除
      }
      //printf("%d, %d ", iter->first, iter->second);
    }//printf("\n");

    for(map<int, bool>::reverse_iterator iter=m.rbegin(); iter!=m.rend(); ++iter) {
      printf("%d", iter->first);
      map<int, bool>::reverse_iterator next = iter;
      if(++next != m.rend()) cout << " ";
      //printf("%d, %d ", iter->first, iter->second);
    }//printf("\n");
  }
  return 0;
}

