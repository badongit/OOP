#include <iostream>
#include <stdio.h>

using namespace std;
class PRINTER
{
protected:
    float TrongLuong;
    char Hangsx[15];
    int Namsx;
    int Tocdo;
};

class DOTPRINTER : public PRINTER
{
private:
    int Matdokim;
public:
    void Nhap(){
        cout<<"\nNhap trong luong(kg) : "; cin>>TrongLuong;
        cout<<"\nNhap hang san xuat : "; fflush(stdin); gets(Hangsx);
        cout<<"\nNhap nam san xuat : "; cin>>Namsx;
        cout<<"\nNhap toc do(so trang/phut) : "; cin>>Tocdo;
        cout<<"\nNhap mat do kim : "; cin>>Matdokim;
    }
    void Xuat(){
        cout<<"\n\t\t\t=============== THONG TIN MAY IN KIM ===============\n";
        cout<<"\nTrong luong : "<<TrongLuong<< " (kg)";
        cout<<"\nHang san xuat : "<<Hangsx;
        cout<<"\nNam san xuat : "<<Namsx;
        cout<<"\nToc do(so trang/phut) : "<<Tocdo;
        cout<<"\nMat do kim : "<<Matdokim;
    }
};

class LASERPRINTER : public PRINTER
{
private:
    int Dophangiai;
public:
    void Nhap(){
        cout<<"\nNhap trong luong(kg) : "; cin>>TrongLuong;
        cout<<"\nNhap hang san xuat : "; fflush(stdin); gets(Hangsx);
        cout<<"\nNhap nam san xuat : "; cin>>Namsx;
        cout<<"\nNhap toc do(so trang/phut) : "; cin>>Tocdo;
        cout<<"\nNhap do phan giai : "; cin>>Dophangiai;
    }
    void Xuat(){
        cout<<"\n\t\t\t=============== THONG TIN MAY IN KIM ===============\n";
        cout<<"\nTrong luong : "<<TrongLuong<< " (kg)";
        cout<<"\nHang san xuat : "<<Hangsx;
        cout<<"\nNam san xuat : "<<Namsx;
        cout<<"\nToc do(so trang/phut) : "<<Tocdo;
        cout<<"\nDo phan giai : "<<Dophangiai;
    }
};

int main()
{
    DOTPRINTER a;
    LASERPRINTER b;
    cout<<"\n\t\t\t============== NHAP THONG TIN MAY IN KIM ==============\n";
    a.Nhap();
    cout<<"\n\t\t\t============== NHAP THONG TIN MAY IN LASER ==============\n";
    b.Nhap();
    a.Xuat();
    b.Xuat();
    return 0;
}
