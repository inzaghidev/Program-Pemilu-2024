#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char *paslonPemilu2024[] = {"Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"};
    char *parpolPemilu2024[] = {"PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"};

    while (true) {
        printf("\n======================================\n");
        printf("     PROGRAM PEMILIHAN UMUM 2024     \n");
        printf("--------------------------------------\n");
        printf("1. Tampilkan Nama Paslon dan Partai\n");
        printf("2. Pilih Paslon dan Partai\n");
        printf("======================================\n");

        int choice;
        printf("Masukkan pilihan Anda : ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\n======================================\n");
            printf("Pasangan Calon :\n");
            for (int i = 0; i < sizeof(paslonPemilu2024) / sizeof(paslonPemilu2024[0]); ++i) {
                printf("%d. %s\n", i + 1, paslonPemilu2024[i]);
            }

            printf("\nPartai Politik :\n");
            for (int i = 0; i < sizeof(parpolPemilu2024) / sizeof(parpolPemilu2024[0]); ++i) {
                printf("%d. %s\n", i + 1, parpolPemilu2024[i]);
            }
            printf("======================================\n");
        } else if (choice == 2) {
            int paslon_pilihan;
            printf("\nMasukkan Nomor Paslon yang dipilih : ");
            scanf("%d", &paslon_pilihan);
            if (!(1 <= paslon_pilihan && paslon_pilihan <= sizeof(paslonPemilu2024) / sizeof(paslonPemilu2024[0]))) {
                printf("Nomor paslon tidak valid.\n");
                continue;
            }

            char *partai_koalisi[10]; // Tentukan ukuran maksimal array partai_koalisi
            if (strcmp(paslonPemilu2024[paslon_pilihan - 1], "Anies-Muhaimin") == 0) {
                char *temp[] = {"PKB", "Nasdem", "PKS", "Ummat"};
                for (int i = 0; i < sizeof(temp) / sizeof(temp[0]); ++i) {
                    partai_koalisi[i] = temp[i];
                }
            } else if (strcmp(paslonPemilu2024[paslon_pilihan - 1], "Ganjar-Mahfud") == 0) {
                char *temp[] = {"PDIP", "Hanura", "Perindo", "PPP"};
                for (int i = 0; i < sizeof(temp) / sizeof(temp[0]); ++i) {
                    partai_koalisi[i] = temp[i];
                }
            } else if (strcmp(paslonPemilu2024[paslon_pilihan - 1], "Prabowo-Gibran") == 0) {
                char *temp[] = {"Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"};
                for (int i = 0; i < sizeof(temp) / sizeof(temp[0]); ++i) {
                    partai_koalisi[i] = temp[i];
                }
            } else {
                for (int i = 0; i < sizeof(parpolPemilu2024) / sizeof(parpolPemilu2024[0]); ++i) {
                    partai_koalisi[i] = parpolPemilu2024[i];
                }
            }

            printf("\n======================================\n");
            printf("Partai Politik Koalisi %s :\n", paslonPemilu2024[paslon_pilihan - 1]);
            for (int i = 0; i < sizeof(partai_koalisi) / sizeof(partai_koalisi[0]); ++i) {
                if (partai_koalisi[i] != NULL) { // Periksa apakah ada partai yang tidak null
                    printf("%d. %s\n", i + 1, partai_koalisi[i]);
                }
            }
            printf("======================================\n");

            int partai_pilihan;
            printf("\nMasukkan Nomor Partai yang dipilih : ");
            scanf("%d", &partai_pilihan);
            if (!(1 <= partai_pilihan && partai_pilihan <= sizeof(partai_koalisi) / sizeof(partai_koalisi[0]))) {
                printf("Nomor partai tidak valid.\n");
                continue;
            }

            printf("\n======================================\n");
            printf("             PILIHAN ANDA             \n");
            printf("--------------------------------------\n");
            printf("Pasangan Calon : %s\n", paslonPemilu2024[paslon_pilihan - 1]);
            printf("Partai Politik : %s\n", partai_koalisi[partai_pilihan - 1]);
            printf("======================================\n");
        } else {
            printf("Pilihan tidak valid. Silakan masukkan 1 atau 2.\n");
            continue;
        }

        char exit_choice;
        printf("\nApakah Anda ingin keluar? (y/n): ");
        scanf(" %c", &exit_choice);
        if (exit_choice == 'y' || exit_choice == 'Y') {
            break;
        }
    }

    printf("\n");

    return 0;
}
