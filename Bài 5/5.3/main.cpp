#include <iostream>
#include <stdio.h>

using namespace std;

class VEHICLE
{
protected:
    char NhanHieu[10];
    int Namsx;
    char Hang[10];
public:
    void Nhap(){
        cout<<"\nNhap nhan hieu : "; fflush(stdin); gets(NhanHieu);
        cout<<"\nNhap nam san xuat : "; cin>>Namsx;
        cout<<"\nNhap hang xe : "; fflush(stdin); gets(Hang);
    }
    void Xuat(){
        cout<<"\nNhan hieu : "<<NhanHieu;
        cout<<"\nNam san xuat : "<<Namsx;
        cout<<"\nHang xe : "<<Hang;
    }
};

class OTO : public VEHICLE
{
private:
    int Sochongoi;
    float Dungtich;
public:
    void Nhap(){
        VEHICLE::Nhap();
        cout<<"\nNhap so cho ngoi : "; cin>>Sochongoi;
        cout<<"\nNhap dung tich xe : "; cin>>Dungtich;
    }
    void Xuat(){
        VEHICLE::Xuat();
        cout<<"\nSo cho ngoi : "<<Sochongoi;
        cout<<"\nDung tich xe : "<<Dungtich;
    }
};

class MOTO : public VEHICLE
{
private:
    float Phankhoi;
public:
    void Nhap(){
        VEHICLE::Nhap();
        cout<<"\nNhap phan khoi : "; cin>>Phankhoi;
    }
    void Xuat(){
        VEHICLE::Xuat();
        cout<<"\nPhan khoi : "<<Phankhoi;
    }
};

int main()
{
    OTO a;
    MOTO b;
    cout<<"\n\t\t\t============== NHAP THONG TIN O TO ==============\n";
    a.Nhap();
    cout<<"\n\t\t\t============== NHAP THONG TIN MO TO ==============\n";
    b.Nhap();
    cout<<"\n\t\t\t============== THONG TIN XE O TO ==============\n";
    a.Xuat();
    cout<<"\n\t\t\t============== THONG TIN XE MO TO ==============\n";
    b.Xuat();
    return 0;
}
