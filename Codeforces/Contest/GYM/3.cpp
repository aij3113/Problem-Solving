#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    map < string,string> value;

    string a[m],b[m],c[n];

    for(int i=0;i<m;i++){
        cin>>a[i];
        cin>>b[i];
        if(a[i].size()<=b[i].size()){
            value[a[i]]=a[i];
            value[b[i]]=a[i];
        }
        else{
            value[a[i]]=b[i];
            value[b[i]]=b[i];
        }
    }

    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for(int i=0;i<n;i++){
        cout<<value[c[i]]<<" ";
    }

    cout<<endl;



    return 0;
}
