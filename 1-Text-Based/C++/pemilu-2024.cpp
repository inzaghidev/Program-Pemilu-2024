#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> paslonPemilu2024 = {"Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"};
    vector<string> parpolPemilu2024 = {"PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"};

    while (true) {
        cout << "\n======================================" << endl;
        cout << "     PROGRAM PEMILIHAN UMUM 2024     " << endl;
        cout << "--------------------------------------\n";
        cout << "1. Tampilkan Nama Paslon dan Partai\n";
        cout << "2. Pilih Paslon dan Partai\n";
        cout << "======================================\n";

        int choice;
        cout << "Masukkan pilihan Anda : ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n======================================";
            cout << "\nPasangan Calon :" << endl;
            for (int i = 0; i < paslonPemilu2024.size(); ++i) {
                cout << i + 1 << ". " << paslonPemilu2024[i] << endl;
            }

            cout << "\nPartai Politik :" << endl;
            for (int i = 0; i < parpolPemilu2024.size(); ++i) {
                cout << i + 1 << ". " << parpolPemilu2024[i] << endl;
            }
            cout << "======================================" << endl;
        } 
        else if (choice == 2) {
            int paslon_pilihan;
            cout << "\nMasukkan Nomor Paslon yang dipilih : ";
            cin >> paslon_pilihan;
            if (!(1 <= paslon_pilihan && paslon_pilihan <= paslonPemilu2024.size())) {
                cout << "Nomor paslon tidak valid." << endl;
                continue;
            }

            vector<string> partai_koalisi;
            if (paslonPemilu2024[paslon_pilihan - 1] == "Anies-Muhaimin") {
                partai_koalisi = {"PKB", "Nasdem", "PKS", "Ummat"};
            } 
            else if (paslonPemilu2024[paslon_pilihan - 1] == "Ganjar-Mahfud") {
                partai_koalisi = {"PDIP", "Hanura", "Perindo", "PPP"};
            } 
            else if (paslonPemilu2024[paslon_pilihan - 1] == "Prabowo-Gibran") {
                partai_koalisi = {"Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"};
            } 
            else {
                partai_koalisi = parpolPemilu2024;
            }

            cout << "\n======================================" << endl;
            cout << "Partai Politik Koalisi " << paslonPemilu2024[paslon_pilihan - 1] << " :\n";
            for (int i = 0; i < partai_koalisi.size(); ++i) {
                cout << i + 1 << ". " << partai_koalisi[i] << endl;
            }
            cout << "======================================" << endl;

            int partai_pilihan;
            cout << "\nMasukkan Nomor Partai yang dipilih : ";
            cin >> partai_pilihan;
            if (!(1 <= partai_pilihan && partai_pilihan <= partai_koalisi.size())) {
                cout << "Nomor partai tidak valid." << endl;
                continue;
            }

            cout << "\n======================================" << endl;
            cout << "             PILIHAN ANDA             " << endl;
            cout << "--------------------------------------" << endl;
            cout << "Pasangan Calon : " << paslonPemilu2024[paslon_pilihan - 1] << endl;
            cout << "Partai Politik : " << partai_koalisi[partai_pilihan - 1] << endl;
            cout << "======================================" << endl;
        } 
        else {
            cout << "Pilihan tidak valid. Silakan masukkan 1 atau 2." << endl;
            continue;
        }

        char exit_choice;
        cout << "\nApakah Anda ingin keluar? (y/n): ";
        cin >> exit_choice;
        if (exit_choice == 'y' || exit_choice == 'Y') {
            break;
        }
    }

    cout << '\n';

    return 0;
}
