#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    char name[40];
    int math;
    int en;
};


int main(){
    student a,b;
    char myname[]="John";

    // 將 myname 的資料 複製到 a.name
    // memcpy 兩者都需要用記憶體位置傳遞
    // 但是陣列的話本身代表 index : 0 的記憶體位置
    memcpy(a.name,myname,sizeof(myname));
    a.math=99;
    a.en=85;

    memcpy(&b,&a,sizeof(a));

    cout << b.name << " " << b.math << " " << b.en << endl;
}