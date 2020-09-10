#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class PERSON
{
protected:
    char Hoten[20];
    char Ngaysinh[12];
    char Quequan[20];
};

class KYSU : public PERSON
{
private:
    char Nganh[30];
    int NamTN;
public:
    void Nhap(){
        cout<<"\nNhap ho ten ky su : "; fflush(stdin); gets(Hoten);
        cout<<"\nNhap ngay sinh(dd/mm/yyyy) : "; gets(Ngaysinh);
        cout<<"\nNhap que quan : "; gets(Quequan);
        cout<<"\nNhap ten nganh : "; gets(Nganh);
        cout<<"\nNhap nam tot nghiep : "; cin>>NamTN;
    }
    void Xuat(){
        cout<<setw(20)<<Hoten<<setw(12)<<Ngaysinh<<setw(20)<<Quequan<<setw(20)<<Nganh<<setw(8)<<NamTN<<endl;
    }
    int get_NamTN(){
        return NamTN;
    }
};
void Nhap_ds_ks(KYSU a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============== NHAP THONG TIN KY SU THU "<<i+1<<" ==============\n";
        a[i].Nhap();
    }
}
void Xuat_ds_ks(KYSU a[],int n)
{
    cout<<setw(20)<<left<<"Ho ten"<<setw(12)<<"Ngay sinh"<<setw(20)<<"Que quan"<<setw(20)<<"Nganh"<<setw(8)<<"Nam TN"<<endl;
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
void Xuat_ks_tn(KYSU a[],int n)
{
    int m=a[0].get_NamTN();
    for(int i=1;i<n;i++)
        if(m<a[i].get_NamTN())
            m=a[i].get_NamTN();
    cout<<setw(20)<<left<<"Ho ten"<<setw(12)<<"Ngay sinh"<<setw(20)<<"Que quan"<<setw(20)<<"Nganh"<<setw(8)<<"Nam TN"<<endl;
    for(int i=0;i<n;i++)
        if(a[i].get_NamTN()==m)
            a[i].Xuat();
}
int main()
{
    KYSU a[100];
    int n;
    cout<<"\nNhap so luong ky su : "; cin>>n;
    Nhap_ds_ks(a,n);
    cout<<"\n\t\t\t============== DANH SACH KY SU ==============\n";
    Xuat_ds_ks(a,n);
    cout<<"\n\t\t\t============== DANH SACH KY SU TOT NGHIEP ==============\n";
    Xuat_ks_tn(a,n);
    return 0;
}
