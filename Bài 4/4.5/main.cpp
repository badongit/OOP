#include <iostream>

using namespace std;
class ARRAY
{
private:
    int *VALUE;
    int n;
public:
    ARRAY(){
        n=0;
    }
    ARRAY(int n){
        this->n=n;
        VALUE= new int [n];
        for(int i=0;i<n;i++)
            VALUE[i]=0;
    }
    ~ARRAY(){
        n=0;
        delete VALUE;
    }
    void Nhap(){
        cout<<"\nNhap so luong phan tu : "; cin>>n;
        VALUE = new int [n];
        for(int i=0;i<n;i++){
            cout<<"\nNhap PT["<<i+1<<"] = ";
            cin>>VALUE[i];
        }
    }
    void Xuat(){
        for(int i=0;i<n;i++)
            cout<<VALUE[i]<< ' ';
    }
};

int main()
{
    ARRAY a=ARRAY(4);
    cout<<"\nMang A duoc khoi tao : ";
    a.Xuat();
    a.Nhap();
    a.Xuat();
    a.~ARRAY();
    return 0;
}
