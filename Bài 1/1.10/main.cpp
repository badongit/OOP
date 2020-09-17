#include <iostream>
#include <iomanip>
using namespace std;
class HANG
{
private:
    string Mahang;
    string Tenhang;
    unsigned long int Dongia;
    int Soluong;
public:
    void Nhap();
    void Xuat();
};

void HANG::Nhap()
{
    cin.ignore();
    cout<<"\nNhap ma hang : ";
    getline(cin,Mahang);
    cout<<"\nNhap ten hang : ";
    getline(cin,Tenhang);
    cout<<"\nNhap don gia : ";
    cin>>Dongia;
    cout<<"\nNhap so luong : ";
    cin>>Soluong;
}
void HANG::Xuat()
{
    cout<<setw(10)<<left<<Mahang;
    cout<<setw(20)<<left<<Tenhang;
    cout<<setw(10)<<left<<Dongia;
    cout<<setw(10)<<left<<Soluong;
    cout<<setw(11)<<left<<Dongia*Soluong<<endl;
}
int main()
{
    HANG hang[100];
    int n;
    cout<<"\nNhap so luong mat hang : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\n\t\t\t============= NHAP THONG TIN MAT HANG THU "<<i+1<<" =============";
        hang[i].Nhap();
    }
    cout<<"\n"<<setw(10)<<left<<"Ma hang";
    cout<<setw(20)<<left<<"Ten hang";
    cout<<setw(10)<<left<<"Don gia";
    cout<<setw(10)<<left<<"So luong";
    cout<<setw(11)<<left<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        hang[i].Xuat();
    return 0;
}
