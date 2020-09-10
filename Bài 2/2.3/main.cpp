#include <iostream>
#include <iomanip>
using namespace std;
class DOANHNGHIEP
{
private:
    string Tendn;
    string Diachi;
    int Sonv;
    double Doanhthu;
public:
    void Nhap();
    void Xuat();

    DOANHNGHIEP();
    ~DOANHNGHIEP();
};
DOANHNGHIEP::DOANHNGHIEP()
{

}
DOANHNGHIEP::~DOANHNGHIEP()
{

}
void DOANHNGHIEP::Nhap()
{
    cin.ignore();
    cout<<"\nNhap ten doanh nghiep : ";
    getline(cin,Tendn);
    cout<<"\nNhap dia chi doanh nghiep : ";
    getline(cin,Diachi);
    cout<<"\nNhap so luong nhan vien : ";
    cin>>Sonv;
    cout<<"\nNhap doanh thu : ";
    cin>>Doanhthu;
}
void DOANHNGHIEP::Xuat()
{
    cout<<setw(35)<<left<<Tendn;
    cout<<setw(25)<<left<<Diachi;
    cout<<setw(15)<<left<<Sonv;
    cout<<setw(15)<<left<<(size_t)Doanhthu<<endl;
}
void Nhap_ds_dn(DOANHNGHIEP *a[],int n)
{
    for(int i=0;i<n;i++){
        DOANHNGHIEP *temp=new DOANHNGHIEP();
        cout<<"\n\t\t\t============ NHAP THONG TIN DOANH NGHIEP THU "<<i+1<<" ============";
        temp->Nhap();
        a[i]=temp;
    }
}
void Xuat_ds_dn(DOANHNGHIEP *a[],int n)
{
    cout<<setw(35)<<left<<"Ten doanh nghiep";
    cout<<setw(25)<<left<<"Dia chi";
    cout<<setw(15)<<left<<"So nhan vien";
    cout<<setw(15)<<left<<"Doanh thu"<<endl;
    for(int i=0;i<n;i++){
        a[i]->Xuat();
    }
}
int main()
{
    DOANHNGHIEP *ds_dn[100];
    int n;
    cout<<"\nNhap so luong doanh nghiep : ";
    cin>>n;
    Nhap_ds_dn(ds_dn,n);
    Xuat_ds_dn(ds_dn,n);
    for(int i=0;i<n;i++)
        delete ds_dn[i];
    return 0;
}
