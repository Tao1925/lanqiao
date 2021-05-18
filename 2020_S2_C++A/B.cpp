#include<iostream>
using namespace std;
int main(){
    int ans = 0;
    for (int i = 1; i <= 2021;i++){
        ans += 2021 / i;
    }
    // ans = 15698
    cout << ans;
    return 0;
}