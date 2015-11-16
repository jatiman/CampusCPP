#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main()
{
	system("color 4f");
	int nilai1, nilai2, nilai3, sks1, sks2, sks3, ulang, nim;
	float totalsks, ipk;
	char grade1, grade2, grade3, point1, point2, point3, nama[25], fakultas[25], jurusan[25], matkul1[10], matkul2[10], matkul3[10];
	
	do
	{
		cout<<"PROGRAM NILAI IPK MAHASISWA\n";
		cout<<"===========================\n";
		cout<<"    ===================    \n";
		cout<<"       =============       \n";
		cout<<endl;
		
		cout<<"Nama                     : ";
		cin>>nama;
		cout<<"NIM                      : ";
		cin>>nim;
		cout<<"Fakultas                 : ";
		cin>>fakultas;
		cout<<"Jurusan                  : ";
		cin>>jurusan;
		//cout<<endl;
		
		cout<<"Masukkan Mata Kuliah 1   : ";
		cin>>matkul1;
		cout<<"Masukkan Nilai           : ";
		cin>>nilai1;
		cout<<"Masukkan Jumlah SKS      : ";
		cin>>sks1;
		//cout<<endl;
		
		cout<<"Masukkan Mata Kuliah 2   : ";
		cin>>matkul2;
		cout<<"Masukkan Nilai           : ";
		cin>>nilai2;
		cout<<"Masukkan Jumlah SKS      : ";
		cin>>sks2;
		//cout<<endl;
		
		cout<<"Masukkan Mata Kuliah 3   : ";
		cin>>matkul3;
		cout<<"Masukkan Nilai           : ";
		cin>>nilai3;
		cout<<"Masukkan Jumlah SKS      : ";
		cin>>sks3;
		//cout<<endl;
		
		//nilai1
		if (nilai1<=100&&nilai1>=80)
		{
			grade1=4;point1='A';
		}
		else if (nilai1<=79&&nilai1>=70)
		{
			grade1=3;point1='B';
		}
		else if (nilai1<=69&&nilai1>=60)
		{
			grade1=2;point1='C';
		}
		else if (nilai1<=59&&nilai1>=50)
		{
			grade1=1;point1='D';
		}
		else if (nilai1<=49&&nilai1>=0)
		{
			grade1=0;point1='E';
		}
		
		//nilai2
		if (nilai2<=100&&nilai2>=80)
		{
			grade2=4;point2='A';
		}
		else if (nilai2<=79&&nilai2>=70)
		{
			grade2=3;point2='B';
		}
		else if (nilai2<=69&&nilai2>=60)
		{
			grade2=2;point2='C';
		}
		else if (nilai2<=59&&nilai2>=50)
		{
			grade2=1;point2='D';
		}
		else if (nilai2<=49&&nilai2>=0)
		{
			grade2=0;point2='E';
		}
		
		//nilai3
		if (nilai3<=100&&nilai3>=80)
		{
			grade3=4;point3='A';
		}
		else if (nilai3<=79&&nilai3>=70)
		{
			grade3=3;point3='B';
		}
		else if (nilai3<=69&&nilai3>=60)
		{
			grade3=2;point3='C';
		}
		else if (nilai3<=59&&nilai3>=50)
		{
			grade3=1;point3='D';
		}
		else if (nilai3<=49&&nilai3>=0)
		{
			grade3=0;point3='E';
		}
		
		cout<<endl;
		cout<<"--------------------------------------------\n";
		cout<<"Tabel Nilai Anda         : \n";
		cout<<"--------------------------------------------\n";
		cout<<"Nama                     : "<<nama;
		cout<<endl;
		cout<<"Fakultas                 : "<<fakultas;
		cout<<endl;
		cout<<"Jurusan                  : "<<jurusan;
		cout<<endl;
		cout<<"\nNilai Mata Kuliah \n";
		cout<<"1. "<<matkul1<<"("<<sks1<<")"<<"\t : "<<nilai1<<" dengan Grade "<<point1;
		cout<<endl;
		cout<<"2. "<<matkul2<<"("<<sks2<<")"<<"\t : "<<nilai2<<" dengan Grade "<<point2;
		cout<<endl;
		cout<<"3. "<<matkul3<<"("<<sks3<<")"<<"\t : "<<nilai3<<" dengan Grade "<<point3;
		cout<<endl;
		
		totalsks=sks1+sks2+sks3;
		ipk=(sks1*grade1+sks2*grade2+sks3*grade3)/totalsks;
		cout<<endl;
		cout<<"\nIPK ANDA ADALAH : "<<ipk;
		cout<<endl;
		
		cout<<endl;
		cout<<"Ingin Mengulang Program? (1=Iya/2=Tidak)";
		cin>>ulang;
		
		system("pause");
		system("cls");
	}
	while(ulang==1);
	getch();
}
