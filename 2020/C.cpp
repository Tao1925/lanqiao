#include<iostream>
#include<cstring>
#include<set>
using namespace std;
string str = "tocyjkdzcieoiodfpbgcncsrjbhmu\
gdnojjddhllnofawllbhfiadgdcdjstemphmnjiheco\
apdjjrprrqnhgccevdarufmliqijgihhfgdcmxvicfa\
uachlifhafpdccfseflcdgjncadfclvfmadvrnaaaha\
hndsikzssoywakgnfjjaihtniptwoulxbaeqkqhfwl";
//string str = "lanqiao";
int main(){
    set<string> hashset;
    //int cnt = 0;
    for (char c: str){
        string temp(1,c);
        hashset.emplace(temp);
        for (string s: hashset){
            //cout<<s[s.size()-1]<<" "<<c<<endl;
            if (s[s.size()-1]<c){
                hashset.emplace(s+temp);
            }
        }
        //cnt++;
        //cout<<cnt<<" "<<hashset.size()<<endl;
    }
    // 3616159
    cout << hashset.size();
    //for (string s:hashset)cout<<s<<" ";
    return 0;
}