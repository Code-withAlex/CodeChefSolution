#include<iostream>
#include<cmath>

using namespace std;
 
class complex
{
    int a,b;
public:
    complex(int a1, int b1){
        a = a1;
        b = b1;
    }
    void print(){
        cout<<a<<","<<b<<endl;
    }
    friend void distance(complex, complex);
};

void distance(complex v1, complex v2){
    int d1 = (v2.a-v1.a);
    int d2 = (v2.b-v1.b);
    int diff = sqrt(pow(d1,2)+pow(d2,2));
    cout<<"The difference is :"<<diff<<endl;
}

int main(){
    complex x1(1,1);
    complex x2(2,2);
    distance(x1,x2);

    return 0;
}