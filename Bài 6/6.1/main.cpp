#include <iostream>

using namespace std;
class VECTO
{
private:
    float x,y;
public:
    void nhap()
    {
        cout<<"\nNhap x = "; cin>>x;
        cout<<"\nNhap y = "; cin>>y;
    }
    void xuat()
    {
        cout<<"("<<x<<";"<<y<<")";
    }
    VECTO operator+(VECTO a){
        VECTO temp;
        temp.x= x + a.x;
        temp.y = y + a.y;
        return  temp;
    }
    VECTO operator-(VECTO a){
        VECTO temp;
        temp.x= x - a.x;
        temp.y = y - a.y;
        return  temp;
    }
};

int main()
{
    VECTO a,b;
    cout<< "Nhap toa do vecto A : ";
    a.nhap();
    cout<< "Nhap toa do vecto B : ";
    b.nhap();
    cout<<"Tong = ";
    (a+b).xuat();
    cout<<"\nHieu = ";
    (a-b).xuat();
    return 0;
}
