#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
class NSX
{
private:
    char Mansx[10];
    char Tennsx[25];
    char Dcnsx[25];
public:
    void Nhap();
    void Xuat();
    friend class HANG;
};
void NSX::Nhap()
{
    cout<<"\nNhap ma nha san xuat : "; gets(Mansx);
    cout<<"\nNhap ten nha san xuat : "; gets(Tennsx);
    cout<<"\nNhap dia chi nha san xuat : "; gets(Dcnsx);
}
void NSX::Xuat()
{
    cout<<setw(10)<<left<<Mansx<<setw(25)<<Tennsx<<setw(25)<<Dcnsx;
}

class HANG
{
private:
    char Mahang[10];
    char Tenhang[15];
    NSX x;
public:
    void Nhap();
    void Xuat();
};
void HANG::Nhap()
{
    cout<<"\nNhap ma hang : "; gets(Mahang);
    cout<<"\nNhap ten hang : "; gets(Tenhang);
    x.Nhap();
    cout<<endl;
}
void HANG::Xuat()
{
    cout<<setw(10)<<Mahang<<setw(15)<<Tenhang;
    x.Xuat();
}

int main()
{
    HANG a;
    cout<<"\n\t\t\t=========== NHAP THONG TIN HANG ===========";
    a.Nhap();
    cout<<"\n\t\t\t=========== THONG TIN HANG ==========="<<endl;
    cout<<setw(10)<<left<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(10)<<"Ma NSX"<<setw(25)<<"Ten nha san xuat"<<setw(25)<<"Dia chi nha san xuat"<<endl;
    a.Xuat();
    return 0;
}
