#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for (int i=0;i<a;i++){
        cin>>b[i];
    }
    int c;
    cin>>c;
    int cnt=0;
    for (int i=0;i<a;i++){
        if (b[i]==c){
            cout<<"True"<<endl;
            cnt+=1;
            break;
        }
    }
    if (cnt==0){
        cout<<"False"<<endl;
    }
}