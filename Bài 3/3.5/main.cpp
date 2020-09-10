#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>

using namespace std;

class DATE
{
private:
    int D,M,Y;
public:
    void Nhap();
    void Xuat();
    friend class NHANSU;
};
void DATE::Nhap()
{
    cout<<"\nNhap ngay sinh : "; cin>>D;
    cout<<"\nNhap thang sinh : "; cin>>M;
    cout<<"\nNhap nam sinh : "; cin>>Y;
}
void DATE::Xuat()
{
    cout<<setw(2)<<D<<"/"<<setw(2)<<M<<"/"<<setw(6)<<Y;
}
class NHANSU
{
private:
    char Hoten[20];
    DATE NS;
    char CMND[15];
public:
    void Nhap();
    void Xuat();
    friend void Sapxep(NHANSU a[],int n);
};
void NHANSU::Nhap()
{
    cout<<"\nNhap ho ten : "; gets(Hoten);
    NS.Nhap();
    fflush(stdin);
    cout<<"\nNhap so CMND : "; gets(CMND);
}
void NHANSU::Xuat()
{
    cout<<setw(20)<<Hoten;
    NS.Xuat();
    cout<<setw(15)<<CMND<<endl;
}
void Sapxep(NHANSU a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(a[i].Hoten,a[j].Hoten)>0){
                NHANSU temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}

int main()
{
    NHANSU a[100];
    int n;
    cout<<"Nhap so luong nhan su : "; cin>>n;
    fflush(stdin);
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=========== NHAP THONG TIN NHAN SU THU "<<i+1<<" ===========";
        a[i].Nhap();
    }
    Sapxep(a,n);
    cout<<"\n\t\t\t=========== DANH SACH NHAN SU ===========\n";
    cout<<setw(20)<<left<<"Ho ten"<<setw(12)<<"Ngay sinh"<<setw(15)<<"So CMND"<<endl;
    for(int i=0;i<n;i++){
        a[i].Xuat();
    }
    return 0;
}
