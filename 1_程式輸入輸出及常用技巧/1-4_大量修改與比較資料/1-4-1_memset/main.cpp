#include <iostream>
#include <cstring>

using namespace std;

int main(){
    const int SIZE=100;
    int num[SIZE];
    // memset(num,0,sizeof(num));

    // 輸入 100 數字會亂掉
    // 原因是 每個Byte都設100的緣故
    // 在 輸出 用 HEX 可以看到
    // 我們輸入的100(0x64)
    //memset(num,100,sizeof(num));

    // -1 資料型態就是全都是 0xFF
    // 所以使用起來沒有問題    
    memset(num,-1,sizeof(num));

    for(int index=0;index<SIZE;index++){
        cout << num[index] << " ";
        //cout << hex << num[index] << " ";
    }
    cout << endl;
}