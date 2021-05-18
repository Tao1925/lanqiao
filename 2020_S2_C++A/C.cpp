#include<iostream>
#include<string>
typedef long long ll;
using namespace std;
ll store[2022][6];
ll rec(int num, int n){
    if (store[num][n] != 0) return store[num][n];
    if (n == 1){
        store[num][n] = 1;
        return 1;
    }
    ll ans = 0;
    for (int i = 1; i <= num -n + 1; i++){
        ans += rec(num - i, n - 1);
    }
    store[num][n] = ans;
    return ans;
}
int main(){
    // ans = 691677274345
    ll ans = rec(2021, 5);
    cout << ans;
    //for (int i = 0;i <= 2021 ;i++){
    //    cout<< i <<"  "<< rec(i ,5) << endl;
    //}
    return 0;
}