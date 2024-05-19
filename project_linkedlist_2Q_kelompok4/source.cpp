#include "header.h"
int i;
int bertemu=0;

void Sisip(simpul& L, string nama) {
	simpul baru = new Mahasiswa;
	baru->jumlahhadir=-1;
	baru->nama = nama;
	for (int i = 0; i < 14; ++i) {
		baru->kehadiran[i] = 0;
	}
	baru->next = NULL;
	if (L == NULL)
		L = baru;
	else {
		baru->next = L;
		L = baru;
	}
}

void TambahKehadiran(simpul& L) {
	if (L == NULL) {
		cout << "Linked List Kosong." << endl<<endl;
		return;
	}
	char tanya;
	simpul bantu = L;
	if (bertemu<14) {
		cout<<"Pertemuan Ke-"<<bertemu+1<<endl;
	} else {
		cout<<"Perkuliahan semester ini sudah selesai !!!"<<endl;
	}
	cout<<endl;
	while ((bantu != NULL) && (bertemu<14)) {
		cout<<"Apakah "<<bantu->nama<<" Hadir?(Y/N) : ";
		do {
			cin>>tanya;
			if (tanya=='Y') {
				bantu->jumlahhadir=bantu->jumlahhadir + 1;
				bantu->kehadiran[bantu->jumlahhadir]=1;
				cout<<"Hadir"<<endl;
			} else if (tanya=='N') {
				cout<<"Tidak Hadir"<<endl;
			}
		} while((tanya!='Y') && (tanya!='N'));
			bantu=bantu->next;
		cout<<endl;
	}
	bertemu=bertemu+1;
}

void Cetak(simpul L) {
	if (L == NULL) {
		cout << "Linked List Kosong." << endl<<endl;
		return;
	}
	simpul bantu = L;
	cout << "Data Mahasiswa dan Kehadiran:" << endl;
	cout<<endl;
	while (bantu != NULL) {
		cout << "NAMA            : " << bantu->nama << endl;
		cout << "KEHADIRAN       : ";
		for (int i = 0; i < 14; ++i) {
			cout << bantu->kehadiran[i] << " ";
		}
		cout << endl;
		cout<<"TOTAL KEHADIRAN : "<<bantu->jumlahhadir+1<<endl;
		cout<<endl;
		bantu = bantu->next;

	}
}

