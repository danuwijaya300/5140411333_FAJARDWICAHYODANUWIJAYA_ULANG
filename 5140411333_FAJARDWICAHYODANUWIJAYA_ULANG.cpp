       #include<stdio.h>
#include<conio.h>
#include<iostream.h>
main()
{
char cust[50],tipe[10],bonus[50],lagi,kode;
int lama,hrg,sewa,cash,tot,kem,adm;
atas:
cout<<" HOTEL YOGYAKARTA"<<endl;
cout<<" **************************************"<<endl;
cout<<" Nama Penyewa\t\t: ";gets(cust);
cout<<" Kode Kamar [A.VVIP|B.VIP|C.SWITT]\t: ";cin>>kode;
switch(kode)
{
    case'a':
    case 'A':
    strcpy(tipe,"VVIP");
      hrg=1000000;
    break;
    case'b':
    case'B':
      strcpy(tipe,"VIP");
      hrg=500000;
    break;
    case'm':
    case'M':
      strcpy(tipe,"SWITT");
      hrg=250000;
    break;
    default:
    cout<<"SALAH MASUKKAN KODE"<<endl;
      goto bawah;
    }
cout<<" Lama Menginap\t\t: ";cin>>lama;
if(lama>=7)
{
strcpy(bonus,"setrika");
}
else
strcpy(bonus,"TIDAK DAPAT SOUVENIR");
clrscr();
adm=200000;
sewa=lama*hrg;
tot=adm+sewa;
cout<<" HOTEL YOGYAKARTA"<<endl;
cout<<" Nama Penyewa\t\t: "<<cust<<endl;
cout<<" Kode Kamar [A.VVIP/B.VIP/C.SWITT]\t: "<<kode<<endl;
cout<<" Lama Menginap\t\t: "<<lama<<endl;
cout<<" **************************************"<<endl;
cout<<" Tipe Kamar\t\t: "<<tipe<<endl;
cout<<" Lama Menginap\t\t: "<<lama; cout<<" hari"<<endl;
cout<<" Souvenir\t\t: "<<bonus<<endl;
cout<<" Biaya Sewa\t\t: "<<sewa<<endl;
cout<<" Biaya Administrasi\t: "<<adm<<endl;
cout<<" Total Biaya Sewa\t: "<<tot<<endl;
cout<<" **************************************"<<endl;
cout<<" Uang Bayar\t\t: ";cin>>cash;
kem=cash-tot;
cout<<" Uang Kembali\t\t: "<<kem<<endl;
bawah:
cout<<"INGIN INPUT LAGI?[Y/T]";cin>>lagi;
clrscr();
if(lagi=='y'||lagi=='Y')
goto atas;
else
getch();
}