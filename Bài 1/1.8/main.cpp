#include <iostream>

using namespace std;
class CanBo
{
private:
    string mcb;
    string hoten;
    int ngay;
    int thang;
    int nam;
    int cong;
public:
    void Nhap();
    void Xuat();
    unsigned long int tinhLuong();

    CanBo();
    ~CanBo();
};
CanBo::CanBo()
{

}
CanBo::~CanBo()
{

}
void CanBo::Nhap()
{
    cout<<"\nNhap ma can bo : ";
    getline(cin,mcb);
    cout<<"\nNhap ho ten : ";
    getline(cin,hoten);
    cout<<"\nNhap ngay sinh : ";
    cin>>ngay;
    cout<<"\nNhap thang sinh : ";
    cin>>thang;
    cout<<"\nNhap nam sinh : ";
    cin>>nam;
    cout<<"\nNhap so ngay lam trong thang : ";
    cin>>cong;
    cin.ignore();
}
unsigned long int CanBo::tinhLuong()
{
    return cong*250000;
}
void CanBo::Xuat()
{
    cout<<"\nMa can bo : "<<mcb;
    cout<<"\nHo ten : "<<hoten;
    cout<<"\nNgay sinh : "<<ngay<<"/"<<thang<<"/"<<nam;
    cout<<"\nSo ngay lam trong thang : "<<cong;
    cout<<"\nLuong : "<<tinhLuong();
}
int main()
{
    CanBo cb;
    cout<<"\n\t\t\t============== NHAP THONG TIN CAN BO ==============";
    cb.Nhap();
    cout<<"\n\t\t\t============== THONG TIN CAN BO ==============";
    cb.Xuat();
    return 0;
}
