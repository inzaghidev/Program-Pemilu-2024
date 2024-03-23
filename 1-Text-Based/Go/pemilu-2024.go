package main

import (
    "fmt"
)

var paslonPemilu2024 = []string{"Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"}
var parpolPemilu2024 = []string{"PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"}

func main() {
    for {
        fmt.Println("\n======================================")
        fmt.Println("     PROGRAM PEMILIHAN UMUM 2024     ")
        fmt.Println("--------------------------------------")
        fmt.Println("1. Tampilkan Nama Paslon dan Partai")
        fmt.Println("2. Pilih Paslon dan Partai")
        fmt.Println("======================================")

        var choice int
        fmt.Print("Masukkan pilihan Anda : ")
        fmt.Scanln(&choice)

        if choice == 1 {
            fmt.Println("\n======================================")
            fmt.Println("Pasangan Calon :")
            for i, paslon := range paslonPemilu2024 {
                fmt.Printf("%d. %s\n", i+1, paslon)
            }

            fmt.Println("\nPartai Politik :")
            for i, partai := range parpolPemilu2024 {
                fmt.Printf("%d. %s\n", i+1, partai)
            }
            fmt.Println("======================================")
        } else if choice == 2 {
            var paslonPilihan int
            fmt.Print("\nMasukkan Nomor Paslon yang dipilih : ")
            fmt.Scanln(&paslonPilihan)
            if !(1 <= paslonPilihan && paslonPilihan <= len(paslonPemilu2024)) {
                fmt.Println("Nomor paslon tidak valid.")
                continue
            }

            var partaiKoalisi []string
            switch paslonPemilu2024[paslonPilihan-1] {
            case "Anies-Muhaimin":
                partaiKoalisi = []string{"PKB", "Nasdem", "PKS", "Ummat"}
            case "Ganjar-Mahfud":
                partaiKoalisi = []string{"PDIP", "Hanura", "Perindo", "PPP"}
            case "Prabowo-Gibran":
                partaiKoalisi = []string{"Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"}
            default:
                partaiKoalisi = parpolPemilu2024
            }

            fmt.Println("\n======================================")
            fmt.Printf("Partai Politik Koalisi %s :\n", paslonPemilu2024[paslonPilihan-1])
            for i, partai := range partaiKoalisi {
                fmt.Printf("%d. %s\n", i+1, partai)
            }
            fmt.Println("======================================")

            var partaiPilihan int
            fmt.Print("\nMasukkan Nomor Partai yang dipilih : ")
            fmt.Scanln(&partaiPilihan)
            if !(1 <= partaiPilihan && partaiPilihan <= len(partaiKoalisi)) {
                fmt.Println("Nomor partai tidak valid.")
                continue
            }

            fmt.Println("\n======================================")
            fmt.Println("             PILIHAN ANDA             ")
            fmt.Println("--------------------------------------")
            fmt.Printf("Pasangan Calon : %s\n", paslonPemilu2024[paslonPilihan-1])
            fmt.Printf("Partai Politik : %s\n", partaiKoalisi[partaiPilihan-1])
            fmt.Println("======================================")
        } else {
            fmt.Println("Pilihan tidak valid. Silakan masukkan 1 atau 2.")
            continue
        }

        var exitChoice string
        fmt.Print("\nApakah Anda ingin keluar? (y/n): ")
        fmt.Scanln(&exitChoice)
        if exitChoice == "y" {
            break
        }
    }
    fmt.Println("\n")
}
