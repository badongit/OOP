#include <iostream>

using namespace std;

class PHANSO
{
private:
    float tu,mau;
public:
    void nhap()
    {
        cout<<"\nNhap tu so  : "; cin>>tu;
        cout<<"\nNhap mau so  : "; cin>>mau;
    }
    void xuat()
    {
        cout<<tu<<"/"<<mau;
    }
    PHANSO operator+(PHANSO a){
        PHANSO temp;
        temp.tu= tu*a.mau+a.tu*mau;
        temp.mau=mau*a.mau;
        return temp;
    }
    PHANSO operator-(PHANSO a){
        PHANSO temp;
        temp.tu= tu*a.mau-a.tu*mau;
        temp.mau=mau*a.mau;
        return temp;
    }
    PHANSO  operator*(PHANSO a){
        PHANSO temp;
        temp.tu= tu*a.tu;
        temp.mau=mau*a.mau;
        return temp;
    }
    PHANSO  operator/(PHANSO a){
        PHANSO temp;
        temp.tu= tu*a.mau;
        temp.mau=mau*a.tu;
        return temp;
    }
    float giatri(){
        return tu/mau;
    }
};
int main()
{
    PHANSO a,b;
    cout<<"\nNhap phan so A : \n";
    a.nhap();
    cout<<"\nNhap phan so B : \n";
    b.nhap();
    cout<<"\nTich : ";
    (a*b).xuat();
    cout<<" = "<<(a*b).giatri();
    cout<<"\nThuong : ";
    (a/b).xuat();
    cout<<" = "<<(a/b).giatri();
    cout<<"\nTong : ";
    (a+b).xuat();
    cout<<" = "<<(a+b).giatri();
    cout<<"\nHieu : ";
    (a-b).xuat();
    cout<<" = "<<(a-b).giatri();
    return 0;
}
