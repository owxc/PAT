#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[100] = {0};
    char res[10] = {0};
    int sum = 0;
    string shuzi[] = {"ling", "yi", "er", "san", "si", "wu", "liu","qi", "ba", "jiu"};
    scanf("%s", &str);

    int len = strlen(str);
    for(int i = 0; i<len; ++i) {
        sum += str[i]-'0';
    }

    sprintf(res, "%d", sum);
    int res_len = strlen(res);
    for(int j = 0; j<res_len;++j) {
        //printf("%s", shuzi[j]);
        cout<< shuzi[res[j]-'0'];
        if(j!=res_len-1)printf(" ");
    }
    return 0;
}
// 这里由于可以以字符串的形式读入，所以尚不需要大数；10^100只需100位
