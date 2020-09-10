#include <iostream>

using namespace std;

class PT2
{
private:
    float a,b,c;
public:
    PT2(float a,float b,float c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    PT2(){

    }
    void xuat(){
        cout<<a<<"x^2 ";
        if(b>=0) cout<<"+ "<<b<<"x ";
        else cout<<b<<"x ";
        if(c>=0) cout<<"+ "<<c;
        else cout<<c;
    }
    PT2 operator=(PT2 A){
        a=A.a*(-1);
        b=A.b*(-1);
        c=A.c*(-1);
        return *this;
    }
    PT2 operator+(PT2 A){
        PT2 temp;
        temp.a = a + A.a;
        temp.b = b + A.b;
        temp.c = c + A.c;
        return temp;
    }
    PT2 operator-(PT2 A){
        PT2 temp;
        temp.a = a - A.a;
        temp.b = b - A.b;
        temp.c = c - A.c;
        return temp;
    }
};

int main()
{
    PT2 A(1,2,4),B(3,-3,5),C,D;
    C=A;
    D=B;
    C.xuat();
    cout<<endl;
    D.xuat();
    cout<<"\nTong 2 pt : ";
    (C+D).xuat();
    cout<<"\nHieu 2 pt : ";
    (C-D).xuat();
    return 0;
}
