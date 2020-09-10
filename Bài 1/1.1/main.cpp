#include <iostream>

using namespace std;
class HinhThang
{
private:
    float daybe;
    float daylon;
    float chieucao;
public:
    float dientich();

    void Nhap();

    HinhThang();
    ~HinhThang();
};
void HinhThang::Nhap()
{
    cout<<"\nNhap day lon : ";
    cin>>daylon;
    cout<<"\nNhap day be : ";
    cin>>daybe;
    cout<<"\nNhap chieu cao : ";
    cin>>chieucao;
}
float HinhThang::dientich()
{
    return ((daybe+daylon)*chieucao)/2;
}
HinhThang::HinhThang()
{

}
HinhThang::~HinhThang()
{

}
int main()
{
    HinhThang ht;
    cout<<"\n\t\t============= NHAP THONG SO HINH THANG ============= \n";
    ht.Nhap();
    cout<<"\nDien tich hinh thang la : "<<ht.dientich();
    return 0;
}
