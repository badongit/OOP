#include <iostream>

using namespace std;
class SINHVIEN
{
private:
    string msv;
    string hoten;
    int tuoi;
    float diem;
public:
    void Nhap();
    void Xuat();
};
void SINHVIEN::Nhap()
{
    cout<<"\nNhap ma sinh vien : ";
    getline(cin,msv);
    cout<<"\nNhap ho ten : ";
    getline(cin,hoten);
    cout<<"\nNhap tuoi : ";
    cin>>tuoi;
    cout<<"\nNhap diem : ";
    cin>>diem;
    cin.ignore();
}
void SINHVIEN::Xuat()
{
    cout<<"\nMa sv : "<<msv;
    cout<<"\nHo ten : "<<hoten;
    cout<<"\nTuoi : "<<tuoi;
    cout<<"\nDiem : "<<diem;
}
int main()
{
    SINHVIEN sv[100];
    for(int i=0;i<2;i++){
        cout<<"\n\t\t\t============ NHAP THONG TIN SINH VIEN THU "<<i+1<<"============";
        sv[i].Nhap();
    }
    for(int i=0;i<2;i++){
        cout<<"\n\t\t\t============ THONG TIN SINH VIEN THU "<<i+1<<"============";
        sv[i].Xuat();
    }
    return 0;
}
