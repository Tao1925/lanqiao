#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int x){
    if (x == 1||x == 4) return false;
    if (x == 2||x == 3) return true;
    for (int i = 2; i <= (int)ceil(sqrt(x)); i++){
        if (x % i == 0) return false; 
    }
    return true;
}
int main(){
    int cnt = 0;
    for (int i = 1;i <= 10; i++){
        if (!isPrime(i)) cnt++;
    }
    cout<<cnt;
    return 0;
}