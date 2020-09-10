#include <iostream>

using namespace std;
class SOTHUC
{
private:
    float x;
public:
    void Nhap();
    float Getter_x(){
        return x;
    }

    SOTHUC();
    ~SOTHUC();
};
SOTHUC::SOTHUC()
{

}
SOTHUC::~SOTHUC()
{

}
void SOTHUC::Nhap()
{
    cin>>x;
}
void Nhap_day(SOTHUC *a[],int n)
{
    for(int i=0;i<n;i++){
        SOTHUC *temp = new SOTHUC();
        cout<<"\nNhap A["<<i+1<<"] = ";
        temp->Nhap();
        a[i]=temp;
    }
}
float minn(SOTHUC *a[],int n)
{
    float m=a[0]->Getter_x();
    for(int i=1;i<n;i++){
        if(m>a[i]->Getter_x())
            m=a[i]->Getter_x();
    }
    return m;
}
float maxx(SOTHUC *a[],int n)
{
    float m=a[0]->Getter_x();
    for(int i=1;i<n;i++){
        if(m<a[i]->Getter_x())
            m=a[i]->Getter_x();
    }
    return m;
}
int main()
{
    SOTHUC *A[100];
    int n;
    cout<<"\nNhap so phan tu : ";
    cin>>n;
    Nhap_day(A,n);
    cout<<"\nMax = "<<maxx(A,n);
    cout<<"\nMin = "<<minn(A,n);
    for(int i=0;i<n;i++)
        delete A[i];
    return 0;
}
