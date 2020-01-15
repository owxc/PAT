#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Stu {
public:
  string name;
  string num;
  int score;
};
int main(int argc, char const *argv[])
{
  int n = 0;  // number of students
  int i = 0;
  int h = 0,l = 0;
  Stu stu[500];
  while(cin>>n) {   //each case
    cin.get();      // for \n
    i = 0;
    while(i<n) {
//      printf("i = %d\n", i);
      string s;
      getline(cin, s);
      /**字符串分割**/
      string token = " ";
      string strs = s + token;  //临时串：在字符串末尾也加入分隔符，方便截取最后一段
      size_t pos = strs.find(token);

      //name
      stu[i].name = strs.substr(0, pos);
      strs = strs.substr(pos+1, strs.size()); // 临时串更新
      pos = strs.find(token);               // 游标步进

      //num
      stu[i].num = strs.substr(0, pos);
      strs = strs.substr(pos+1, strs.size()); // 临时串更新
      pos = strs.find(token);               // 游标步进

      //num
      stu[i].score = atoi(strs.substr(0, pos).c_str());
      strs = strs.substr(pos+1, strs.size()); // 临时串更新
      //pos = strs.find(token);               // 游标步进

      if(stu[i].score<stu[l].score) l = i;
      if(stu[i].score>stu[h].score) h = i;

//      printf("%s\t", stu[i].name.c_str());
//      printf("%s\t", stu[i].num.c_str());
//      printf("%d\n", stu[i].score);
      ++i;
    }
    printf("%s %s\n", stu[h].name.c_str(), stu[h].num.c_str());
    printf("%s %s\n", stu[l].name.c_str(), stu[l].num.c_str());
  }
  return 0;
}
