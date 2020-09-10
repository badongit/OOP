#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class NSX
{
private:
    char TenNSX[20];
    char DiaChi[20];
public:
    void NHAP(){
        cout<<"\nNhap ten nha san xuat : "; fflush(stdin); gets(TenNSX);
        cout<<"\nNhap dia chi : "; gets(DiaChi);
    }
    void XUAT(){
        cout<<setw(20)<<TenNSX<<setw(20)<<DiaChi;
    }
    friend class HANG;
};

class HANG
{
protected:
    char Tenhang[15];
    NSX x;
    double Dongia;
public:
    void NHAP(){
        cout<<"\nNhap ten hang : "; fflush(stdin); gets(Tenhang);
        x.NHAP();
        cout<<"\nNhap don gia : "; cin>>Dongia;
    }
    void XUAT(){
        cout<<setw(15)<<Tenhang;
        x.XUAT();
        cout<<setw(10)<<(size_t)Dongia;
    }
    HANG(){

    }
};

class DATE
{
private:
    int D,M,Y;
public:
    void NHAP(){
        cout<<"\nNhap ngay nhap : "; cin>>D;
        cout<<"\nNhap thang nhap : "; cin>>M;
        cout<<"\nNhap nam nhap : "; cin>>Y;
    }
    void XUAT(){
        cout<<setw(2)<<D<<"/"<<setw(2)<<M<<"/"<<setw(6)<<Y;
    }
    friend class TIVI;
};

class TIVI : public HANG
{
private:
    float Kichthuoc;
    DATE NgayNhap;
public:
    void NHAP(){
        HANG::NHAP();
        cout<<"\nNhap kich thuoc (inches) : "; cin>>Kichthuoc;
        NgayNhap.NHAP();
    }
    void XUAT(){
        HANG::XUAT();
        cout<<setw(12)<<Kichthuoc;
        NgayNhap.XUAT();
        cout<<endl;
    }
    TIVI(){

    }
};

void title(){
    cout<<setw(15)<<left<<"Ten hang"<<setw(20)<<"Ten NSX"<<setw(20)<<"Dia chi";
    cout<<setw(10)<<"Don gia"<<setw(12)<<"Kich thuoc"<<setw(12)<<"Ngay nhap"<<endl;
}
int main()
{
    TIVI a;
    cout<<"\n\t\t\t=============== NHAP THONG TIN TI VI ===============\n";
    a.NHAP();
    cout<<"\n\t\t\t=============== THONG TIN TI VI ===============\n";
    title();
    a.XUAT();
    return 0;
}
