#include <iostream>

using namespace std;

class SOPHUC
{
private:
    float thuc,ao;
public:
    SOPHUC(float thuc,float ao){
        this->thuc=thuc;
        this->ao=ao;
    }
    SOPHUC(){
    }
    void xuat(){
        cout<<thuc<<" + i*"<<ao;
    }
    SOPHUC operator+(SOPHUC a)
    {
        SOPHUC temp;
        temp.thuc = thuc + a.thuc;
        temp.ao = ao + a.ao;
        return temp;
    }
    SOPHUC operator-(SOPHUC a){
        SOPHUC temp;
        temp.thuc = thuc - a.thuc;
        temp.ao = ao - a.ao;
        return temp;
    }
};

int main()
{
    SOPHUC a(3,2),b(4,1);
    cout<<"\nSP3 = ";
    (a+b).xuat();
    cout<<"\nSP4 = ";
    (a-b).xuat();
    return 0;
}
