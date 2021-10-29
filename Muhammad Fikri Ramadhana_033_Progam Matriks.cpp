//Progam Menghitung Pengurangan, Perkalian, Transpose Matrix
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

main()
{
	int tabel,i,j,x,baris,kolom,hasil[10][10];
	int data1[10][10],data2[10][10],transpose[10][10],matriks[10][10];
	
	cout<<"==========================================="<<endl;
	cout<<"|       Progam Penghitungan Matrik        |"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"| 1) Pengurangan                          |"<<endl;
	cout<<"| 2) Perkalian                            |"<<endl;
	cout<<"| 3) Transpose (berordo sama)             |"<<endl;
	cout<<"==========================================="<<endl;
	cout<<"\n";
	
	cout<<"| Masukkan Pilihan Menu : "; cin>>tabel;
	cout<<"-------------------------------------------"<<endl;
	cout<<"\n";
	
	switch(tabel){
		case 1 :
			{
				do
				{
				cout<<"| Masukkan Baris        : "; cin>>baris;
				cout<<"| Masukkan Kolom        : "; cin>>kolom;
				}
				while((baris>10)||(kolom>10));
				
				cout<<"\n";
				cout<<"--------------- Matriks A -----------------"<<endl;
				cout<<"\n";
				
				for (i=0;i<baris;i++)
				for (j=0;j<kolom;j++)
				{
					cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] : "; cin>>data1[i][j];
				}
				
				cout<<"\n";
				cout<<"--------------- Matriks B ------------------"<<endl;
				cout<<"\n";
				
				for (i=0;i<baris;i++)
				for (j=0;j<kolom;j++)
				{
					cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] : "; cin>>data2[i][j];
				}
				
				for (i=0;i<baris;i++)
				for (j=0;j<kolom;j++)
				hasil[i][j]=data1[i][j]-data2[i][j];
				cout<<"\n| Hasil Matriks : "<<endl;
				cout<<"| Matriks A - Matriks B = Hasil Matriks";
				for (i=0;i<baris;i++)
				{
					cout<<'\n';
					for (j=0;j<kolom;j++)
					cout<<setw(4)<<data1[i][j];
					cout<<"      ";
					
					for (j=0;j<kolom;j++)
					cout<<setw(4)<<data2[i][j];
					cout<<"      ";
					
					for (j=0;j<kolom;j++)
					cout<<setw(4)<<hasil[i][j];
					cout<<endl;
				}
				break;
			}
		case 2 :
			{
				cout<<"| Masukkan Baris        : "; cin>>baris;
				cout<<"| Masukkan Kolom        : "; cin>>kolom;
				cout<<"\n";
				cout<<"--------------- Matriks A -----------------"<<endl;
				cout<<"\n";
				
				for (i=0;i<baris;i++)
				{
					for (j=0;j<kolom;j++)
					{
						cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] : "; cin>>data1[i][j];
					}
				
				}
				cout<<"\n";
				cout<<"--------------- Matriks B ------------------"<<endl;
				cout<<"\n";
				
				for (i=0;i<baris;i++)
				{
					for (j=0;j<kolom;j++)
					{
						cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] : "; cin>>data2[i][j];
					}
				}
				
				for (i=0;i<baris;i++)
				{
					
					for (j=0;j<kolom;j++)
					{
							hasil[i][j]=0;
						for (x=0;x<kolom;x++)
						{
							x=data1[i][x]*data2[x][j];
							hasil[i][j]=hasil[i][j]+x;
						}
					}
				}
				cout<<"\n| Hasil Matriks : "<<endl;
				cout<<"| Matriks A x Matriks B = Hasil Matriks";
				for (i=0;i<baris;i++)
				{
					cout<<'\n';
					for (j=0;j<kolom;j++)
					cout<<setw(4)<<data1[i][j];
					cout<<"      ";
					
					for (j=0;j<kolom;j++)
					cout<<setw(4)<<data2[i][j];
					cout<<"      ";
					
					for (j=0;j<kolom;j++)
					{
					cout<<hasil[i][j]<<"\t";
					}
				}
				cout<<"\n";
				break;
			}
		case 3 :
			{
				cout<<"| Masukkan Baris        : "; cin>>baris;
				cout<<"| Masukkan Kolom        : "; cin>>kolom;
				cout<<"\n";
				cout<<"------------------ Matriks Awal --------------------"<<endl;
				cout<<"\n";
				
				for (i=0;i<baris;i++)
				{
					for (j=0;j<kolom;j++)
					{
						cout<<"| Masukkan (baris,kolom) ["<<i<<","<<j<<"] : "; cin>>data1[i][j];
					}
				}
				for (i=0;i<baris;i++)
				{
					for (j=0;j<kolom;j++)
					{
						transpose[j][i]=data1[i][j];
					}
				}
				cout<<"\n";
				cout<<"| Matriks Awal = Matriks Transpose";
				for (i=0;i<baris;i++)
				{
					cout<<"\n";
					for (j=0;j<kolom;j++)
					
					cout<<setw(4)<<data1[i][j];
					cout<<"      ";
			 	
					for (j=0;j<kolom;j++)
					{
						cout<<setw(4)<<transpose[i][j]<<"\t";
					}
				}
				cout<<"\n";
				break;
			}
		}	
	cout<<"\n";
	cout<<"================================================"<<endl;
	
	getch();
}
	
