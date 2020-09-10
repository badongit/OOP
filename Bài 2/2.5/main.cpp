#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class DATE
{
protected:
    int ngay;
    int thang;
    int nam;
public:
    void Nhap();
    void Xuat();

    DATE();
    ~DATE();
};
DATE::DATE()
{
}
DATE::~DATE()
{
}
void DATE::Nhap()
{
    cout<<"\nNhap ngay : ";
    cin>>ngay;
    cout<<"\nNhap thang : ";
    cin>>thang;
    cout<<"\nNhap nam : ";
    cin>>nam;
}
void DATE::Xuat()
{
    cout<<ngay<<"/"<<thang<<"/"<<nam;
}

class HANGHOA
{
private:
    string Mahang;
    string Tenhang;
    int Soluong;
    double Giaban;
public:
    void Nhap();
    void Xuat();
    double Thanhtien();

    HANGHOA();
    ~HANGHOA();
};
HANGHOA::HANGHOA()
{
}
HANGHOA::~HANGHOA()
{
}
void HANGHOA::Nhap()
{
    cin.ignore();
    cout<<"\nNhap ma hang : ";
    getline(cin,Mahang);
    cout<<"\nNhap ten hang : ";
    getline(cin,Tenhang);
    cout<<"\nNhap so luong : ";
    cin>>Soluong;
    cout<<"\nNhap gia ban : ";
    cin>>Giaban;
}
void HANGHOA::Xuat()
{
    cout<<setw(10)<<left<<Mahang;
    cout<<setw(20)<<left<<Tenhang;
    cout<<setw(10)<<left<<Soluong;
    cout<<setw(10)<<left<<(size_t)Giaban<<endl;
}
double HANGHOA::Thanhtien()
{
    return Soluong*Giaban;
}

class HoaDon : public DATE
{
private:
    string Mahd;
    string Dvnhan;
    double Sotien;
    string Nguoithanhtoan;
    string Nguoinhan;
    vector<HANGHOA> ds_hh;
public:
    void Nhap();
    void Xuat();
    double Tong_hoa_don();

    HoaDon();
    ~HoaDon();
};
HoaDon::HoaDon()
{
}
HoaDon::~HoaDon()
{
}
void HoaDon::Nhap()
{
    cout<<"\nNhap ma hoa don : ";
    getline(cin,Mahd);
    cout<<"\nNhap don vi nhan hang : ";
    getline(cin,Dvnhan);
    cout<<"\nNhap so tien : ";
    cin>>Sotien;
    cin.ignore();
    cout<<"\nNhap nguoi thanh toan : ";
    getline(cin,Nguoithanhtoan);
    cout<<"\nNhap nguoi nhan : ";
    getline(cin,Nguoinhan);
    DATE::Nhap();
    int n;
    cout<<"\nNhap so luong hang hoa : ";
    cin>>n;
    for(int i=0;i<n;i++){
        HANGHOA x;
        cout<<"\n\t\t\t========== NHAP THONG TIN MAT HANG "<<i+1<<" ==========";
        x.Nhap();
        ds_hh.push_back(x);
    }
}
void HoaDon::Xuat()
{
    cout<<"\n\n\t\t\t=========== THONG TIN HOA DON ===========";
    cout<<"\nMa hoa don : "<<Mahd;
    cout<<"\nDon vi nhan hang : "<<Dvnhan;
    cout<<"\nSo tien : "<<Sotien;
    cout<<"\nNguoi thanh toan : "<<Nguoithanhtoan;
    cout<<"\nNguoi nhan : "<<Nguoinhan;
    cout<<"\nNgay nhan : ";
    DATE::Xuat();
    cout<<endl<<setw(10)<<left<<"Ma hang";
    cout<<setw(20)<<left<<"Ten hang";
    cout<<setw(10)<<left<<"So luong";
    cout<<setw(10)<<left<<"Gia ban"<<endl;
    for(int i=0;i<ds_hh.size();i++){
        ds_hh[i].Xuat();
    }
}
double HoaDon::Tong_hoa_don()
{
    double s=0;
    for(int i=0;i<ds_hh.size();i++){
        s+=ds_hh[i].Thanhtien();
    }
    return s;
}
int main()
{
    HoaDon *hd = new HoaDon();
    hd->Nhap();
    hd->Xuat();
    cout<<"\nTong tien cua hoa don nay la : "<<(size_t)hd->Tong_hoa_don();
    delete hd;
    return 0;
}
