#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Mahasiswa {
    string nama;
    int kehadiran[14];
    Mahasiswa* next;
    int jumlahhadir;
};

typedef Mahasiswa* simpul;

void Sisip(simpul& L, string nama);
void TambahKehadiran(simpul& L);
void Cetak(simpul L);



