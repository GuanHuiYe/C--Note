#include <iostream>
#include <sstream> // stringstream
#include <cctype> // isalpha & tolower 

using namespace std;

int main(){
   string s,tmp;
   while(getline(cin,s)){
        for(int i=0;i<=s.length();i++){
            // isalpha 檢查是否是字母
            if(isalpha(s[i])){
                s[i]=tolower(s[i]); // 轉成小寫
            }else {
                s[i]=' ';
            }
        }

        stringstream ss(s);
        
        while(ss>>tmp){
            cout<<tmp<<endl;
        }
   }
    return 0;
}