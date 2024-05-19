#include "header.h"

int main() {
    simpul L = NULL;
    char choose;
    do {
    	system("cls");
        cout <<"=========================================\n"
            << "  OPERASI PADA SINGLE LINKED LIST \n"
            << "=========================================\n"
            << " [1] Tambah Data Mahasiswa \n"
            << " [2] Tambah Kehadiran \n"
            << " [3] Cetak Data Mahasiswa dan Kehadiran\n"
            << " [0] Keluar \n"
            << "=========================================\n"
            << "Masukan pilihan : ";
        cin >> choose;
        cout<<"------------------------------------"<<endl;
        switch (choose) {
        case '1':
            {
                string nama;
                cout << "Masukkan Nama Mahasiswa: ";
                cin >> nama;
                Sisip(L, nama);
                cout << "Data " << nama << " ditambahkan." << endl;
                cout<<endl;
                cout<<"------------------------------------"<<endl;
                system("pause");
                break;
            }
        case '2':
            {
                TambahKehadiran(L);
                cout<<"------------------------------------"<<endl;
                system("pause");
                break;
            }
        case '3':
        	{
            Cetak(L);
            cout<<"------------------------------------"<<endl;
            system("pause");
            break;
        }
        case '0':
        	{
        		break;
			}
        default:
        	{
            cout << "Pilihan tidak tersedia"<<endl<<endl;
            cout<<"------------------------------------"<<endl;
            system("pause");
            break;}
        }
    } while (choose != '0');
    return 0;
}

