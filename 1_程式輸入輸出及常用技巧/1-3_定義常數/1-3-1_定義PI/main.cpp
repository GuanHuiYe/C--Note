#include <iostream>
#include <cmath> //acos
#include <iomanip> // setprecision

using namespace std;

int main(){
    // acos 反查餘弦式
    const double PI=acos(-1.0);

    // setprecision 輸出精準度
    cout << setprecision(15) << PI << endl;
    return 0;
}