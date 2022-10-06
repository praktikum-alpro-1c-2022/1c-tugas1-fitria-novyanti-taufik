#include <iostream>
using namespace std;

int main(){

//TUGAS 1
    string Nama = "Fitria Novyanti Taufik",
            NPM = "2210631170021",
          Kelas = "1C Informatika",
           Hobi = "Mendengarkan Musik dan Nonton drakor",
       CitaCita = "Mau menjadi seperti Nam Do-san";
    int    Umur = 17;


    cout << "---------------------------------------------" << endl << endl;
    cout << "               IDENTITAS DIRI                " << endl;
    cout << "---------------------------------------------" << endl << endl;
    cout << "  Nama       : " << Nama                       << endl;
    cout << "  NPM        : " << NPM                        << endl;
    cout << "  Umur       : " << Umur                       << endl;
    cout << "  Kelas      : " << Kelas                      << endl;
    cout << "  Hobi       : " << Hobi                       << endl;
    cout << "  Cita Cita  : " << CitaCita                   << endl;
    cout << "---------------------------------------------" << endl << endl;


//TUGAS 2
    // Menggunakan Variabel Sementara
    int a = 2;
    int b = 8;

    int c = a;
    a = b;
    b = c;


    cout << "Menggunakan Variabel Sementara" << endl;
    cout << "Hasil a = " << a << endl;
    cout << "Hasil b = " << b << endl;


    //Tidak menggunakan Variabel sementara
    int a1 = 4;
    int b1 = 7;

    a1 = a1 - b1;
    b1 = a1 + b1;
    a1 = b1 - a1;

    cout << "Tidak menggunakan Variabel Sementara" << endl;
    cout << "Hasil a = " << a1 << endl;
    cout << "Hasil b = " << b1 << endl;


return 0;
}
