#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "Ini adalah hari pertamamu masuk SMA." << endl;
    cout << "Tiba-tiba kamu menabrak seorang siswi dan kalian berdua terjatuh ke lantai." << endl;
    cout << "Apa yang akan kamu lakukan? (Pilih opsi)" << endl;
    cout << "1. Bantu dia berdiri dan minta maaf" << endl;
    cout << "2. Panik dan langsung kabur" << endl;
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;

    cout << endl;

    if (pilihan == 1) {
        cout << "Kamu membantunya merapikan buku-bukunya yang jatuh." << endl;
        cout << "Siswi: 'Makasih ya! Kenalin, namaku Maya. Ayo ke kelas bareng.'" << endl;
    
        cout << "\nApa jawabanmu?" << endl;
        cout << "1. 'Boleh, ayo jalan duluan!'" << endl;
        cout << "2. 'Maaf, aku mau ke toilet dulu.'" << endl;
        cout << "Masukkan pilihan (1 atau 2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nKalian berjalan ke kelas bersama. Good ending!" << endl;
        } else {
            cout << "\nKamu meninggalkannya dan malah tersesat mencari kelas. Waduh!" << endl;
        }

    } else if (pilihan == 2) {
        cout << "Kamu langsung berdiri dan berlari kencang menyusuri koridor." << endl;
        cout << "Kamu sampai di kelas dengan selamat, tapi rasanya malu banget." << endl;
        
    } else {
        cout << "Pilihan tidak valid! Game over." << endl;
    }

    return 0;
}
