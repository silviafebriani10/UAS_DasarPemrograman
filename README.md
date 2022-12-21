# Ujian Akhir Semester 
  
  <br>Mata Kuliah 	: Dasar Pemrograman
  <br> Nama		: Silvia Febriani
  <br>NIM		: 1227050126
  <br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/)

## Deskripsi Umum
  Pengertian Definisi Array 2 Dimensi
  Array 2 dimensi adalah sebutan untuk array yang penomoran index-nya menggunakan 2 buah angka.
  Array adalah tipe data terstruktur yang berguna untuk menyimpan sejumlah data yang bertipe sama.
  
## Source Code
  	#include<iostream>
	using namespace std;
	
	int main()
	{
	int m, n;

	cout << "UJIAN AKHIR SEMESTER"<<endl;
	cout << "=================================="<<endl;
	cout << "Mata Kuliah	: Dasar Pemrograman"<<endl;
	cout << "Nama		: Silvia Febriani"<<endl;
	cout << "NIM		: 1227050126"<<endl;
	cout << "Jurusan		: Teknik Informatika-1C"<<endl;

	cout << "==============================================================="<<endl<<endl;

	cout << "No.1 Mengubah baris jadi kolom dan kolom jadi baris (transpose)"<< endl;
	cout << "==============================================================="<<endl;
	cout << "Masukkan jumlah baris matriks: ";
	cin >> m;
	cout << "Masukkan jumlah kolom matriks: ";
	cin >> n;

	int matriks[m][n], transpose[n][m];

	cout << "Masukkan Nilai-Nilai Matriks\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<"Baris ke "<<i+1<<", Kolom ke "<<j+1<<" : ";
			cin  >> matriks[i][j];
		}
	}

	cout << endl;
	cout << "Hasil dari matriks yang diinputkan :\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matriks[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			transpose[j][i] = matriks[i][j];
		}
	}

	cout << "Hasil Transpose Matriks: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << transpose[i][j] << "\t";
		}
		cout << endl;
	}
	cout <<endl;

	//buat pada array 2 dimensi angka-angka, menampilkan bilangan yang habis dibagi 3, 5, dan 7  
	cout << "No.2 Menampilkan bilangan yang habis dibagi 3, 5 dan 7" << endl;
	cout << "======================================================="<<endl;
	cout << "Masukkan jumlah baris matriks: ";
	cin >> m;
	cout << "Masukkan jumlah kolom matriks: ";
	cin >> n;

	cout << "Masukkan Nilai-Nilai\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<"("<<i+1<<","<<j+1<<") : ";
			cin  >> matriks[i][j];
		}
	}
	cout << endl;

	bool cek = true;
	cout << "Nilai Array yang habis dibagi 3, 5, 7 yaitu :";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matriks[i][j]%3 == 0 && matriks[i][j]%5 == 0 && matriks[i][j]%7 == 0 )
			{
				cout << " " << matriks[i][j];
				cek = false;
			}
		}
	}
	if (cek)
	{
		cout << " Nilai yang anda input bisa dibagi 3, 5 dan 7" <<endl;
	}
	return 0;
	}
  
## Output
  UJIAN AKHIR SEMESTER
	===============================================================
 	Mata Kuliah    : Dasar Pemrograman
	Nama            : Silvia Febriani
	NIM             : 1227050126
	Jurusan         : Teknik Informatika-1C
	===============================================================
	No.1 Mengubah baris jadi kolom dan kolom jadi baris (transpose)
	===============================================================
	Masukkan jumlah baris matriks: 3
	Masukkan jumlah kolom matriks: 2
	Masukkan Nilai-Nilai Matriks
	Baris ke 1, Kolom ke 1 : 23
	Baris ke 1, Kolom ke 2 : 45
	Baris ke 2, Kolom ke 1 : 67
	Baris ke 2, Kolom ke 2 : 90
	Baris ke 3, Kolom ke 1 : 10
	Baris ke 3, Kolom ke 2 : 12

	Hasil dari matriks yang diinputkan :
	23      45
	67      90
	10      12

	Hasil Transpose Matriks:
	23      67      10
	45      90      12

	No.2 Menampilkan bilangan yang habis dibagi 3, 5 dan 7
	=======================================================
	Masukkan jumlah baris matriks: 4
	Masukkan jumlah kolom matriks: 2
	Masukkan Nilai-Nilai
	(1,1) : 176
	(1,2) : 115
	(2,1) : 315
	(2,2) : 105
	(3,1) : 415
	(3,2) : 515
	(4,1) : 505
	(4,2) : 950

	Nilai Array yang habis dibagi 3, 5, 7 yaitu : 315 105
	--------------------------------
	Process exited after 64.19 seconds with return value 0
	Press any key to continue . . .
