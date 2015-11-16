/*
Jati Nurohman/201581060
*/

#include<conio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
	float no_trans,harga,kd_kasir,jml,tot_harga,diskon,uang_byr,uang_kmbli;
	char kd_buah,ulang;
	string nm_buah;
	do
	{
		cout<<"================================================================\n";
		cout<<"=============APLIKASI KASIR TOKO BUAH SEGAR ABADI===============\n";
		cout<<"===============Oleh : Jati Nurohman / 201581060=================\n";
		cout<<"================================================================\n"<<endl;
		cout<<"Nomor Transaksi : ";
		cin>>no_trans;
		cout<<"Kode Kasir      : ";
		cin>>kd_kasir;
		cout<<"Kode Buah       : ";
		cin>>kd_buah;
		cout<<"Jumlah Beli (Kg): ";
		cin>>jml;
		
		if (kd_buah == 'A')
		{
			harga = 35000;
			nm_buah = "Apel Fuji";
		}
		else if (kd_buah == 'L')
		{
			harga = 25000;
			nm_buah = "Lengkeng Buah";
		}
		else if (kd_buah == 'J')
		{
			harga = 30000;
			nm_buah = "Jeruk Sunkist";
		}
		else
		{
			cout<<"Kode buah tidak ditemukan";
		}
		
		cout<<endl;
		cout<<"Nama Buah                : "<<nm_buah<<endl;
		cout<<"Harga                    : Rp. "<<harga<<" / Kg\n";
		tot_harga = harga*jml;
		if (tot_harga > 100000)
			{
				diskon = tot_harga * 10/100;
				tot_harga = tot_harga-diskon;
				cout<<"Diskon                   : 10%\n";
				cout<<"Total yang harus dibayar : Rp. "<<tot_harga;
				cout<<"\nBayar                    : Rp. ";
				cin>>uang_byr;
				uang_kmbli = uang_byr-tot_harga;
				cout<<"Uang kembalian           : Rp. "<<uang_kmbli;
				cout<<endl;
			}
			else
			{
				cout<<"Diskon                   : 0%\n";
				cout<<"Total yang harus dibayar : Rp. "<<tot_harga;
				cout<<"\nBayar                    : Rp. ";
				cin>>uang_byr;
				uang_kmbli = uang_byr-tot_harga;
				cout<<"Uang kembalian           : Rp. "<<uang_kmbli;
				cout<<endl;
			}
			
		cout<<"\nIngin mengulang program?";
		cout<<"\nTekan y/Y untuk mengulang, tekan sembarang tombol untuk keluar : ";
		cin>>ulang;
		system("cls");

	}
	while(ulang=='Y'||ulang=='y');
}
