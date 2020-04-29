#include <iostream>

using namespace std;

/** const 代表常數
 *  常數命名規則通常是全大寫  
 */
const int MAX = 100;

int main(){
   
   int num[MAX];
   for(int index=0 ; index< MAX ; index++){
       num[index]=index;
       cout << num[index] << endl;
   }
    return 0;
}