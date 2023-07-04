#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char a, char b, char c){
    if (n==1){
        cout<<"move 1 from "<<a<<" to "<<c<<"\n";
        return;
    }
    tower_of_hanoi(n-1, a, c, b);
    cout<<"move "<<n<<" from "<<a<<" to "<<c<<"\n";
    tower_of_hanoi(n-1, b, a, c);
}

int main(){
    int n;
    cin>>n;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    tower_of_hanoi(n, a, b, c);
}