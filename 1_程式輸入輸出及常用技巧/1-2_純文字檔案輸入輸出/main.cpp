#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // ifstream => input file stream
    ifstream input_txt("input.txt");
    ofstream output_txt("output.txt");

    string s;

    // 逐行讀取 input_txt 輸出到 s 上
    while (getline(input_txt,s)){
        // 寫入 output_txt 加入 換行(endl)
        output_txt << s << endl;
    }
    return 0 ;
}