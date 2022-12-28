#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=a*a;
    int l=0;
    while (b>0){
        int c=b%10;
            l+=c;
            b=b/10;
    }
    if (l==a){
        cout<<"Neon Number"<<endl;
    
    }
    else if(l!=a){
        cout<<"Not Neon Number"<<endl;    
        
    }
}