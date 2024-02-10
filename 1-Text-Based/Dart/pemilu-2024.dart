import 'dart:io';

void main() {
  final List<String> paslonPemilu2024 = ["Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"];
  final List<String> parpolPemilu2024 = ["PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"];

  while (true) {
    print("\n======================================");
    print("     PROGRAM PEMILIHAN UMUM 2024     ");
    print("--------------------------------------");
    print("1. Tampilkan Nama Paslon dan Partai");
    print("2. Pilih Paslon dan Partai");
    print("======================================");

    stdout.write("Masukkan pilihan Anda : ");
    int choice = int.parse(stdin.readLineSync()!);

    if (choice == 1) {
      print("\n======================================");
      print("Pasangan Calon :");
      for (var i = 0; i < paslonPemilu2024.length; i++) {
        print("${i + 1}. ${paslonPemilu2024[i]}");
      }

      print("\nPartai Politik :");
      for (var i = 0; i < parpolPemilu2024.length; i++) {
        print("${i + 1}. ${parpolPemilu2024[i]}");
      }
      print("======================================");
    } else if (choice == 2) {
      stdout.write("\nMasukkan Nomor Paslon yang dipilih : ");
      int paslon_pilihan = int.parse(stdin.readLineSync()!);
      if (!(1 <= paslon_pilihan && paslon_pilihan <= paslonPemilu2024.length)) {
        print("Nomor paslon tidak valid.");
        continue;
      }

      List<String> partai_koalisi;
      if (paslonPemilu2024[paslon_pilihan - 1] == "Anies-Muhaimin") {
        partai_koalisi = ["PKB", "Nasdem", "PKS", "Ummat"];
      } else if (paslonPemilu2024[paslon_pilihan - 1] == "Ganjar-Mahfud") {
        partai_koalisi = ["PDIP", "Hanura", "Perindo", "PPP"];
      } else if (paslonPemilu2024[paslon_pilihan - 1] == "Prabowo-Gibran") {
        partai_koalisi = ["Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"];
      } else {
        partai_koalisi = parpolPemilu2024;
      }

      print("\n======================================");
      print("Partai Politik Koalisi ${paslonPemilu2024[paslon_pilihan - 1]} :");
      for (var i = 0; i < partai_koalisi.length; i++) {
        print("${i + 1}. ${partai_koalisi[i]}");
      }
      print("======================================");

      stdout.write("\nMasukkan Nomor Partai yang dipilih : ");
      int partai_pilihan = int.parse(stdin.readLineSync()!);
      if (!(1 <= partai_pilihan && partai_pilihan <= partai_koalisi.length)) {
        print("Nomor partai tidak valid.");
        continue;
      }

      print("\n======================================");
      print("             PILIHAN ANDA             ");
      print("--------------------------------------");
      print("Pasangan Calon : ${paslonPemilu2024[paslon_pilihan - 1]}");
      print("Partai Politik : ${partai_koalisi[partai_pilihan - 1]}");
      print("======================================");
    } else {
      print("Pilihan tidak valid. Silakan masukkan 1 atau 2.");
      continue;
    }

    // Memberikan opsi untuk keluar dari loop
    stdout.write("\nApakah Anda ingin keluar? (y/n): ");
    String exit_choice = stdin.readLineSync()!.toLowerCase();
    if (exit_choice == 'y') {
      break;
    }
  }

  print('\n');
}
