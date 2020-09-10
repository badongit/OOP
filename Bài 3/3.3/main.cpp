#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

class HANG
{
private:
    char Mahang[10];
    char Tenhang[15];
    double Dongia;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};
void HANG::Nhap()
{
   cout<<"\nNhap ma hang : "; gets(Mahang);
   cout<<"\nNhap ten hang : "; gets(Tenhang);
   cout<<"\nNhap don gia : "; cin>>Dongia;
   fflush(stdin);
}
void HANG::Xuat()
{
    cout<<setw(10)<<Mahang<<setw(15)<<Tenhang<<setw(10)<<(size_t)Dongia<<endl;
}

class PHIEU
{
private:
    char Maphieu[10];
    HANG x[100];
    int n;
public:
    void Nhap();
    void Xuat();
};
void PHIEU::Nhap()
{
    cout<<"\nNhap ma phieu : "; gets(Maphieu);
    cout<<"\nNhap so luong mat hang : "; cin>>n;
    fflush(stdin);
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=========== NHAP THONG TIN MAT HANG "<<i+1<<" ===========\n";
        x[i].Nhap();
    }
}
void PHIEU::Xuat()
{
    cout<<"\n\t\t\t============= PHIEU MUA HANG =============\n";
    cout<<"\nMa phieu : "<<Maphieu;
    cout<<"\nSo luong mat hang : "<<n;
    cout<<"\n\n"<<setw(10)<<left<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(10)<<"Don gia(VND)"<<endl;
    for(int i=0;i<n;i++)
        x[i].Xuat();
}

int main()
{
    PHIEU a;
    cout<<"\n\t\t\t============ NHAP THONG TIN PHIEU MUA HANG ============";
    a.Nhap();
    a.Xuat();
    return 0;
}
