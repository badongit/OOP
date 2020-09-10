#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

class QUANLY
{
private:
    char Maql[10];
    char Hoten[20];
public:
    void Nhap();
    void Xuat();
    friend class PHONGMAY;
};
void QUANLY::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ma quan ly : "; gets(Maql);
    cout<<"\nNhap ho ten : "; gets(Hoten);
}
void QUANLY::Xuat()
{
    cout<<"\nMa quan ly : "<<Maql;
    cout<<"\nHo ten : "<<Hoten;
}

class MAY
{
private:
    char Mamay[10];
    char Kieumay[15];
    char Tinhtrang[12];
public:
    void Nhap();
    void Xuat();
    friend class PHONGMAY;
};
void MAY::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ma may : "; gets(Mamay);
    cout<<"\nNhap kieu may : "; gets(Kieumay);
    cout<<"\nNhap tinh trang may : "; gets(Tinhtrang);
}
void MAY::Xuat()
{
    cout<<setw(10)<<Mamay<<setw(15)<<Kieumay<<setw(12)<<Tinhtrang<<endl;
}

class PHONGMAY
{
private:
    char Maphong[10];
    char Tenphong[10];
    float Dientich;
    QUANLY x;
    MAY y[100];
    int n;
public:
    void Nhap();
    void Xuat();
};
void PHONGMAY::Nhap()
{
    fflush(stdin);
    cout<<"\nNhap ma phong : "; gets(Maphong);
    cout<<"\nNhap ten phong : "; gets(Tenphong);
    cout<<"\nNhap dien tich phong(m2) : "; cin>>Dientich;
    x.Nhap();
    cout<<"\nNhap so luong may co trong phong : "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=========== NHAP THONG TIN MAY THU "<<i+1<<" ===========";
        y[i].Nhap();
    }
}
void PHONGMAY::Xuat()
{
    cout<<"\n\t\t\t============= THONG TIN PHONG MAY =============\n";
    cout<<"\nMa phong : "<<Maphong;
    cout<<"\nTen phong : "<<Tenphong;
    cout<<"\nDien tich : "<<Dientich<<" (m2)";
    x.Xuat();
    cout<<"\nSo luong may trong phong : "<<n;
    cout<<"\n\t\t\t=========== THONG TIN DAN MAY ===========\n";
    cout<<setw(10)<<left<<"Ma may"<<setw(15)<<"Kieu may"<<setw(12)<<"Tinh trang"<<endl;
    for(int i=0;i<n;i++)
        y[i].Xuat();
}
int main()
{
    PHONGMAY a;
    cout<<"\n\t\t\t============== NHAP THONG TIN PHONG MAY ==============\n";
    a.Nhap();
    a.Xuat();
    return 0;
}
