#include <iostream>

using namespace std;

int main(){
    string input;
    // getline 取得 Input 的資料直到結束
    while(getline(cin,input)){
        cout << "input : " << input << endl;
    }
    return 0;                    
}