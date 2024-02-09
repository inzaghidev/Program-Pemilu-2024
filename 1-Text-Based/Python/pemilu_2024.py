paslonPemilu2024 = ["Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"]
parpolPemilu2024 = ["PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"]

while True:
    print("\n======================================")
    print("     PROGRAM PEMILIHAN UMUM 2024     ")
    print("--------------------------------------")
    print("1. Tampilkan Nama Paslon dan Partai")
    print("2. Pilih Paslon dan Partai")
    print("======================================")

    choice = int(input("Masukkan pilihan Anda : "))

    if choice == 1:
        print("\n======================================")
        print("Pasangan Calon :")
        for i, paslon in enumerate(paslonPemilu2024, 1):
            print("{}. {}".format(i, paslon))

        print("\nPartai Politik :")
        for i, partai in enumerate(parpolPemilu2024, 1):
            print("{}. {}".format(i, partai))
        print("======================================")
    elif choice == 2:
        # Memilih Paslon
        paslon_pilihan = int(input("\nMasukkan Nomor Paslon yang dipilih : "))
        if not (1 <= paslon_pilihan <= len(paslonPemilu2024)):
            print("Nomor paslon tidak valid.")
            continue

        # Memilih Partai berdasarkan Paslon
        if paslonPemilu2024[paslon_pilihan - 1] == "Anies-Muhaimin":
            partai_koalisi = ["PKB", "Nasdem", "PKS", "Ummat"]
        elif paslonPemilu2024[paslon_pilihan - 1] == "Ganjar-Mahfud":
            partai_koalisi = ["PDIP", "Hanura", "Perindo", "PPP"]
        elif paslonPemilu2024[paslon_pilihan - 1] == "Prabowo-Gibran":
            partai_koalisi = ["Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"]
        else:
            partai_koalisi = parpolPemilu2024

        # Menampilkan Partai Politik yang dapat dipilih
        print("\n======================================")
        print(f"Partai Politik Koalisi {paslonPemilu2024[paslon_pilihan - 1]} :")
        for i, partai in enumerate(partai_koalisi, 1):
            print(f"{i}. {partai}")
        print("======================================")

        # Memilih Partai
        partai_pilihan = int(input("\nMasukkan Nomor Partai yang dipilih : "))
        if not (1 <= partai_pilihan <= len(partai_koalisi)):
            print("Nomor partai tidak valid.")
            continue

        # Menampilkan hasil
        print("\n======================================")
        print("             PILIHAN ANDA             ")
        print("--------------------------------------")
        print("Pasangan Calon : " + paslonPemilu2024[paslon_pilihan - 1])
        print("Partai Politik : " + partai_koalisi[partai_pilihan - 1])
        print("======================================")
    else:
        print("Pilihan tidak valid. Silakan masukkan 1 atau 2.")
        continue

    # Memberikan opsi untuk keluar dari loop
    exit_choice = input("\nApakah Anda ingin keluar? (y/n):").lower()
    if exit_choice == 'y':
        break
print('\n')