#include<iostream>
using namespace std;

void atom(){
    int a,b;
    cin>>a>>b;
    int q = a;
    int x[a],y[a],z[a];
    long long int price = 0;
    for (int i=0;i<a;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        if(b<z[i]){
            q--;
        }
    }
    for(int i=0;i<a;i++){
        if(z[i]<=b){
            long long int value = x[i]*y[i];
            if(value>price){
                price = value;
            }
        }
    }
    if(q == 0){
        cout<<"no tablet"<<endl;
    }
    else{
        cout<<price<<endl;
    }
    
}
int main(){
    int sac=1;
    cin>>sac;
    for(int i=0;i<sac;i++){
        atom();
    }
    return 0;
}