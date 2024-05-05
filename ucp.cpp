//1. float mtk; string status; int nama;
//2. Conditional Statement = int main{int x=10; if(x > 5){cout << "x lebih besar dari 5" << endl;}return 0;}
//3. Struct = struct mahasiswa{string nim;string nama;int umur;}; int main(){mahasiswa mhs;cout << "Nomor Mahasiswa  = ";cin >> mhs.nim;cout << "Nama Mahasiswa   = ";cin >> mhs.nama;cout << "Umur Mahasiswa   = ";cin >> mhs.umur;cout << endl;cout << "\n NIM    = " << mhs.nim;cout << "\n Nama   = " << mhs.nama;cout << "\n Umur   = " << mhs.umur;};
//4. Prosedur = void Nilai(){cout << "100" << endl;} int main(){Nilai(); return 0;}
//   Fungsi = int penjumlahan(int x, int y){return x + y;} int main(){int hasil = penjumlahan(5,9); cout << "Hasil Penjumlahan = " << hasil << endl}
//5. Looping = int main (){for(int i = 0; i < 5 ; ++i){cout << "i " << endl;} return 0;}
#include <iostream>
#include <time.h> 
using namespace std;
 
int main(){ 
 float Matematika, BahasaInggris , rerata;
 string Status;
cout << "Masukan Nilai Matematika : ";
cin >> Matematika;
cout << "Masukan Nilai Bahasa Inggris : ";
cin >> BahasaInggris;


rerata = (Matematika + BahasaInggris ) / 2 ;
 if (rerata >= 70)
{
Status = "Lulus";
}
else if (Matematika > 80)
{
Status = "Lulus";
}
else
{
Status = "Gagal";
}
cout << "Rerata = " << rerata << endl;

cout << "Status kelulusan = " << Status << endl;
}