import java.util.Scanner;

public class Pemilu2024 {
    private static final String[] paslonPemilu2024 = {"Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"};
    private static final String[] parpolPemilu2024 = {"PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"};

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\n======================================");
            System.out.println("     PROGRAM PEMILIHAN UMUM 2024     ");
            System.out.println("--------------------------------------");
            System.out.println("1. Tampilkan Nama Paslon dan Partai");
            System.out.println("2. Pilih Paslon dan Partai");
            System.out.println("======================================");

            System.out.print("Masukkan pilihan Anda : ");
            int choice = scanner.nextInt();

            if (choice == 1) {
                System.out.print("\n======================================");
                System.out.println("\nPasangan Calon :");
                for (int i = 0; i < paslonPemilu2024.length; i++) {
                    System.out.println((i + 1) + ". " + paslonPemilu2024[i]);
                }

                System.out.println("\nPartai Politik :");
                for (int i = 0; i < parpolPemilu2024.length; i++) {
                    System.out.println((i + 1) + ". " + parpolPemilu2024[i]);
                }
                System.out.println("======================================");
            } else if (choice == 2) {
                System.out.print("\nMasukkan Nomor Paslon yang dipilih : ");
                int paslon_pilihan = scanner.nextInt();
                if (!(1 <= paslon_pilihan && paslon_pilihan <= paslonPemilu2024.length)) {
                    System.out.println("Nomor paslon tidak valid.");
                    continue;
                }

                String[] partai_koalisi;
                if (paslonPemilu2024[paslon_pilihan - 1].equals("Anies-Muhaimin")) {
                    partai_koalisi = new String[]{"PKB", "Nasdem", "PKS", "Ummat"};
                } else if (paslonPemilu2024[paslon_pilihan - 1].equals("Ganjar-Mahfud")) {
                    partai_koalisi = new String[]{"PDIP", "Hanura", "Perindo", "PPP"};
                } else if (paslonPemilu2024[paslon_pilihan - 1].equals("Prabowo-Gibran")) {
                    partai_koalisi = new String[]{"Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"};
                } else {
                    partai_koalisi = parpolPemilu2024;
                }

                System.out.println("\n======================================");
                System.out.println("Partai Politik Koalisi " + paslonPemilu2024[paslon_pilihan - 1] + " :");
                for (int i = 0; i < partai_koalisi.length; i++) {
                    System.out.println((i + 1) + ". " + partai_koalisi[i]);
                }
                System.out.print("======================================");

                System.out.print("\nMasukkan Nomor Partai yang dipilih : ");
                int partai_pilihan = scanner.nextInt();
                if (!(1 <= partai_pilihan && partai_pilihan <= partai_koalisi.length)) {
                    System.out.println("Nomor partai tidak valid.");
                    continue;
                }

                System.out.println("\n======================================");
                System.out.println("             PILIHAN ANDA             ");
                System.out.println("--------------------------------------");
                System.out.println("Pasangan Calon : " + paslonPemilu2024[paslon_pilihan - 1]);
                System.out.println("Partai Politik : " + partai_koalisi[partai_pilihan - 1]);
                System.out.println("======================================");
            } else {
                System.out.println("Pilihan tidak valid. Silakan masukkan 1 atau 2.");
                continue;
            }

            System.out.print("\nApakah Anda ingin keluar? (y/n): ");
            String exit_choice = scanner.next().toLowerCase();
            if (exit_choice.equals("y")) {
                break;
            }
        }

        System.out.println("\n");
    }
}
