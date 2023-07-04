#include<bits/stdc++.h>
using namespace std;

void subsequence(int i, string &s, string sub){
    if (i>=s.length()){
        cout<<sub<<"\n";
        return;
    }
    subsequence(i+1, s, sub);
    subsequence(i+1, s, sub+s[i]);
}

int main(){
    string s;
    cin>>s;
    string sub="";
    subsequence(0, s, sub);
}