#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class SCHOOL
{
private:
    char Name[15];
    char Date[12];
public:
    friend class FACULTY;
};

class FACULTY
{
private:
    char Name[15];
    char Date[12];
    SCHOOL x;
public:
    void nhap(){
        cout<<"\nNhap ten truong : "; fflush(stdin); gets(x.Name);
        cout<<"\nNhap ngay thang lap truong(dd/mm/yyyy) : "; gets(x.Date);
        cout<<"\nNhap ten khoa : "; fflush(stdin); gets(Name);
        cout<<"\nNhap ngay thang lap khoa(dd/mm/yyyy) : "; gets(Date);
    }
    void xuat(){
        cout<<setw(15)<<x.Name<<setw(12)<<x.Date<<setw(15)<<Name<<setw(12)<<Date;
    }
    friend class STUDENT;
};

class PERSON
{
protected:
    char Name[15];
    char Birth[12];
    char Address[20];
public:
    void nhap(){
        cout<<"\nNhap ho ten : "; fflush(stdin); gets(Name);
        cout<<"\nNhap ngay sinh(dd/mm/yyyy): "; gets(Birth);
        cout<<"\nNhap dia chi nha : "; gets(Address);
    }
    void xuat(){
        cout<<setw(15)<<Name<<setw(12)<<Birth<<setw(20)<<Address;
    }
    PERSON(){

    }
};

class STUDENT : public PERSON
{
private:
    FACULTY y;
    char lop[5];
    float diem;
public:
    void nhap(){
        y.nhap();
        PERSON::nhap();
        cout<<"\nNhap lop : "; fflush(stdin); gets(lop);
        cout<<"\nNhap diem : "; cin>>diem;
    }
    void xuat(){
        y.xuat();
        PERSON::xuat();
        cout<<setw(5)<<lop<<setw(5)<<diem<<endl;
    }
};

void title()
{
    cout<<setw(15)<<left<<"Ten truong"<<setw(12)<<"Ngay TLT"<<setw(15)<<"Ten Khoa"<<setw(12)<<"Ngay TLK";
    cout<<setw(15)<<"Ho ten"<<setw(12)<<"Ngay sinh"<<setw(20)<<"Dia chi"<<setw(5)<<"Lop"<<setw(5)<<"Diem"<<endl;
}
int main()
{
    STUDENT a;
    cout<<"\n\t\t\t=============== NHAP THONG TIN SINH VIEN ===============\n";
    a.nhap();
    cout<<"\n\t\t\t=============== THONG TIN SINH VIEN ===============\n";
    title();
    a.xuat();
    return 0;
}
