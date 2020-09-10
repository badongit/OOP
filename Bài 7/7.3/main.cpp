#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class KHOA
{
private:
    char Makhoa[10];
    char Tenkhoa[20];
    char Truongkhoa[15];
public:
    friend class TRUONGDH;
};

class BAN
{
private:
    char Maban[10];
    char Tenban[20];
    char Ngaytl[12];
public:
    friend class TRUONGDH;
};

class TRUONG
{
protected:
    char Matruong[15];
    char Tentruong[40];
    char Diachi[50];
public:
    void nhap(){
        cout<<"\nNhap ma truong : "; fflush(stdin); gets(Matruong);
        cout<<"\nNhap ten truong : "; gets(Tentruong);
        cout<<"\nNhap dia chi : "; gets(Diachi);
    }
    void xuat(){
        cout<<"\nMa truong : "<<Matruong;
        cout<<"\nTen truong : "<<Tentruong;
        cout<<"\nDia chi : "<<Diachi;
    }
};

class TRUONGDH : public TRUONG
{
private:
    KHOA x[100];
    int n;
    BAN y[100];
    int m;
public:
    void nhap(){
        TRUONG::nhap();
        cout<<"\nNhap so luong khoa : "; cin>>n;
        for(int i=0;i<n;i++){
            cout<<"\n\t\t\t============== NHAP THONG TIN KHOA THU "<<i+1<<" ==============";
            cout<<"\nNhap ma khoa : "; fflush(stdin); gets(x[i].Makhoa);
            cout<<"\nNhap ten khoa : "; gets(x[i].Tenkhoa);
            cout<<"\nNhap ten truong khoa : "; gets(x[i].Truongkhoa);
        }
        cout<<"\nNhap so luong ban : "; cin>>m;
        for(int i=0;i<m;i++){
            cout<<"\n\t\t\t============== NHAP THONG TIN BAN THU "<<i+1<<" ==============";
            cout<<"\nNhap ma ban : "; fflush(stdin); gets(y[i].Maban);
            cout<<"\nNhap ten ban : "; gets(y[i].Tenban);
            cout<<"\nNhap ngay thanh lap(dd/mm/yyyy) : "; gets(y[i].Ngaytl);

        }
    }
    void xuat(){
        cout<<"\n\t\t\t================= THONG TIN TRUONG DH =================\n";
        TRUONG::xuat();
        cout<<"\n\t\t\t============== DANH SACH KHOA ==============\n";
        cout<<setw(10)<<left<<"Ma khoa"<<setw(20)<<"Ten khoa"<<setw(15)<<"Truong khoa"<<endl;
        for(int i=0;i<n;i++){
            cout<<setw(10)<<x[i].Makhoa<<setw(20)<<x[i].Tenkhoa<<setw(15)<<x[i].Truongkhoa<<endl;
        }
        cout<<"\n\t\t\t============== DANH SACH BAN ==============\n";
        cout<<setw(10)<<left<<"Ma ban"<<setw(20)<<"Ten ban"<<setw(12)<<"Ngay TL"<<endl;
        for(int i=0;i<m;i++){
            cout<<setw(10)<<y[i].Maban<<setw(20)<<y[i].Tenban<<setw(12)<<y[i].Ngaytl<<endl;
        }
    }
};

int main()
{
    TRUONGDH a;
    cout<<"\n\t\t\t=============== NHAP THONG TIN TRUONG DAI HOC ===============\n";
    a.nhap();
    a.xuat();
    return 0;
}
