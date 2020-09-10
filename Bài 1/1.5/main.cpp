#include <iostream>
#include <math.h>
using namespace std;
class TamGiac
{
private:
    float a;
    float b;
    float c;
    float p;
public:
    void Nhap();

    float chuvi();
    float dientich();

    TamGiac();
    ~TamGiac();
};
TamGiac::TamGiac()
{

}
TamGiac::~TamGiac()
{

}
void TamGiac::Nhap()
{
    cout<<"\nNhap 3 canh cua tam giac ";
    cout<<"\nNhap do dai canh thu nhat : ";
    cin>>a;
    cout<<"\nNhap do dai canh thu hai : ";
    cin>>b;
    cout<<"\nNhap do dai canh thu ba : ";
    cin>>c;
}
float TamGiac::chuvi()
{
    return a+b+c;
}
float TamGiac::dientich()
{
    p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
    TamGiac tamgiac;
    tamgiac.Nhap();
    cout<<"\nChu vi tam giac la "<<tamgiac.chuvi();
    cout<<"\nDien tich tam giac la "<<tamgiac.dientich();
    return 0;
}
