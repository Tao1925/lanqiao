#include<iostream>
using namespace std;
// Month without 2:2 12 20~29 -> 12
// Run Nian -> Feb:29+Dec:31+10*12=180
// Ping Nian -> 179
bool containsTwo(int year){
    while(year){
        if (year % 10 == 2) return true;
        year /= 10;
    }
    return false;
}
bool isRun(int year){
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}
int main(){
    int ans = 0;
    for (int year = 1000; year <= 9999; year++){
        if (containsTwo(year)) ans += 365;
        else ans += 179;
        if (isRun(year)) ans += 1;
    }
    cout << ans;
    return 0;
}
