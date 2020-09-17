#include <iostream>
#include <iomanip>
using namespace std;
class SACH
{
private:
    string Masach;
    string Tensach;
    string Nxb;
    int Sotrang;
    unsigned long int Giatien;
public:
    void Nhap();
    void Xuat();
};

void SACH::Nhap()
{
    cin.ignore();
    cout<<"\nNhap ma sach : ";
    getline(cin,Masach);
    cout<<"\nNhap ten sach : ";
    getline(cin,Tensach);
    cout<<"\nNhap nha xuat ban : ";
    cin>>Nxb;
    cout<<"\nNhap so trang : ";
    cin>>Sotrang;
    cout<<"\nNhap gia tien : ";
    cin>>Giatien;
}
void SACH::Xuat()
{
    cout<<setw(10)<<left<<Masach;
    cout<<setw(30)<<left<<Tensach;
    cout<<setw(15)<<left<<Nxb;
    cout<<setw(15)<<left<<Sotrang;
    cout<<setw(15)<<left<<Giatien<<endl;
}
int main()
{
    SACH sach[100];
    int n;
    cout<<"\nNhap so luong cuon sach : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============= NHAP THONG TIN CUON SACH THU "<<i+1<<" =============";
        sach[i].Nhap();
    }
    cout<<"\n"<<setw(10)<<left<<"Ma sach";
    cout<<setw(30)<<left<<"Ten sach";
    cout<<setw(15)<<left<<"NXB";
    cout<<setw(15)<<left<<"So trang";
    cout<<setw(15)<<left<<"Gia tien"<<endl;
    for(int i=0;i<n;i++)
        sach[i].Xuat();
    return 0;
}
