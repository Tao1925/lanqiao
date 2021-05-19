#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i < n; i++){
        if ((i * i)%n < (n + 1)/2){
            ans++;
        }
    }
    cout << ans;
    return 0;
}