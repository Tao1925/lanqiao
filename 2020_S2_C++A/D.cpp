#include<iostream>
#include<queue>
#include<vector>
#include<set>
using namespace std;
// int dist[2022][2022];
int fa[2022];
struct edge{
    int beg,en;
    int dist;
    edge(int x,int y,int d){
        beg = x;
        en = y;
        dist = d;
    }
};
struct cmp{
    bool operator()(edge& e1,edge& e2){
        return e1.dist > e2.dist;
    }
};
int calD(int x, int y){
    int ans = 0;
    while(x|y){
        if (x % 10 != y % 10)
            ans += x % 10 + y % 10;
        x /= 10;
        y /= 10;
    }
    return ans;
}
int find(int x){
    if (x != fa[x])
        fa[x] = find(fa[x]);
    return fa[x];
}
int main(){
    int ans = 0;
    // disjoint-set
    for (int i = 1; i<= 2021; i++) fa[i] = i;
    // Kruskal
    priority_queue<edge,vector<edge>,cmp> q;
    for (int i = 1; i <= 2021; i++){
        for (int j = i + 1; j <= 2021; j++){
            q.push(edge(i,j,calD(i,j)));
        }
    }
    
    for (int i = 1; i<= 2020; i++){
        // cout << i << endl;
        edge e = q.top();
        q.pop();
        int x = find(e.beg);
        int y = find(e.en);
        if (x != y){
            fa[x] = y;
            ans += e.dist;
            cout << "i= " << i;
            cout << " ans=" << ans << endl;
        }else i--;

    }
    
    // edge e = q.top();
    // cout << e.dist;
    cout << ans;
    return 0;
}