#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>

using namespace std;
class XEHOI
{
private:
    char Nhanhieu[10];
    char Hangsx[10];
    char Kieudang[15];
    char Mauson[10];
    int Namsx;
    char Xuatxu[15];
    double Giaban;
public:
    void Nhap();
    void Xuat();
    friend void Xuat_toyota(XEHOI a[],int n);
    friend void Sapxep(XEHOI a[],int n);
};
void XEHOI::Nhap()
{
    cout<<"\nNhap nhan hieu : "; fflush(stdin); gets(Nhanhieu);
    cout<<"\nNhap hang san xuat : "; gets(Hangsx);
    cout<<"\nNhap kieu dang : "; gets(Kieudang);
    cout<<"\nNhap mau son: "; gets(Mauson);
    cout<<"\nNhap nam san xuat : "; cin>>Namsx;
    cout<<"\nNhap xuat xu : "; fflush(stdin); gets(Xuatxu);
    cout<<"\nNhap gia ban : "; cin>>Giaban;
}
void XEHOI::Xuat()
{
    cout<<setw(10)<<Nhanhieu<<setw(10)<<Hangsx<<setw(15)<<Kieudang;
    cout<<setw(10)<<Mauson<<setw(8)<<Namsx<<setw(15)<<Xuatxu<<setw(15)<<(size_t)Giaban<<endl;
}

void Nhap_ds_xe(XEHOI a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============== NHAP THONG TIN XE THU "<<i+1<<" ==============";
        a[i].Nhap();
    }
}
void Xuat_ds_xe(XEHOI a[],int n)
{
    cout<<setw(10)<<left<<"Nhan hieu"<<setw(10)<<"Hang xe"<<setw(15)<<"Kieu dang";
    cout<<setw(10)<<"Mau son"<<setw(8)<<"Nam sx"<<setw(15)<<"Xuat xu"<<setw(15)<<"Gia ban"<<endl;
    for(int i=0;i<n;i++)
        a[i].Xuat();
}
void Xuat_toyota(XEHOI a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(strcmp("Toyota",a[i].Hangsx)==0){
            dem++;
            break;
        }
    if(dem==0) cout<<"\nKhong co xe hang Toyota.";
    else{
        cout<<setw(10)<<left<<"Nhan hieu"<<setw(10)<<"Hang xe"<<setw(15)<<"Kieu dang";
        cout<<setw(10)<<"Mau son"<<setw(8)<<"Nam sx"<<setw(15)<<"Xuat xu"<<setw(15)<<"Gia ban"<<endl;
        for(int i=0;i<n;i++)
            if(strcmp("Toyota",a[i].Hangsx)==0)
                a[i].Xuat();
    }
}
void Sapxep(XEHOI a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++)
            if(a[i].Giaban>a[j].Giaban){
                XEHOI temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}

int main()
{
    XEHOI a[100];
    int n;
    cout<<"\nNhap so luong xe : ";
    cin>>n;
    Nhap_ds_xe(a,n);
    cout<<"\n\t\t\t=========== DANH SACH XE HOI ===========\n";
    Xuat_ds_xe(a,n);
    cout<<"\n\t\t\t=========== DANH SACH XE TOYOTA ===========\n";
    Xuat_toyota(a,n);
    Sapxep(a,n);
    cout<<"\n\t\t\t=========== DANH SACH XE HOI SAU KHI SAP XEP ===========\n";
    Xuat_ds_xe(a,n);
    return 0;
}
