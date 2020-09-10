#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class SANPHAM
{
protected:
    string Masanpham;
    string Tensanpham;
    string Ngaysx;
    float Trongluong;
    string Mausac;
public:
    void Nhap(){
        cout<<"\nNhap ma san pham : "; fflush(stdin); getline(cin,Masanpham);
        cout<<"\nNhap ten san pham : "; getline(cin,Tensanpham);
        cout<<"\nNhap ngay san xuat(dd/mm/yyyy) : "; getline(cin,Ngaysx);
        cout<<"\nNhap trong luong : "; cin>>Trongluong;
        cout<<"\nNhap mau sac : "; fflush(stdin); getline(cin,Mausac);
    }
    void Xuat(){
        cout<<setw(10)<<Masanpham<<setw(15)<<Tensanpham<<setw(12)<<Ngaysx;
        cout<<setw(12)<<Trongluong<<setw(10)<<Mausac;
    }
};

class HANGDIENTU : public SANPHAM
{
private:
    int Congsuat;
    string Dongdien;
public:
    void Nhap(){
        SANPHAM::Nhap();
        cout<<"\nNhap cong suat : "; cin>>Congsuat;
        cout<<"\nNhap loai dong dien su dung : "; fflush(stdin); getline(cin,Dongdien);
    }
    void Xuat(){
        SANPHAM::Xuat();
        cout<<setw(10)<<Congsuat<<setw(8)<<Dongdien<<endl;
    }
    friend void Xuat_min(HANGDIENTU a[],int n);
};

void Xuat_min(HANGDIENTU a[],int n)
{
    float m=a[0].Trongluong;
    for(int i=1;i<n;i++){
        if(m>a[i].Trongluong)
            m=a[i].Trongluong;
    }
    cout<<"\n\t\t\t============= DANH SACH SAN PHAM CO TRONG LUONG THAP NHAT =============\n";
    cout<<setw(10)<<left<<"MSP"<<setw(15)<<"Ten san pham"<<setw(12)<<"Ngay sx";
    cout<<setw(12)<<"Trong luong"<<setw(10)<<"Mau sac";
    cout<<setw(10)<<"Cong suat"<<setw(8)<<"Dong dien"<<endl;
    for(int i=0;i<n;i++){
        if(m==a[i].Trongluong)
            a[i].Xuat();
    }
}
int main()
{
    HANGDIENTU a[100];
    int n;
    cout<<"\nNhap so luong san pham : "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============= NHAP THONG TIN SAN PHAM THU "<<i+1<<" =============\n";
        a[i].Nhap();
    }
    cout<<"\n\t\t\t============= DANH SACH SAN PHAM =============\n";
    cout<<setw(10)<<left<<"MSP"<<setw(15)<<"Ten san pham"<<setw(12)<<"Ngay sx";
    cout<<setw(12)<<"Trong luong"<<setw(10)<<"Mau sac";
    cout<<setw(10)<<"Cong suat"<<setw(8)<<"Dong dien"<<endl;
    for(int i=0;i<n;i++){
        a[i].Xuat();
    }
    Xuat_min(a,n);
    return 0;
}
