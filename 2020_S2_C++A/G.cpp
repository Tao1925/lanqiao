#include<iostream>
#include<unordered_map>
#include<cmath>
using namespace std;
typedef long long ll;
unordered_map<ll,int> cnt_prime;
void rec(ll x){
    bool jud = true;
    for (ll i = 2; i <= (ll)sqrt(x); i++){
        if (x % i == 0){
            // cout << x << " " << i << endl;
            cnt_prime[i]++;
            jud = false;
            rec(x / i);
            break;
        }
    }
    if (jud) cnt_prime[x]++;
}
int main(){
    ll x;
    cin >> x;
    rec(x);
    ll ans = 1;
    for (auto iter = cnt_prime.begin(); iter != cnt_prime.end(); iter++){
        // cout << iter -> first << " " << iter->second << endl;
        if (iter->second % 2){
            ans *= iter->first;
        }
    }
    cout << ans;
    return 0;
}
