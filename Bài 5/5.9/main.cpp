#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class SANPHAM
{
protected:
    char tensp[15];
    int namsx;
    double giathanh;
public:
    void Nhap(){
    cout<<"\nNhap ten san pham : "; fflush(stdin); gets(tensp);
    cout<<"\nNhap nam san xuat : "; cin>>namsx;
    cout<<"\nNhap gia thanh : "; cin>>giathanh;
    }
    void Xuat(){
        cout<<setw(15)<<tensp<<setw(8)<<namsx<<setw(12)<<(size_t)giathanh;
    }
};

class HOADON : public SANPHAM
{
private:
    int soluongban;
    double giaban;
public:
    void Nhap()
    {
        SANPHAM::Nhap();
        cout<<"\nNhap so luong ban : "; cin>>soluongban;
        cout<<"\nNhap gia ban : "; cin>>giaban;
    }
    double thanhtien(){
        return soluongban*giaban;
    }
    double lai(){
        return (giaban-giathanh)*soluongban;
    }
    double thue(){
        return (soluongban*giaban)/10;
    }
     void Xuat()
    {
        SANPHAM::Xuat();
        cout<<setw(10)<<soluongban<<setw(12)<<(size_t)giaban;
        cout<<setw(12)<<(size_t)thanhtien()<<setw(12)<<(size_t)thue()<<setw(12)<<(size_t)lai()<<endl;
    }
};

void Nhap_ds_hoadon(HOADON a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=============== NHAP THONG TIN SAN PHAM "<<i+1<<" ===============\n";
        a[i].Nhap();
    }
}
void title(){
    cout<<setw(15)<<left<<"Ten SP"<<setw(8)<<"Nam SX"<<setw(12)<<"Gia thanh";
    cout<<setw(10)<<"So luong"<<setw(12)<<"Gia ban";
    cout<<setw(12)<<"Thanh tien"<<setw(12)<<"Thue"<<setw(12)<<"Lai"<<endl;
}
void Xuat_ds_hoadon(HOADON a[],int n)
{
    title();
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
void Sap_xep(HOADON a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i].lai()<a[j].lai()){
                HOADON temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}
double Tong(HOADON a[],int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i].thanhtien();
    return sum;
}
void hoa_don_co_thue_cao_nhat(HOADON a[],int n)
{
    double m=a[0].thue();
    for(int i=1;i<n;i++){
        if(m<a[i].thue())
            m=a[i].thue();
    }
    title();
    for(int i=0;i<n;i++){
        if(a[i].thue()==m)
            a[i].Xuat();
    }
}
int main()
{
    HOADON a[100];
    int n;
    cout<<"\nNhap so luong hang hoa : "; cin>>n;
    Nhap_ds_hoadon(a,n);
    Sap_xep(a,n);
    cout<<"\n\t\t\t========== DANH SACH HOA DON ==========\n";
    Xuat_ds_hoadon(a,n);
    cout<<"\nTong cac hoa don la : "<<(size_t)Tong(a,n);
    cout<<"\n\t\t\t========== HOA DON CO TIEN THUE CAO NHAT ==========\n";
    hoa_don_co_thue_cao_nhat(a,n);
    return 0;
}
