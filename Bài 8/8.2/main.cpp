#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class MON
{
private:
    char tenMon[30];
    int soTrinh;
    float diem;
public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void MON::nhap()
{
    cout<<"\nNhap ten mon : "; fflush(stdin); gets(tenMon);
    cout<<"\nNhap so trinh : "; cin>>soTrinh;
    cout<<"\nNhap diem : "; cin>>diem;
}
void MON::xuat()
{
    cout<<setw(30)<<tenMon<<setw(12)<<soTrinh<<setw(10)<<diem<<endl;
}
void title_mon(){
    cout<<setw(30)<<left<<"Ten mon"<<setw(12)<<"So trinh"<<setw(10)<<"Diem"<<endl;
}

class PHIEU
{
private:
    char maSV[20];
    char ten[25];
    char lop[10];
    int khoa;
    MON ds[100];
    int n;
public:
    void nhap();
    void xuat();
    float diemTb(){
        int sum_trinh=0;
        float sum_diem=0;
        for(int i=0;i<n;i++){
            sum_trinh+=ds[i].soTrinh;
            sum_diem+=ds[i].diem*ds[i].soTrinh;
        }
        return sum_diem/sum_trinh;
    }
};
void PHIEU::nhap()
{
    cout<<"\nNhap ma sinh vien : "; fflush(stdin); gets(maSV);
    cout<<"\nNhap ten sinh vien : "; gets(ten);
    cout<<"\nNhap lop : "; gets(lop);
    cout<<"\nNhap khoa : "; cin>>khoa;
    cout<<"\nNhap so luong mon: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t=============== NHAP THONG TIN MON HOC THU "<<i+1<<" ===============\n";
        ds[i].nhap();
    }
}
void PHIEU::xuat()
{
    cout<<"\n\t\t\t\t\t\t PHIEU BAO DIEM \n";
    cout<<setw(15)<<left<<"Ma sinh vien: "<<setw(20)<<maSV<<"Ten sinh vien: "<<ten<<endl;
    cout<<setw(15)<<left<<"Lop: "<<setw(20)<<lop<<"Khoa: "<<khoa<<endl;
    cout<<"Bang diem: "<<endl;
    title_mon();
    for(int i=0;i<n;i++)
        ds[i].xuat();
    cout<<"\t\t\t\tDiem trung binh\t"<<diemTb();
}
int main()
{
    PHIEU a;
    cout<<"\n\t\t\t================= NHAP THONG TIN PHIEU MUA HANG =================\n";
    a.nhap();
    a.xuat();
    return 0;
}
