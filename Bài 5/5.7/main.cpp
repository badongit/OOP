#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class SINHVIEN
{
protected:
    char Hoten[20];
    char Sbd[10];
};

class DIEMTHI : public SINHVIEN
{
protected:
    float Kq1,Kq2;
};

class KETQUA : public DIEMTHI
{
public:
    float Tong(){
        return Kq1+Kq2;
    }
    void Nhap(){
        cout<<"\nNhap ho ten : "; fflush(stdin); gets(Hoten);
        cout<<"\nNhap so bao danh : "; gets(Sbd);
        cout<<"\nNhap ket qua mon thi 1 : "; cin>>Kq1;
        cout<<"\nNhap ket qua mon thi 2 : "; cin>>Kq2;
    }
    void Xuat(){
        cout<<setw(20)<<Hoten<<setw(10)<<Sbd<<setw(5)<<Kq1<<setw(5)<<Kq2<<setw(5)<<Tong()<<endl;
    }
};

void title(){
    cout<<setw(20)<<left<<"Ho ten"<<setw(10)<<"SBD"<<setw(5)<<"KQ 1"<<setw(5)<<"KQ 2"<<setw(5)<<"TONG"<<endl;
}
void Nhap_ds_hs(KETQUA a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============== NHAP THONG TIN HOC SINH THU "<<i+1<<" ==============\n";
        a[i].Nhap();
    }
}
void Xuat_ds_hs(KETQUA a[],int n)
{
    cout<<"\n\t\t\t============== DANH SACH HOC SINH ==============\n";
    title();
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
int main()
{
    KETQUA a[100];
    int n;
    cout<<"\nNhap so hoc sinh : "; cin>>n;
    Nhap_ds_hs(a,n);
    Xuat_ds_hs(a,n);
    return 0;
}
