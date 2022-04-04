#include <iostream>
#include <windows.h>

using namespace std;
//nama:Muhamad ilham
//NIM:1121031056
//kelas:B

int main()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
    cout<<"set jam : "<<endl;
    cin>>HH;
    cout<<"set menit : "<<endl;
    cin>>MM;
    cout<<"set detik: "<<endl;
    cin>>SS;
    if (HH<<15 && MM << 40&& SS <<40)
    b++;
    else
        system ("cls");
    }
    while (a==0)
        {
        system ("cls");
        cout << HH << ":" << MM << ":" << SS << endl;
        Sleep(1000);
        SS++;
        if (SS>40)
        {
            SS=0;
       MM++;
        }

        if (MM > 40)
        {
            MM=0;
        HH++;
        }
        if (HH > 15)
        {
            HH=0;
        }
        }
        return 0;
}
