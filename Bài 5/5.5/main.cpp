#include <iostream>
#include <stdio.h>
using namespace std;
class THUCPHAM
{
protected:
    string Tenthucpham;
    double Giaca;
public:
    void Nhap(){
        cout<<"\nNhap ten thuc pham : "; fflush(stdin); getline(cin,Tenthucpham);
        cout<<"\nNhap gia ca : "; cin>>Giaca;
    }
    void Xuat(){
        cout<<"\nTen thuc pham : "<<Tenthucpham;
        cout<<"\nGia ca : "<<(size_t)Giaca;
    }
};

class TPHOP : public THUCPHAM
{
private:
    int Sohop;
public:
    void Nhap(){
        THUCPHAM::Nhap();
        cout<<"\nNhap so hop : "; cin>>Sohop;
    }
    void Xuat(){
        THUCPHAM::Xuat();
        cout<<"\nSo hop : "<<Sohop;
    }
};

class TPKHOP : public THUCPHAM
{
private:
    float Khoiluong;
public:
    void Nhap(){
        THUCPHAM::Nhap();
        cout<<"\nNhap khoi luong : "; cin>>Khoiluong;
    }
    void Xuat(){
        THUCPHAM::Xuat();
        cout<<"\nKhoi luong : "<<Khoiluong;
    }
};

int main()
{
    TPHOP a;
    TPKHOP b;
    cout<<"\n\t\t\t========== NHAP THONG TIN THUC PHAM HOP ==========\n";
    a.Nhap();
    cout<<"\n\t\t\t========== NHAP THONG TIN THUC PHAM KHONG HOP ==========\n";
    b.Nhap();
    cout<<"\n\t\t\t========== THUC PHAM HOP ==========\n";
    a.Xuat();
    cout<<"\n\t\t\t========== THUC PHAM KHONG HOP ==========\n";
    b.Xuat();
    return 0;
}
