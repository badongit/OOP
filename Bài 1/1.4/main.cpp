#include <iostream>
#include <math.h>
using namespace std;

class PhuongTrinhBac2
{
private:
    float a;
    float b;
    float c;
    float delta;
public:
    void Nhap();
    void Xuat();

    float x1;
    float x2;
    void XuatNghiem();
};

void PhuongTrinhBac2::Nhap()
{
    cout<<"\nPhuong trinh bac 2 co dang ax^2 + bx + c = 0";
    cout<<"\nNhap a : ";
    cin>>a;
    cout<<"\nNhap b : ";
    cin>>b;
    cout<<"\nNhap c : ";
    cin>>c;
}
void PhuongTrinhBac2::Xuat()
{
    cout<<"\nPhuong trinh bac 2 : "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
}
void PhuongTrinhBac2::XuatNghiem()
{
    if(a==0){
        if(b==0){
            if(c!=0) {
                cout<<"\nPhuong trinh vo nghiem.";
            }
            else {
                cout<<"\nPhuong trinh vo so nghiem.";
            }
        }
        else {
            x1=-c/b;
            cout<<"\nPhuong trinh co nghiem duy nhat x = "<<x1;
        }
    }

}
int main()
{
    PhuongTrinhBac2 pt2;
    pt2.Nhap();
    pt2.Xuat();
    pt2.XuatNghiem();
    return 0;
}
