#include <iostream>
#define pi 3.14159
using namespace std;

class HinhTron
{
private:
    float banKinh;
public:
    float chuVi();
    float dienTich();
    void nhap();
};
void HinhTron::nhap()
{
    cout<<"\nNhap ban kinh hinh tron : ";
    cin>>banKinh;
}
float HinhTron::chuVi()
{
    return 2*pi*banKinh;
}
float HinhTron::dienTich()
{
    return pi*banKinh*banKinh;
}

int main()
{
    HinhTron ht;
    ht.nhap();
    cout<<"\nChu vi hinh tron : "<<ht.chuVi();
    cout<<"\nDien tich hinh tron : "<<ht.dienTich();
    return 0;
}
