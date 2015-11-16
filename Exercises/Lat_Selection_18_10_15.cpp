/*--------------------------
Program Konversi Grade Nilai
--------------------------*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

main()
{
	char nama[25], grade;
	int nim, nil_tgs, nil_uas, nil_uts, nil_akhir;
	
	cout<<"Silakan Masukkan Nama        : ";
	cin.getline(nama,29);
	cout<<"Silakan Masukkan NIM         : ";
	cin>>nim;
	cout<<"Silakan Masukkan Nilai Tugas : ";
	cin>>nil_tgs;
	cout<<"Silakan Masukkan Nilai UTS   : ";
	cin>>nil_uts;
	cout<<"Silakan Masukkan Nilai UAS   : ";
	cin>>nil_uas;
	
	nil_akhir = (nil_tgs+nil_uts+nil_uas)/3;
	
	if (nil_akhir>=80)
	{
		grade='A';
	}
	else if(nil_akhir>=70&&nil_akhir<=79)
	{
		grade='B';
	}
	else if(nil_akhir>=60&&nil_akhir<=69)
	{
		grade='C';
	}
	else if(nil_akhir>=30&&nil_akhir<=59)
	{
		grade='D';
	}
	else
	{
		grade='E';
	}

	system("cls");
	
	cout<<"Nama          : "<<nama;
	cout<<"\nNIM           : "<<nim;

	cout<<"\nGrade Nilai   : "<<grade;
	
	
	getch();
}

