#include <iostream>

using namespace std;
class HinhThang
{
private:
    float dayBe;
    float dayLon;
    float chieuCao;
public:
    float dienTich();
    void Nhap();
};
void HinhThang::Nhap()
{
    cout<<"\nNhap day lon : ";
    cin>>dayLon;
    cout<<"\nNhap day be : ";
    cin>>dayBe;
    cout<<"\nNhap chieu cao : ";
    cin>>chieuCao;
}
float HinhThang::dienTich()
{
    return ((dayBe+dayLon)*chieuCao)/2;
}

int main()
{
    HinhThang ht;
    cout<<"\n\t\t============= NHAP THONG SO HINH THANG ============= \n";
    ht.Nhap();
    cout<<"\nDien tich hinh thang la : "<<ht.dienTich();
    return 0;
}
