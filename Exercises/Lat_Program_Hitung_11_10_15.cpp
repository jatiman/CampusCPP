////////////////////////////////
//Tugas2 Algoritma Pemrograman//
//----Nama : Jati Nurohman----//
//------NIM  : 201581060------//
////////////////////////////////

#include<iostream>
#include<conio.h>
using namespace std;

main(){
	float a, b, c, jumlah, kurang, kali, bagi;
	
	cout<<"Masukkan Nilai 1 : ";
	cin>>a;
	cout<<"Masukkan Nilai 2 : ";
	cin>>b;
	cout<<"Masukkan Nilai 3 : ";
	cin>>c;
	
	jumlah = a+b+c;
	kurang = a-b-c;
	kali = a/b/c;
	kali = a*b*c;
	
	cout<<"\nHasil Penjumlahan 3 Nilai : "<<jumlah;
	cout<<"\nHasil Pengurangan 3 Nilai : "<<kurang;
	cout<<"\nHasil Perkalian 3 Nilai   : "<<kali;
	cout<<"\nHasil Pembagian 3 Nilai   : "<<bagi;
	
	getch();
}
