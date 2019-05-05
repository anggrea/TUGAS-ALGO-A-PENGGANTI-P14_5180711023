#include <iostream>
#include <windows.h>
using namespace::std;

struct data
{
int nonmem, hrg, bar;
};
data pembeli[100];
int jml,tot,jum;

void hitung()
{
        int i;

    cout<<"\n berapa barang  dibeli? : ";cin>>jml;
            for (i=0;i<jml;i++)
            {
                cout<<" harga Barang ke - "<<i<<" : ";cin>>pembeli[i].hrg;
                cout<<" jumlah barang : " ;cin>>pembeli[i].bar;
                jum+=pembeli[i].hrg*pembeli[i].bar;
                tot=jum-((jum*5)/100);
            }
    system("CLS");
}
void nonmem()
{
    string nama;
    cout<<" inputkan nama: ";cin>>nama;
    system ("CLS");
    hitung();
    cout<<"\n nama pelanggan: "<<nama;
    cout<<"\n total bayar\t: "<<jum;
}
void member()
{
    string nomem;
    string pelanggan;
    awal:
    cout<<" nomor member : ";cin>>nomem;
    if (nomem=="A001"){pelanggan ="Bayu";goto proses;}
    if (nomem=="A002"){pelanggan = "Irvan";goto proses;}
    if (nomem=="A003"){pelanggan = "Susiati";goto proses;}
    if (nomem=="A007"){pelanggan ="Diana";goto proses;}
    if (nomem=="A008"){pelanggan = "Roni";goto proses;}
    else {cout<<" Member tidak tersedia\n";goto awal;}
proses:
hitung();

cout<<"\n nama member: "<<pelanggan;
cout<<"\n total bayar\t: "<<tot;
}
main()
{
cout<<"\n\n";
char jawab;
cout<<"**********SELAMAT DATANG SAHABAT**********";cout<<endl;cout<<endl;
cout<<" [y]member atau [n]non membar [y/n]: ";cin>>jawab;
if (jawab== 'n')
    {nonmem();}
if (jawab=='y')
    {member();}
cout<<"\n\n";
return 0;
}

