#include <iostream>
#include <math.h>
using namespace std;
class PT2
{
private:
    float a,b,c;
public:
    void Nhap();
    void Xuat();
    void Giai();
    PT2();
    PT2(float a,float b,float c);
};
PT2::PT2()
{
    a=b=c=0;
}
PT2::PT2(float a,float b,float c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
void PT2::Nhap()
{
    cout<<"\nNhap a : "; cin>>a;
    cout<<"\nNhap b : "; cin>>b;
    cout<<"\nNhap c : "; cin>>c;
}
void PT2::Xuat()
{
    cout<<"\nPhuong trinh vua nhap : ";
    cout<<a<<"x^2 ";
    if(b>=0) cout<<"+ "<<b<<"x ";
    else cout<<b<<"x ";
    if(c>=0) cout<<" + "<<c<<" = 0";
    else cout<<c<<" = 0";
}
void PT2::Giai()
{
    if(a==0){
        if(b==0){
            if(c==0) cout<<"\nPhuong trinh vo so nghiem.";
            else cout<<"\nPhuong trinh vo nghiem.";
        }
        else cout<<"\nPhuong trinh co nghiem duy nhat x = "<<-c/b;
    }
    else{
        float delta=b*b-4*a*c;
        if(delta<0) cout<<"\nPhuong trinh vo nghiem.";
        else if(delta==0) cout<<"\nPhuong trinh co nghiem kep x = "<<-b/(2*a);
            else{
                cout << "\nPhuong trinh co 2 nghiem phan biet: " << endl;
                cout << "\tx1 = " << (-b+sqrt(delta))/(2*a) << endl << "\tx2 = " << (-b-sqrt(delta))/(2*a) << endl;
            }
    }
}
int main()
{
    PT2 p=PT2(4,9,1);
    p.Xuat();
    p.Giai();
    PT2 q;
    cout<<"\n\t\t\t============== NHAP PHUONG TRINH Q ==============";
    q.Nhap();
    q.Xuat();
    q.Giai();
    return 0;
}
