#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>

using namespace std;

class Date
{
private:
    int d,m,y;
public:
    friend class NhanVien;
};

class PhongBan
{
private:
    int maPb;
    char tenPb[50];
    char truongPhong[10];
    int soNv;
public:
    friend class NhanVien;
};

class NhanVien
{
private:
    int maNv;
    char hoDem[25];
    char ten[10];
    Date ngaySinh;
    PhongBan phong;
public:
    void Nhap(){
        cout<<"\nNhap ma nhan vien : "; cin>>maNv;
        cout<<"\nNhap ho dem : "; fflush(stdin); gets(hoDem);
        cout<<"\nNhap ten : "; fflush(stdin); gets(ten);
        cout<<"\nNhap ngay sinh : "; cin>>ngaySinh.d;
        cout<<"\nNhap thang sinh : "; cin>>ngaySinh.m;
        cout<<"\nNhap nam sinh : "; cin>>ngaySinh.y;
        cout<<"\nNhap ma phong ban : "; cin>>phong.maPb;
        cout<<"\nNhap ten phong ban : "; fflush(stdin); gets(phong.tenPb);
        cout<<"\nNhap ten truong phong : "; gets(phong.truongPhong);
        cout<<"\nNhap so nhan vien : "; cin>>phong.soNv;
    }
    void Xuat(){
        cout<<setw(8)<<maNv<<setw(15)<<hoDem<<setw(12)<<ten;
        cout<<setw(2)<<ngaySinh.d<<"/"<<setw(2)<<ngaySinh.m<<"/"<<setw(6)<<ngaySinh.y;
        cout<<setw(8)<<phong.maPb<<setw(15)<<phong.tenPb<<setw(12)<<phong.truongPhong<<setw(8)<<phong.soNv<<endl;
    }
    char* get_tenPb(){
        return phong.tenPb;
    }
    friend void Sapxep(NhanVien a[],int n);
    friend void Xoa_nv(NhanVien a[],int &n);
};
void Nhap_ds_nv(NhanVien a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============= NHAP THONG TIN NHAN VIEN THU "<<i+1<<" =============\n";
        a[i].Nhap();
    }
}
void Xuat_ds_nv(NhanVien a[],int n)
{
    cout<<setw(8)<<left<<"Ma NV"<<setw(15)<<"Ho dem"<<setw(12)<<"Ten";
    cout<<setw(12)<<"Ngay sinh";
    cout<<setw(8)<<"Ma PB"<<setw(15)<<"Ten phong ban"<<setw(12)<<"Truong phong"<<setw(8)<<"So NV"<<endl;
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
void Xuat_nv_tc(NhanVien a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(stricmp(a[i].get_tenPb(),"tai chinh")==0)
            dem++;
    if(dem==0) cout<<"\nKhong co nhan vien phong tai chinh trong danh sach.";
    else {
        cout<<setw(8)<<left<<"Ma NV"<<setw(15)<<"Ho dem"<<setw(12)<<"Ten";
        cout<<setw(12)<<"Ngay sinh";
        cout<<setw(8)<<"Ma PB"<<setw(15)<<"Ten phong ban"<<setw(12)<<"Truong phong"<<setw(8)<<"So NV"<<endl;
        for(int i=0;i<n;i++)
            if(strcmp(a[i].get_tenPb(),"tai chinh")==0)
                a[i].Xuat();
    }
}
void Sapxep(NhanVien a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(a[i].ten,a[j].ten)>0){
                NhanVien temp=a[i];
                a[i]=a[j];
                a[j]= temp;
            }
}
void Them_nv(NhanVien a[],int &n)
{
    NhanVien t;
    cout<<"\n\t\t\t============= NHAP THONG TIN NHAN VIEN MUON THEM VAO =============\n";
    t.Nhap();
    int k;
    cout<<"\nNhap vi tri can chen : "; cin>>k;
    n++;
    for(int i=n;i>k-1;i--)
        a[i]=a[i-1];
    a[k-1]=t;
}
void Xoa_nv(NhanVien a[],int &n)
{
    for(int i=0;i<n;i++)
        if(a[i].maNv==123){
            for(int j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
        }
}

int main()
{
    NhanVien a[100];
    int n;
    cout<<"\nNhap so luong nhan vien : ";
    cin>>n;
    Nhap_ds_nv(a,n);
    cout<<"\n\t\t\t============== DANH SACH NHAN VIEN ==============\n";
    Xuat_ds_nv(a,n);
    cout<<"\n\t\t\t============== DANH SACH NHAN VIEN PHONG TAI CHINH ==============\n";
    Xuat_nv_tc(a,n);
    Sapxep(a,n);
    cout<<"\n\t\t\t============== DANH SACH NHAN VIEN SAU KHI SAP XEP ==============\n";
    Xuat_ds_nv(a,n);
    Them_nv(a,n);
    cout<<"\n\t\t\t============== DANH SACH NHAN VIEN SAU KHI THEM ==============\n";
    Xuat_ds_nv(a,n);
    Xoa_nv(a,n);
    cout<<"\n\t\t\t============== DANH SACH NHAN VIEN SAU KHI XOA ==============\n";
    Xuat_ds_nv(a,n);
    return 0;
}
