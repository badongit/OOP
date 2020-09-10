#include <iostream>
#include <stdio.h>

using namespace std;

class ELECTRONIC
{
protected:
    int Congsuat;
    float Dienap;
public:
    ELECTRONIC(int Congsuat,float Dienap)
    {
        this->Congsuat = Congsuat;
        this->Dienap = Dienap;
    }
};

class MAYGIAT : public ELECTRONIC
{
private:
    float Dungtich;
    string Loai;
public:
    MAYGIAT(int Congsuat,float Dienap,float Dungtich,string Loai):ELECTRONIC(Congsuat,Dienap)
    {
        this->Dungtich = Dungtich;
        this->Loai = Loai;
    }
    void Xuat()
    {
        cout<<"\nCong suat : "<<Congsuat;
        cout<<"\nDien ap : "<<Dienap;
        cout<<"\nDung tich : "<<Dungtich<<" (kg)";
        cout<<"\nLoai : "<<Loai;
    }
};

class TULANH : public ELECTRONIC
{
private:
    float Dungtich;
    int Songan;
public:
    TULANH(int Congsuat,float Dienap,float Dungtich,int Songan):ELECTRONIC(Congsuat,Dienap)
    {
        this->Dungtich = Dungtich;
        this->Songan = Songan;
    }
    void Xuat()
    {
        cout<<"\nCong suat : "<<Congsuat;
        cout<<"\nDien ap : "<<Dienap;
        cout<<"\nDung tich : "<<Dungtich<<" (kg)";
        cout<<"\nSo ngan : "<<Songan;
    }
};
int main()
{
    MAYGIAT a=MAYGIAT(50,100,8,"cua tren");
    cout<<"\n\t\t\t============= THONG TIN MAY GIAT =============\n";
    a.Xuat();
    TULANH b = TULANH(100,200,10,6);
    cout<<"\n\t\t\t============= THONG TIN TU LANH =============\n";
    b.Xuat();
    return 0;
}
