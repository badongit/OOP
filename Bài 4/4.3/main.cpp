#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;
class DATE
{
private:
    int D,M,Y;
public:
    friend class HANG;
};
class HANG
{
private:
    char Mahang[10];
    char Tenhang[20];
    DATE Ngaysx;
public:
    void Nhap();
    void Xuat();
};
void HANG::Nhap()
{
    cout<<"\nNhap ma hang : "; gets(Mahang);
    cout<<"\nNhap ten hang : "; gets(Tenhang);
    cout<<"\nNhap ngay san xuat : "; cin>>Ngaysx.D;
    cout<<"\nNhap thang san xuat : "; cin>>Ngaysx.M;
    cout<<"\nNhap nam san xuat : "; cin>>Ngaysx.Y;
    fflush(stdin);
}
void HANG::Xuat()
{
    if(Ngaysx.Y==2017)
        cout<<setw(10)<<Mahang<<setw(20)<<Tenhang<<setw(2)<<Ngaysx.D<<"/"<<setw(2)<<Ngaysx.M<<"/"<<setw(6)<<Ngaysx.Y<<endl;
}

int main()
{
    HANG ds_hh[100];
    int n;
    cout<<"\nNhap so luong hang hoa : ";
    cin>>n;
    fflush(stdin);
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=========== NHAP THONG TIN HANG THU "<<i+1<<" ===========";
        ds_hh[i].Nhap();
    }
    cout<<"\n\t\t\t============== DANH SACH HANG SAN XUAT NAM 2017 ==============";
    cout<<endl<<setw(10)<<left<<"Ma hang"<<setw(20)<<"Ten hang"<<setw(12)<<"Ngay sx"<<endl;
    for(int i=0;i<n;i++){
        ds_hh[i].Xuat();
    }
    return 0;
}
