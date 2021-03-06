#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class NCC
{
private:
    char maNCC[20];
    char tenNCC[30];
    char diaChi[50];
    friend class PHIEU;
};

class HANG
{
private:
    char Tenhang[20];
    double Dongia;
    int Soluong;
public:
    void nhap(){
        cout<<"\nNhap ten hang : "; fflush(stdin); gets(Tenhang);
        cout<<"\nNhap don gia : "; cin>>Dongia;
        cout<<"\nNhap so luong : "; cin>>Soluong;
    }
    double Thanhtien(){
        return Dongia*Soluong;
    }
    void xuat(){
        cout<<setw(20)<<Tenhang<<setw(12)<<Dongia<<setw(10)<<Soluong<<setw(12)<<Thanhtien()<<endl;
    }
    friend class PHIEU;
};

void title_hang(){
    cout<<setw(20)<<left<<"Ten hang"<<setw(12)<<"Don gia"<<setw(10)<<"So luong"<<setw(12)<<"Thanh tien"<<endl;
}
class PHIEU
{
private:
    char Maphieu[20];
    char Ngaylap[12];
    NCC ncc;
    HANG ds[100];
    int n;
public:
    void nhap();
    void xuat();
    double Tong(){
        double sum=0;
        for(int i=0;i<n;i++)
            sum+=ds[i].Thanhtien();
        return sum;
    }
};
void PHIEU::nhap()
{
    cout<<"\nNhap ma phieu : "; fflush(stdin); gets(Maphieu);
    cout<<"\nNhap ngay lap(dd/mm/yyyy) : "; gets(Ngaylap);
    cout<<"\nNhap ma NCC : "; fflush(stdin); gets(ncc.maNCC);
    cout<<"\nNhap ten NCC : "; gets(ncc.tenNCC);
    cout<<"\nNhap dia chi : "; gets(ncc.diaChi);
    cout<<"\nNhap so luong hang : "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=============== NHAP THONG TIN HANG THU "<<i+1<<" ===============\n";
        ds[i].nhap();
    }
}
void PHIEU::xuat()
{
    cout<<"\n\t\t\t\t\t\t PHIEU MUA HANG \n";
    cout<<"Ma phieu: "<<Maphieu<<"\t\t\tNgay lap: "<<Ngaylap<<endl;
    cout<<"Ma NCC: "<<ncc.maNCC<<"\t\t\tTen NCC: "<<ncc.tenNCC<<endl;
    cout<<"Dia chi: "<<ncc.diaChi<<endl;
    title_hang();
    for(int i=0;i<n;i++)
        ds[i].xuat();
    cout<<"\t\t\t\tCong thanh tien\t"<<Tong();
}

int main()
{
    PHIEU a;
    cout<<"\n\t\t\t================= NHAP THONG TIN PHIEU MUA HANG =================\n";
    a.nhap();
    a.xuat();
    return 0;
}
