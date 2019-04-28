#include<conio.h>
#include <iostream>
using namespace std;


struct data{
char nim[20],nama[20],kelas[20];};
data batas[100];
int a,b,c,d;

void lihatdata()
{int i,m;
 cout<<"\n--------------------------------Tampilkan Data-------------------------------\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\t\t||\tKelas\t||\n";
 m=0;
 for(i=0;i<a;i++)
 {m=m+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<m<<"\t||";
  cout<<batas[i].nim<<"\t||";
  cout<<batas[i].nama<<"\t\t\t||";
  cout<<batas[i].kelas<<"\t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";
  getch();}

  void inputdata()
{  cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
       cout<<"\nData ke-"<<d<<endl;
       cout<<"NIM\t: ";cin>>batas[a].nim;
       cout<<"Nama\t: ";cin>>batas[a].nama;
       cout<<"Kelas\t: ";cin>>batas[a].kelas;
   a++;}}

   void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
    cout<<"NIM\t: ";cin>>batas[l].nim;
    cout<<"Nama\t: ";cin>>batas[l].nama;
    cout<<"Kelas\t: ";cin>>batas[l].kelas;
    lihatdata();
}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}

 cout<<"\n\n\n\n\n\n\n\n\n------------------------------ Data ke-"<<x<<" Terhapus ---------------------------";
 getch();;
}

int main()
{     int pilih;
char n;
  awal:
  cout<<"\n================================ PILIH MENU =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
    if(pilih==1)
        {inputdata();goto awal;}
    if(pilih==2)
        {hapusdata();goto awal;}
    if(pilih==3)
        {lihatdata();goto awal;}
    if(pilih==4)
        {editdata();goto awal;}
    if(pilih==5)
   {
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN INGIN KELUAR??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>n;
    if(n=='y'||n=='Y')
    {
     cout<<"\n\n\n\n\n------------------------------- PROGRAM BERAKHIR---------------------------";}
    if(n=='n'||n=='N')
           {goto awal;}}
  else
   {cout<<"Pilihan 1-5";getch();goto awal;}


}
