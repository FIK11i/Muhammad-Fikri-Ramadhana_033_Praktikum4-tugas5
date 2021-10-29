//Progam Data Kelulusan Mahasiswa
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	char tahun[1000][30];
	int i,jumlahtahun,data1[1000],data2[1000],data_rata10,data_rata15,data_rata20;
	
	awal :
	cout<<"******************************************************"<<endl;
	cout<<"[              Data Kelulusan Mahasiswa              ]"<<endl;
	cout<<"[         Prodi Teknik Komputer & Teknik Elektro     ]"<<endl;
	cout<<"******************************************************"<<endl;
	cout<<"\n";
	
	cout<<" Masukkan Jumlah Tahun : "; cin>>jumlahtahun;
	cout<<"\n";
	
	for (i=0;i<jumlahtahun;i++)
	{
		cout<<"------------------------------------------------------"<<endl;
		cout<<"|                    Data ke "<<i+1<<"                       |"<<endl;
		cout<<"------------------------------------------------------"<<endl;
		cout<<"| Pada Tahun                : "; cin>>tahun[i];
		cout<<"| Nilai Teknik Komputer     : "; cin>>data1[i];
		cout<<"| Nilai Teknik Elektro      : "; cin>>data2[i];
		cout<<"------------------------------------------------------"<<endl;
		cout<<"\n";
	}
	
	cout<<"                            TABEL DATA                              "<<endl;
	cout<<"===================================================================="<<endl;
	cout<<"| No.| Tahun Prodi |  Teknik  | Teknik  |   Rata-Rata Kelulusan    |"<<endl;
	cout<<"|    |             | Komputer | Elektro |  per tahun Semua Prodi   |"<<endl;
	cout<<"===================================================================="<<endl;
	
	for (i=0;i<jumlahtahun;i++)
	{
		cout<<"| "<<setiosflags(ios::left)<<setw(3)<<i+1;
		cout<<"| "<<setiosflags(ios::left)<<setw(12)<<tahun[i];
		cout<<"| "<<setiosflags(ios::left)<<setw(9)<<data1[i];
		cout<<"| "<<setiosflags(ios::left)<<setw(8)<<data2[i];
		data_rata10=0.5*(data1[i]+data2[i]);
		cout<<"| "<<setiosflags(ios::left)<<setw(24)<<data_rata10<<" |";
		cout<<"\n|==================================================================|\n";
	}
	
	data_rata15=(data1[0]+data1[0]*0.5);
	data_rata20=(data2[0]+data2[0]*0.5);
	
	cout<<"|     Rata-Rata    | "<<setiosflags(ios::left)<<setw(9)<<data_rata15;
	cout<<"| "<<setiosflags(ios::left)<<setw(8)<<data_rata20;
	cout<<"|                          |"<<endl;
	cout<<"|Pertahun per Prodi|          |         |                          |"<<endl;
	cout<<"===================================================================="<<endl;

getch();		
}
	
	
	
	
	
