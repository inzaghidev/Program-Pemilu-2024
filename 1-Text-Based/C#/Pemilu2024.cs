using System;

class Pemilu2024
{
    private static readonly string[] paslonPemilu2024 = { "Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud" };
    private static readonly string[] parpolPemilu2024 = { "PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat" };

    static void Main(string[] args)
    {
        while (true)
        {
            Console.WriteLine("\n======================================");
            Console.WriteLine("     PROGRAM PEMILIHAN UMUM 2024     ");
            Console.WriteLine("--------------------------------------");
            Console.WriteLine("1. Tampilkan Nama Paslon dan Partai");
            Console.WriteLine("2. Pilih Paslon dan Partai");
            Console.WriteLine("======================================");

            Console.Write("Masukkan pilihan Anda : ");
            int choice = int.Parse(Console.ReadLine());

            if (choice == 1)
            {
                Console.WriteLine("\n======================================");
                Console.WriteLine("Pasangan Calon :");
                for (int i = 0; i < paslonPemilu2024.Length; i++)
                {
                    Console.WriteLine((i + 1) + ". " + paslonPemilu2024[i]);
                }

                Console.WriteLine("\nPartai Politik :");
                for (int i = 0; i < parpolPemilu2024.Length; i++)
                {
                    Console.WriteLine((i + 1) + ". " + parpolPemilu2024[i]);
                }
                Console.WriteLine("======================================");
            }
            else if (choice == 2)
            {
                Console.Write("\nMasukkan Nomor Paslon yang dipilih : ");
                int paslon_pilihan = int.Parse(Console.ReadLine());
                if (!(1 <= paslon_pilihan && paslon_pilihan <= paslonPemilu2024.Length))
                {
                    Console.WriteLine("Nomor paslon tidak valid.");
                    continue;
                }

                string[] partai_koalisi;
                if (paslonPemilu2024[paslon_pilihan - 1].Equals("Anies-Muhaimin"))
                {
                    partai_koalisi = new string[] { "PKB", "Nasdem", "PKS", "Ummat" };
                }
                else if (paslonPemilu2024[paslon_pilihan - 1].Equals("Ganjar-Mahfud"))
                {
                    partai_koalisi = new string[] { "PDIP", "Hanura", "Perindo", "PPP" };
                }
                else if (paslonPemilu2024[paslon_pilihan - 1].Equals("Prabowo-Gibran"))
                {
                    partai_koalisi = new string[] { "Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI" };
                }
                else
                {
                    partai_koalisi = parpolPemilu2024;
                }

                Console.WriteLine("\n======================================");
                Console.WriteLine("Partai Politik Koalisi " + paslonPemilu2024[paslon_pilihan - 1] + " :");
                for (int i = 0; i < partai_koalisi.Length; i++)
                {
                    Console.WriteLine((i + 1) + ". " + partai_koalisi[i]);
                }
                Console.Write("======================================");

                Console.Write("\nMasukkan Nomor Partai yang dipilih : ");
                int partai_pilihan = int.Parse(Console.ReadLine());
                if (!(1 <= partai_pilihan && partai_pilihan <= partai_koalisi.Length))
                {
                    Console.WriteLine("Nomor partai tidak valid.");
                    continue;
                }

                Console.WriteLine("\n======================================");
                Console.WriteLine("             PILIHAN ANDA             ");
                Console.WriteLine("--------------------------------------");
                Console.WriteLine("Pasangan Calon : " + paslonPemilu2024[paslon_pilihan - 1]);
                Console.WriteLine("Partai Politik : " + partai_koalisi[partai_pilihan - 1]);
                Console.WriteLine("======================================");
            }
            else
            {
                Console.WriteLine("Pilihan tidak valid. Silakan masukkan 1 atau 2.");
                continue;
            }

            Console.Write("\nApakah Anda ingin keluar? (y/n): ");
            string exit_choice = Console.ReadLine().ToLower();
            if (exit_choice.Equals("y"))
            {
                break;
            }
        }

        Console.WriteLine("\n");
    }
}