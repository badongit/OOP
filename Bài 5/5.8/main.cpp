#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

class BENHNHAN
{
protected:
    char hoten[20];
    char quequan[30];
    int namsinh;
public:
    void Nhap(){
        cout<<"\nNhap ho ten : "; fflush(stdin); gets(hoten);
        cout<<"\nNhap que quan : "; gets(quequan);
        cout<<"\nNhap nam sinh : "; cin>>namsinh;
    }
    void Xuat(){
        cout<<setw(20)<<hoten<<setw(20)<<quequan<<setw(9)<<namsinh;
    }
};

class BENHAN : public BENHNHAN
{
private:
    char tenbenhan[20];
    double tienvienphi;
public:
    int Tuoi(){
        return 2020-namsinh;
    }
    void Nhap(){
        BENHNHAN::Nhap();
        cout<<"\nNhap ten benh an : "; fflush(stdin); gets(tenbenhan);
        cout<<"\nNhap tien vien phi : "; cin>>tienvienphi;
    }
    void Xuat(){
        BENHNHAN::Xuat();
        cout<<setw(5)<<Tuoi()<<setw(20)<<tenbenhan<<setw(10)<<(size_t)tienvienphi<<endl;
    }
    friend void bn_co_vp_cao_nhat(BENHAN a[],int n);
};

void Nhap_ds_benhan(BENHAN a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t================ NHAP THONG TIN BENH AN THU "<<i+1<<" ================\n";
        a[i].Nhap();
    }
}
void title()
{
    cout<<setw(20)<<left<<"Ho ten"<<setw(20)<<"Que quan"<<setw(9)<<"Nam sinh";
    cout<<setw(5)<<"Tuoi"<<setw(20)<<"Ten benh an"<<setw(10)<<"Tien vien phi"<<endl;
}
void Xuat_ds_benhan(BENHAN a[],int n)
{
    title();
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
void Sap_xep(BENHAN a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i].Tuoi()<a[j].Tuoi()){
                BENHAN temp=a[i];
                a[i]=a[j];
                a[j]= temp;
            }
}
void ds_bn_10tuoi(BENHAN a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(a[i].Tuoi()<=10)
            dem++;
    if(dem==0) cout<<"\nKhong co benh nhan nao <= 10 tuoi.";
    else {
        title();
        for(int i=0;i<n;i++)
            if(a[i].Tuoi()<=10)
                a[i].Xuat();
    }
}
void bn_co_vp_cao_nhat(BENHAN a[],int n)
{
    double m=a[0].tienvienphi;
    for(int i=1;i<n;i++){
        if(m<a[i].tienvienphi)
            m=a[i].tienvienphi;
    }
    title();
    for(int i=0;i<n;i++){
        if(a[i].tienvienphi==m)
            a[i].Xuat();
    }
}
int main()
{
    BENHAN a[100];
    int n;
    cout<<"\nNhap so luong benh an : "; cin>>n;
    Nhap_ds_benhan(a,n);
    cout<<"\n\t\t\t================== DANH SACH BENH AN ==================\n";
    Xuat_ds_benhan(a,n);
    Sap_xep(a,n);
    cout<<"\n\t\t\t================== DANH SACH BENH AN SAU SAP XEP ==================\n";
    Xuat_ds_benhan(a,n);
    cout<<"\n\t\t\t================== DANH SACH BENH AN CUA BENH NHAN <=10 TUOI ==================\n";
    ds_bn_10tuoi(a,n);
    cout<<"\n\t\t\t================== DANH SACH BENH AN BENH NHAN CO VIEN PHI CAO NHAT ==================\n";
    bn_co_vp_cao_nhat(a,n);
    return 0;
}
