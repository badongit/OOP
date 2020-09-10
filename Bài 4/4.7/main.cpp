#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdio.h>

using namespace std;
class DATE
{
private:
    int D,M,Y;
public:
    void Nhap(){
        cout<<"\nNhap ngay thanh lap : "; cin>>D;
        cout<<"\nNhap thang thanh lap : "; cin>>M;
        cout<<"\nNhap nam thanh lap : "; cin>>Y;
    }
    void Xuat(){
        cout<<setw(2)<<D<<"/"<<setw(2)<<M<<"/"<<setw(6)<<Y;
    }
    friend class DOANHNGHIEP;
};

class DIACHI
{
private:
    char dienThoai[12];
    char phuong[30];
    char quan[30];
    char thanhPho[30];
public:
    friend class DOANHNGHIEP;
};

class DOANHNGHIEP
{
private:
    int maDn;
    char tenDn[60];
    DATE ngayTl;
    DIACHI diaChi;
    char giamDoc[30];
    long doanhThu;
public:
    void Nhap(){
        cout<<"\nNhap ma doanh nghiep : "; cin>>maDn;
        cout<<"\nNhap ten doanh nghiep : "; fflush(stdin); gets(tenDn);
        ngayTl.Nhap();
        cout<<"\nNhap so dien thoai : "; fflush(stdin); gets(diaChi.dienThoai);
        cout<<"\nNhap ten phuong : "; gets(diaChi.phuong);
        cout<<"\nNhap ten quan : "; gets(diaChi.quan);
        cout<<"\nNhap ten thanh pho : "; gets(diaChi.thanhPho);
        cout<<"\nNhap ten giam doc : "; gets(giamDoc);
        cout<<"\nNhap doanh thu : "; cin>>doanhThu;
    }
    void Xuat(){
        cout<<setw(8)<<maDn<<setw(20)<<tenDn;
        ngayTl.Xuat();
        cout<<setw(12)<<diaChi.phuong<<setw(12)<<diaChi.quan<<setw(12)<<diaChi.thanhPho;
        cout<<setw(18)<<giamDoc<<setw(12)<<doanhThu<<endl;
    }
    char* set_diaChi(){
        return diaChi.thanhPho;
    }
    int set_namTl(){
        return ngayTl.Y;
    }
    friend void Thaydoi_tt(DOANHNGHIEP a[],int n);
    friend long Tong_doanhthu_2015(DOANHNGHIEP a[],int n);
};

void Nhap_ds_dn(DOANHNGHIEP a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=========== NHAP THONG TIN DOANH NGHIEP THU "<<i+1<<" ===========";
        a[i].Nhap();
    }
}
void Xuat_ds_dn(DOANHNGHIEP a[],int n)
{
    cout<<setw(8)<<left<<"Ma DN"<<setw(20)<<"Ten doanh nghiep";
    cout<<setw(12)<<"Ngay TL";
    cout<<setw(12)<<"Phuong"<<setw(12)<<"Quan"<<setw(12)<<"Thanh pho";
    cout<<setw(18)<<"Giam doc"<<setw(12)<<"Doanh thu"<<endl;
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
void Xuat_dn_hn(DOANHNGHIEP a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(strcmp(a[i].set_diaChi(),"Ha Noi")==0)
            dem++;
    if(dem==0) cout<<"\nKhong co doanh nghiep nao o Ha Noi trong danh sach.";
    else {
        cout<<setw(8)<<left<<"Ma DN"<<setw(20)<<"Ten doanh nghiep";
        cout<<setw(12)<<"Ngay TL";
        cout<<setw(12)<<"Phuong"<<setw(12)<<"Quan"<<setw(12)<<"Thanh pho";
        cout<<setw(18)<<"Giam doc"<<setw(12)<<"Doanh thu"<<endl;
        for(int i=0;i<n;i++)
            if(strcmp(a[i].set_diaChi(),"Ha Noi")==0)
                a[i].Xuat();
    }
}
long Tong_doanhthu_2015(DOANHNGHIEP a[],int n)
{
    long sum=0;
    for(int i=0;i<n;i++)
        if(a[i].set_namTl()==2015)
            sum+=a[i].doanhThu;
    return sum;
}
void Thaydoi_tt(DOANHNGHIEP a[],int n)
{
    int ma,dem=0;
    cout<<"\nNhap ma doanh nghiep muon sua : ";
    cin>>ma;
    for(int i=0;i<n;i++)
        if(ma==a[i].maDn){
            cout<<"\n\t\t\t=========== THAY DOI THONG TIN DOANH NGHIEP THU "<<i+1<<" ==========="<<endl;
            dem++;
            a[i].Nhap();
            break;
        }
    if(dem==0) cout<<"\nMa doanh nghiep vua nhap khong ton tai.";
}

int main()
{
    DOANHNGHIEP a[100];
    int n;
    cout<<"\nNhap so luong doanh nghiep : ";
    cin>>n;
    Nhap_ds_dn(a,n);
    cout<<"\n\t\t\t============ DANH SACH DOANH NGHIEP O HA NOI============"<<endl;
    Xuat_dn_hn(a,n);
    cout<<"\nThong doanh thu nhung doanh nghiep thanh lap nam 2015 la : "<<Tong_doanhthu_2015(a,n);
    Thaydoi_tt(a,n);
    cout<<"\n\t\t\t============ DANH SACH DOANH NGHIEP SAU KHI THAY DOI THONG TIN============"<<endl;
    Xuat_ds_dn(a,n);
    return 0;
}
