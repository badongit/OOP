#include <iostream>

using namespace std;
class HocSinh
{
private:
    string hoten;
    int ngay;
    int thang;
    int nam;
    string gioitinh;
    float diemtb;
    string hk;
public:
    void Nhap();
    void Xuat();

    HocSinh();
    ~HocSinh();
};
HocSinh::HocSinh()
{

}
HocSinh::~HocSinh()
{

}
void HocSinh::Nhap()
{
    cout<<"\n\t\t\t========== NHAP THONG TIN HOC SINH ==========\n";
    cout<<"\nNhap ho ten hoc sinh : ";
    getline(cin,hoten);
    cout<<"\nNhap ngay sinh : ";
    cin>>ngay;
    cout<<"\nNhap thang sinh : ";
    cin>>thang;
    cout<<"\nNhap nam sinh : ";
    cin>>nam;
    cin.ignore();
    cout<<"\nNhap gioi tinh : ";
    getline(cin,gioitinh);
    cout<<"\nNhap diem trung binh : ";
    cin>>diemtb;
    cin.ignore();
    cout<<"\nNhap xep loai dao duc : ";
    getline(cin,hk);
}
void HocSinh::Xuat()
{
    cout<<"\n\t\t\t========== THONG TIN HOC SINH ==========\n";
    cout<<"\nHo ten : "<<hoten;
    cout<<"\nNgay thang nam sinh : "<<ngay<<"/"<<thang<<"/"<<nam;
    cout<<"\nGioi tinh : "<<gioitinh;
    cout<<"\nDiem trung binh : "<<diemtb;
    cout<<"\nXep loai dao duc : "<<hk;
}
int main()
{
    HocSinh hs;
    hs.Nhap();
    hs.Xuat();
    return 0;
}
