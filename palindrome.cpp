#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int i, int j){
    if (i>=j){
        return true;
    }
    return (s[i]==s[j])&&(check_palindrome(s, i+1, j-1));
}

int main(){
    string s;
    cin>>s;
    cout<<check_palindrome(s, 0, s.length()-1);
}