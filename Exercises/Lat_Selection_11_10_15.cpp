#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	float berat, tinggi, bi;
	cout<<"PERHITUNGAN BERAT BADAN IDEAL\n";
	cout<<"=============================\n";
	cout<<endl;
	cout<<"Masukkan Berat Badan Anda : ";
	cin>>berat;
	cout<<"Masukkan Tinggi Badan Anda : ";
	cin>>tinggi;
	cout<<endl;
	cout<<"Berat Ideal Anda : ";
	bi=(tinggi-100)-0.1*(tinggi-100);
	cout<<bi<<" kg";
	
	if (berat<=bi+2&&berat>=bi-2)
	{
		cout<<" // Anda Ideal";
	}
	else
	{
		cout<<" // Anda Tidak Ideal";
	}
	cout<<endl;
	
	getch();
}
