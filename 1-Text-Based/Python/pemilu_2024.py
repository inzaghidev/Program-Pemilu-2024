paslonPemilu2024 = ["Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"]
parpolPemilu2024 = ["PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"]

while True:
    print("\nProgram Pemilihan Umum 2024")
    print("1. Tampilkan Nama Paslon dan Partai")
    print("2. Pilih Paslon dan Partai")
    print("---------------------------")

    choice = int(input("Masukkan pilihan Anda : "))

    if choice == 1:
        print("\nPasangan Calon:")
        for i, paslon in enumerate(paslonPemilu2024, 1):
            print("{}. {}".format(i, paslon))

        print("\nPartai Politik:")
        for i, partai in enumerate(parpolPemilu2024, 1):
            print("{}. {}".format(i, partai))
    elif choice == 2:
        # Memilih Paslon
        paslon_choice = int(input("\nMasukkan nomor paslon yang dipilih: "))
        if not (1 <= paslon_choice <= len(paslonPemilu2024)):
            print("Nomor paslon tidak valid.")
            continue

        # Memilih Partai berdasarkan Paslon
        if paslonPemilu2024[paslon_choice - 1] == "Anies-Muhaimin":
            allowed_parties = ["PKB", "Nasdem", "PKS", "Ummat"]
        elif paslonPemilu2024[paslon_choice - 1] == "Ganjar-Mahfud":
            allowed_parties = ["PDIP", "Hanura", "Perindo", "PPP"]
        elif paslonPemilu2024[paslon_choice - 1] == "Prabowo-Gibran":
            allowed_parties = ["Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"]
        else:
            allowed_parties = parpolPemilu2024

        # Menampilkan Partai Politik yang dapat dipilih
        print("\nPartai Politik:")
        for i, partai in enumerate(allowed_parties, 1):
            print(f"{i}. {partai}")

        # Memilih Partai
        partai_choice = int(input("\nMasukkan nomor partai yang dipilih: "))
        if not (1 <= partai_choice <= len(allowed_parties)):
            print("Nomor partai tidak valid.")
            continue

        # Menampilkan hasil
        print(f"Anda memilih {paslonPemilu2024[paslon_choice - 1]} dari partai {allowed_parties[partai_choice - 1]}")
    else:
        print("Pilihan tidak valid. Silakan masukkan 1 atau 2.")
        continue

    # Memberikan opsi untuk keluar dari loop
    exit_choice = input("\nApakah Anda ingin keluar? (y/n):").lower()
    if exit_choice == 'y':
        break
print('\n')
