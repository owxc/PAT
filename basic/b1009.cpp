#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{

  while(cin.peek()!=EOF) {   //each case
    vector<string> v;
    //cin.get();      // for \n
    string s;
    getline(cin, s);

    /**字符串分割**/
    string token = " ";
    string strs = s + token;  //临时串：在字符串末尾也加入分隔符，方便截取最后一段
    size_t pos = strs.find(token);
    while(pos!=-1) {
      v.push_back(strs.substr(0, pos));
      strs = strs.substr(pos+1, strs.size()); // 临时串更新
      pos = strs.find(token);               // 游标步进
    }
//    for(vector<string>::iterator iter=v.begin(); iter!=v.end(); ++iter) {
//      printf("%s ", (*iter).c_str());
//    }
    vector<string>::reverse_iterator next;
    for(vector<string>::reverse_iterator iter=v.rbegin(); iter!=v.rend(); ++iter) {
      printf("%s", (*iter).c_str());
      next = iter;++next;
      if(next!=v.rend()) printf(" ");
    }
  }
  return 0;
}
