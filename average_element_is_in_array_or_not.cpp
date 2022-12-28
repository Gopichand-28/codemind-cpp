#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for (int i=0;i<a;i++){
        cin>>b[i];
    }
    int u=0;
    for (int i=0;i<a;i++){
        u+=b[i];
    }
    int k=u/a;
    int cnt=0;
    for (int i=0;i<a;i++){
        if(b[i]==k){
            cout<<"True"<<endl;
            cnt+=1;
            break;
        }
    }
    if (cnt==0){
        cout<<"False"<<endl;
    }
    
    
    
}