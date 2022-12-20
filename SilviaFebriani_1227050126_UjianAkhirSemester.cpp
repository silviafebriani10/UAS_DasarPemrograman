#include <iostream>
using namespace std;

int main (){
	
	cout << " ====================================================================================================== " <<endl;
	cout << " Nama \t: Silvia Febriani " <<endl;
	cout << " NIM  \t: 1227050126 " <<endl;
	cout << " Kelas \t: Informatika C " <<endl;
	cout << " Ujian Akhir Smester " <<endl;
	cout << " Soal \t: 1. Input banyaknya baris dan kolom, diisi nilai, tukar kolom jadi baris dan baris jadi kolom! " <<endl;
	cout << " \t  2. Buat pada array 2dimensi menampilkan bilangan yang bisa habis dibagi3,5,7!"<<endl;
	cout << " ================================================================================================== " <<endl;
	cout <<endl;
	
	int baris, kolom, i, j;
	int mat [100] [100];
	
	cout << " Masukkan jumlah baris : ";
    cin >> baris;
    cout << " Masukan jumlah kolom : ";
    cin >> kolom;
    
    cout << endl;
    
	for (i = 0; i < baris; i++){
            for (j = 0; j < kolom; j++)
            {
            	cout <<"A["<<i+1<<"."<<j+1<<"]:";
            	cin >> mat[i][j];
            }
            cout << endl;
    }       
    cout <<" Hasilnya: "<< endl;
    
    for (i = 0; i < baris; i++)
	{
            for (j = 0; j < kolom; j++){
            	cout <<" " <<mat [i][j] << " ";}
            cout << endl;
    }

    cout <<"\n hasil Perubahan kolom jadi baris dan baris jadi kolom: "<< endl;
    
    for (i=0; i < kolom; i++){
    	for (j = 0; j < baris; j++){
    	cout <<" "<< mat [j][i] << " ";
 }
	cout << endl;
}
	cout << "\n Nilai Array yang habis dibagi 3 5 dan 7: "<<endl;
	
		for (i = 0; i < baris; i++){
            for (j = 0; j < kolom; j++)
            {if (mat[i][j]%3 == 0 && mat[i][j]%5 == 0 && mat[i][j]%7 == 0 ){
				cout<<mat [i][j]<<endl;
	cout << endl;
		}
		}
return 0;
}
}