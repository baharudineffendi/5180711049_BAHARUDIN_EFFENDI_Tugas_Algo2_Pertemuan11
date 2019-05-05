#include <iostream>

using namespace::std;

void member (){
    string member;
    string nama;
    cout<<" Masukan Nomor Member : ";cin>>member;
    if (member=="A001"){nama ="Bayu";}
    if (member=="A002"){nama = "Irvan";}
    if (member=="A003"){nama = "Susiati";}
    if (member=="A007"){nama ="Diana";}
    if (member=="A008"){nama = "Roni";}
    cout<<"Nama Member: "<<nama;
}

void member2(){
    int macam,harga,jml,i, subtotal=0,diskon,total,hargadiskon;
cout<<"Berapa Macam Jumlah Barang = ";cin>>macam;
    for (i=1;i<=macam;i++){
    cout<<"Barang Ke "<<i<<endl;
    cout<<"Harga Barang  = ";cin>>harga;
    cout<<"Jumlah Barang = ";cin>>jml;
    subtotal=subtotal+(harga*jml);}
	total = subtotal;
    cout<<"Total Sebelum Di Diskon = ";cout<<total;cout<<endl;
    diskon=total*0.05;
    hargadiskon=total-diskon;
    cout<<"Total Setelah Di Diskon = ";cout<<hargadiskon;
}

void non_member(){
    string anda;
    cout<<"Masukan Nama Anda = ";cin>>anda;
    int macam,harga,jml,i,y=0,a;
    cout<<"Berapa Macam Jumlah Barang = ";cin>>macam;
    for (i=1;i<=macam;i++){
    cout<<"Barang Ke "<<i<<endl;
    cout<<"Harga Barang  = ";cin>>harga;
    cout<<"Jumlah Barang = ";cin>>jml;
    y=y+(jml*harga);
    ;}
    a = y;
    cout<<"Total Keseluruhan Barang = ";cout<<a;
}


main (){
char respon;
cout<<"Apakah anda Memeber [y/t] = ";cin>>respon;
if (respon=='y'||respon=='Y'){member ();cout<<endl;member2();}
else {non_member();}



















cout<<endl;
cout<<"Created By BAHARUDIN EFFENDI";
cout<<endl;
}
