#include <iostream>

using namespace std;
class PTbac1
{
private:
    float a;
    float b;
public:
     void Nhap();
     void Xuat();

     float x;
     void XuatNghiem();
};

void PTbac1::Nhap()
{
    cout<<"\nPhuong trinh co dang ax + b = 0";
    cout<<"\nNhap a : ";
    cin>>a;
    cout<<"\nNhap b : ";
    cin>>b;
}
void PTbac1::Xuat()
{
    cout<<"\nPhuong trinh bac nhat : "<<a<<"x + "<<b<<" = 0";
}
void PTbac1::XuatNghiem()
{
    if(a==0) {
        if(b!=0) cout<<"\nPhuong trinh vo nghiem.";
        else cout<<"\nPhuong trinh vo so nghiem.";
    }
    else {
        x=-b/a;
        cout<<"\nNghiem cua phuong trinh la x = "<<x;
    }
}
int main()
{
    PTbac1 pt1;
    pt1.Nhap();
    pt1.Xuat();
    pt1.XuatNghiem();
    return 0;
}
