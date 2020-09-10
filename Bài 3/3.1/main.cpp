#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
class DATE
{
private:
    int D,M,Y;
public:
    void Nhap();
    void Xuat();
    friend class NHANSU;
};
void DATE::Nhap()
{
    cout<<"\nNhap ngay sinh : "; cin>>D;
    cout<<"\nNhap thang sinh : "; cin>>M;
    cout<<"\nNhap nam sinh : "; cin>>Y;
}
void DATE::Xuat()
{
    cout << setw(2) << D << "/" <<setw(2) << M << "/" <<setw(6) << Y;
}

class NHANSU
{
private:
    char Manhansu[10];
    char Hoten[20];
    DATE NS;
public:
    void Nhap();
    void Xuat();
};
void NHANSU::Nhap()
{
    cout << "\nNhap ma nhan su : "; gets(Manhansu);
    cout << "\nNhap ho ten : "; gets(Hoten);
    NS.Nhap();
}
void NHANSU::Xuat()
{
    cout<<setw(10)<<Manhansu<<setw(20)<<Hoten;
    NS.Xuat();
    cout<<endl;
}
int main()
{
    NHANSU a;
    cout<<"\n\t\t\t=========== NHAP THONG TIN NHAN SU ===========";
    a.Nhap();
    cout<<"\n\t\t\t=========== THONG TIN NHAN SU ==========="<<endl;
    cout<<setw(10)<<left<<"Ma NS"<<setw(20)<<"Ho ten"<<setw(12)<<"Ngay sinh"<<endl;
    a.Xuat();
    return 0;
}
