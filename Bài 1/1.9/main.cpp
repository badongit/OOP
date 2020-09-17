#include <iostream>

using namespace std;
class HCN
{
private:
    float D;
    float R;
public:
    void NHAP();
    void VE();

    float DIENTICH();
    float CHUVI();
};

void HCN::NHAP()
{
    cout<<"\nNhap chieu dai : ";
    cin>>D;
    cout<<"\nNhap chieu rong : ";
    cin>>R;
}
void HCN::VE()
{
    cout<<"\n";
    for(int i=0;i<D;i++)
        cout<<"*";
        cout<<"\n";
    for(int i=0;i<R-2;i++){
        cout<<"*";
        for(int j=0;j<D-2;j++)
            cout<<" ";
        cout<<"*";
        cout<<"\n";
    }
    for(int i=0;i<D;i++)
        cout<<"*";
    cout<<"\n";
}
float HCN::CHUVI()
{
    return (D+R)*2;
}
float HCN::DIENTICH()
{
    return D*R;
}
int main()
{
    HCN x;
    cout<<"\n\t\t\t============ NHAP THONG TIN HINH CHU NHAT ============";
    x.NHAP();
    x.VE();
    cout<<"\nDien tich hinh chu nhat la : "<<x.DIENTICH();
    cout<<"\nChu vi hinh chu nhat la : "<<x.CHUVI();
    return 0;
}
