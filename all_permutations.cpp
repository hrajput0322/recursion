#include<bits/stdc++.h>
using namespace std;

void all_permutation(int index, vector<vector<int>> &ans, vector<int> &v){
    if (index==v.size()){
        ans.push_back(v);
        return;
    }
    for (int i=index; i<v.size(); i++){
        swap(v[i], v[index]);
        all_permutation(index+1, ans, v);
        swap(v[i], v[index]);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<vector<int>> ans;
    all_permutation(0, ans, v);
    for (int i=0; i<ans.size(); i++){
        for (int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}