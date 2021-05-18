#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;
int tot[20210510];
vector<int> getDiv(int x){
    vector<int> ans;
    ans.push_back(1);
    for (int i = 2; i < sqrt(x); i++){
        if (x % i == 0){
            ans.push_back(i);
            ans.push_back(x / i);
        }
    }
    if (sqrt(x) - floor(sqrt(x)) < 0.000001) ans.push_back(floor(sqrt(x)));
    return ans;

}
int func(int x){
    if (tot[x]) return tot[x];
    int ans = 0;
    for (int num:getDiv(x)){
        ans += func(num);
    }
    tot[x] = ans;
    return ans; 
}
int main(){
    memset(tot,0,sizeof(tot));
    tot[1] = 1;
    long long ans = 0;
    for (int i = 1; i <= 20210509; i++) {
        ans += (long long) func(i);
        // cout << func(i) << endl;
        if (i % 100000 == 0) cout << i << " " << ans <<endl;;
    }
    cout << ans;
    return 0;
}