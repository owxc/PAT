#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    int cnt = 0;
    scanf("%d", &n);
    getchar();
    // cin >> n;
    // cin.get();
    while(n!=1) {
        if(n%2==0) {
            n = n/2;
        }else {
            n = (3*n + 1)/2;
        }
        ++cnt;
    }
    printf("%d", cnt);
    getchar();
    return 0;
}
