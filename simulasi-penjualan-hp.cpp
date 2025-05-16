#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void toko_handphone() {
    cout << "\t ================================================================\n";
    cout << "\t |                    Toko Abadi Seluler                        |" << endl;
    cout << "\t ================================================================\n";
    cout << "\t |    Kategori   |             Nama Barang                      |" << endl;
    cout << "\t ================================================================\n";
    cout << "\t |       HP      | ASUS, VIVO                                   |" << endl;
    cout << "\t |  ACCESSORIES  | Tempered Glass, Cooling Pad, Charger         |\n";
    cout << "\t |      USB      | USBC, Micro USB, Lightning                   |" << endl;
    cout << "\t ================================================================\n";
    cout << endl;
}

int main() {
    struct {
        string nama_barang, kategori;
        char kode;
        long jmlh, harga, total;
    } Data[10];

    string nama;
    int i, n;
    char lagi;

atas:
    toko_handphone();

    cout << " Masukan Nama Pembeli     : "; getline(cin, nama);
    cout << " Masukan Jumlah Pembelian : "; cin >> n; cin.ignore();
    cout << endl;

    for (i = 1; i <= n; i++) {
        cout << " Item ke-" << i << endl;
        cout << " Kode Kategori (A/B/C) : "; cin >> Data[i].kode;
        cout << " Nama Barang           : "; cin >> Data[i].kategori;
        cout << " Jumlah Barang         : "; cin >> Data[i].jmlh;
        cout << endl;

        if (Data[i].kode == 'A' || Data[i].kode == 'a') {
            Data[i].kode = 'A';
            if (Data[i].kategori == "ASUS" || Data[i].kategori == "Asus" || Data[i].kategori == "asus") {
                Data[i].kategori = "ASUS";
                Data[i].nama_barang = "ASUS ZENFONE";
                Data[i].harga = 2500000;
            } else if (Data[i].kategori == "VIVO" || Data[i].kategori == "Vivo" || Data[i].kategori == "vivo") {
                Data[i].kategori = "VIVO";
                Data[i].nama_barang = "VIVO Y21T";
                Data[i].harga = 3200000;
            } else {
                Data[i].nama_barang = "Invalid";
                Data[i].harga = 0;
            }
        } else if (Data[i].kode == 'B' || Data[i].kode == 'b') {
            Data[i].kode = 'B';
            if (Data[i].kategori == "TEMPER" || Data[i].kategori == "Temper" || Data[i].kategori == "temper") {
                Data[i].kategori = "TEMPERED GLASS";
                Data[i].nama_barang = "Hardcase Doraemon";
                Data[i].harga = 5000;
            } else if (Data[i].kategori == "COOLING" || Data[i].kategori == "Cooling" || Data[i].kategori == "cooling") {
                Data[i].kategori = "COOLING PAD";
                Data[i].nama_barang = "Radiator DL01";
                Data[i].harga = 139000;
            } else if (Data[i].kategori == "CHARGER" || Data[i].kategori == "Charger" || Data[i].kategori == "charger") {
                Data[i].kategori = "CHARGER";
                Data[i].nama_barang = "ROBOT";
                Data[i].harga = 50000;
            } else {
                Data[i].nama_barang = "Invalid";
                Data[i].harga = 0;
            }
        } else if (Data[i].kode == 'C' || Data[i].kode == 'c') {
            Data[i].kode = 'C';
            if (Data[i].kategori == "USBC" || Data[i].kategori == "usbc") {
                Data[i].kategori = "TYPE C";
                Data[i].nama_barang = "BASEUS";
                Data[i].harga = 130000;
            } else if (Data[i].kategori == "MICRO" || Data[i].kategori == "micro") {
                Data[i].kategori = "MICRO";
                Data[i].nama_barang = "JOYSEUS";
                Data[i].harga = 40000;
            } else if (Data[i].kategori == "LIGHTNING" || Data[i].kategori == "lightning") {
                Data[i].kategori = "LIGHTNING";
                Data[i].nama_barang = "VIVAN";
                Data[i].harga = 120000;
            } else {
                Data[i].nama_barang = "Invalid";
                Data[i].harga = 0;
            }
        } else {
            Data[i].nama_barang = "Invalid";
            Data[i].harga = 0;
        }

        Data[i].total = Data[i].harga * Data[i].jmlh;
    }

    cout << "\t ===========================" << endl;
    cout << "\t      Toko Abadi Seluler" << endl;
    cout << "\t ===========================" << endl;
    cout << "\t Nama Pembeli     : " << nama << endl;
    cout << "\t Jumlah Pembelian : " << n << endl;
    cout << "\t |   Kode   |  Kategori  |   Nama Barang   |  Harga  |  Jumlah  |  Total  |" << endl;
    cout << endl;

    for (i = 1; i <= n; i++) {
        cout << setw(8) << Data[i].kode;
        cout << setw(12) << Data[i].kategori;
        cout << setw(18) << Data[i].nama_barang;
        cout << setw(10) << Data[i].harga;
        cout << setw(9) << Data[i].jmlh;
        cout << setw(10) << Data[i].total;
        cout << endl;
    }

    cout << "\n ==================================================" << endl;
    cout << "Ingin input data kembali [Y/T] : "; cin >> lagi;

    if (lagi == 'Y' || lagi == 'y') {
        cin.ignore();
        goto atas;
    }

    return 0;
}
