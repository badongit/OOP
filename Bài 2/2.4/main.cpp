#include <iostream>
#include <iomanip>
using namespace std;
class OTO
{
private:
    string Maoto;
    double Gia;
    int Sonam;
    float Tyle;
public:
    void Nhap();
    void Xuat();

    OTO();
    ~OTO();
};
OTO::OTO()
{

}
OTO::~OTO()
{

}
void OTO::Nhap()
{
    cin.ignore();
    cout<<"\nNhap ma o to : ";
    getline(cin,Maoto);
    cout<<"\nNhap gia o to : ";
    cin>>Gia;
    cout<<"\nNhap so nam su dung : ";
    cin>>Sonam;
    cout<<"\nNhap ty le khau hao tren nam(%) : ";
    cin>>Tyle;
}
void OTO::Xuat()
{
    cout<<setw(15)<<left<<Maoto;
    cout<<setw(20)<<left<<(size_t)Gia;
    cout<<setw(18)<<left<<Sonam;
    cout<<setw(20)<<left<<Tyle<<endl;
}
void Nhap_ds_oto(OTO *a[],int n)
{
    for(int i=0;i<n;i++){
        OTO *temp=new OTO();
        cout<<"\n\t\t\t============= NHAP THONG TIN O TO THU "<<i+1<<" =============";
        temp->Nhap();
        a[i]=temp;
    }
}
void Xuat_ds_oto(OTO *a[],int n)
{
    cout<<setw(15)<<left<<"Ma o to";
    cout<<setw(20)<<left<<"Gia mua moi";
    cout<<setw(18)<<left<<"So nam su dung";
    cout<<setw(20)<<left<<"Ty le khau hao/nam(%)"<<endl;
    for(int i=0;i<n;i++){
        a[i]->Xuat();
    }
}
int main()
{
    OTO *ds_oto[100];
    int n;
    cout<<"\nNhap so luong o to : ";
    cin>>n;
    Nhap_ds_oto(ds_oto,n);
    Xuat_ds_oto(ds_oto,n);
    for(int i=0;i<n;i++)
        delete ds_oto[i];
    return 0;
}
