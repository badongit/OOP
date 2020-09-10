#include <iostream>
#define pi 3.14159
using namespace std;

class HinhTron
{
private:
    float bankinh;
public:
    float chuvi();
    float dientich();

    void Nhap();

    HinhTron();
    ~HinhTron();
};
void HinhTron::Nhap()
{
    cout<<"\nNhap ban kinh hinh tron : ";
    cin>>bankinh;
}
float HinhTron::chuvi()
{
    return 2*pi*bankinh;
}
float HinhTron::dientich()
{
    return pi*bankinh*bankinh;
}
HinhTron::HinhTron()
{

}
HinhTron::~HinhTron()
{

}
int main()
{
    HinhTron ht;
    ht.Nhap();
    cout<<"\nChu vi hinh tron : "<<ht.chuvi();
    cout<<"\nDien tich hinh tron : "<<ht.dientich();
    return 0;
}
