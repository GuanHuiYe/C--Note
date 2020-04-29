#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char tmp1[]="I love C++";
    char tmp2[]="I love JAVA";
    int n;

    // 比較兩者字串
    n=memcmp(tmp1,tmp2,sizeof(tmp1));

    if(n>0) cout << tmp1 << " > " << tmp2 << endl;
    else if(n<0) cout << tmp1 << " < " << tmp2 << endl;
    else if(n==0) cout << tmp1 << " = " << tmp2 << endl;
    return 0;
}