#include <iostream>

using namespace std;
class SONGUYEN
{
private:
    int x;
public:
    void Nhap();
    void Xuat();

    int Getter_x(){
        return x;
    }
    SONGUYEN();
    ~SONGUYEN();
};
SONGUYEN::SONGUYEN()
{

}
SONGUYEN::~SONGUYEN()
{

}
void SONGUYEN::Nhap()
{
    cin>>x;
}
void SONGUYEN::Xuat()
{
    cout<<x<< ' ';
}
int main()
{
    SONGUYEN *A[100];
    int n;
    cout<<"\nNhap so phan tu : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        SONGUYEN *temp = new SONGUYEN();
        cout<<"\nNhap A["<<i+1<<"] = ";
        temp->Nhap();
        A[i]=temp;
    }
    cout<<"\n\t\t\tMANG A\n";
    for(int i=0;i<n;i++)
        A[i]->Xuat();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if(A[i]->Getter_x()>A[j]->Getter_x()){
                SONGUYEN *tam=A[i];
                A[i]=A[j];
                A[j]=tam;
            }
    }
    cout<<"\n\t\t\tMANG A SAU KHI SAP XEP \n";
    for(int i=0;i<n;i++)
        A[i]->Xuat();
    for(int i=0;i<n;i++){
        delete A[i];
    }
    return 0;
}
