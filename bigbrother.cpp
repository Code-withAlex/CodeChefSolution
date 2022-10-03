/*#include<iostream>
using namespace std;

int main(){
    int a,b,c=0,d;
    cin>>a>>b;
    if(a<b){
        c++;
    }
    return a*3,2*b;
    
    cout<<c<<endl;
}   */
#include<iostream>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a>>b;
    if(a>b){
        return c=0;
    }
    else{
        while(a<=b){
            a=a*3;
            b=b*2;
            c++;
        }
    }
    cout<<c<<endl;
}