const paslonPemilu2024 = ["Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud"];
const parpolPemilu2024 = ["PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat"];

while (true) {
    console.log("\n======================================");
    console.log("     PROGRAM PEMILIHAN UMUM 2024     ");
    console.log("--------------------------------------");
    console.log("1. Tampilkan Nama Paslon dan Partai");
    console.log("2. Pilih Paslon dan Partai");
    console.log("======================================");

    const choice = parseInt(prompt("Masukkan pilihan Anda : "));

    if (choice === 1) {
        console.log("\n======================================");
        console.log("Pasangan Calon :");
        for (let i = 0; i < paslonPemilu2024.length; i++) {
            console.log(`${i + 1}. ${paslonPemilu2024[i]}`);
        }

        console.log("\nPartai Politik :");
        for (let i = 0; i < parpolPemilu2024.length; i++) {
            console.log(`${i + 1}. ${parpolPemilu2024[i]}`);
        }
        console.log("======================================");
    } else if (choice === 2) {
        const paslon_pilihan = parseInt(prompt("\nMasukkan Nomor Paslon yang dipilih : "));
        if (!(1 <= paslon_pilihan && paslon_pilihan <= paslonPemilu2024.length)) {
            console.log("Nomor paslon tidak valid.");
            continue;
        }

        let partai_koalisi;
        if (paslonPemilu2024[paslon_pilihan - 1] === "Anies-Muhaimin") {
            partai_koalisi = ["PKB", "Nasdem", "PKS", "Ummat"];
        } else if (paslonPemilu2024[paslon_pilihan - 1] === "Ganjar-Mahfud") {
            partai_koalisi = ["PDIP", "Hanura", "Perindo", "PPP"];
        } else if (paslonPemilu2024[paslon_pilihan - 1] === "Prabowo-Gibran") {
            partai_koalisi = ["Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"];
        } else {
            partai_koalisi = parpolPemilu2024;
        }

        console.log("\n======================================");
        console.log(`Partai Politik Koalisi ${paslonPemilu2024[paslon_pilihan - 1]} :`);
        for (let i = 0; i < partai_koalisi.length; i++) {
            console.log(`${i + 1}. ${partai_koalisi[i]}`);
        }
        console.log("======================================");

        const partai_pilihan = parseInt(prompt("\nMasukkan Nomor Partai yang dipilih : "));
        if (!(1 <= partai_pilihan && partai_pilihan <= partai_koalisi.length)) {
            console.log("Nomor partai tidak valid.");
            continue;
        }

        console.log("\n======================================");
        console.log("             PILIHAN ANDA             ");
        console.log("--------------------------------------");
        console.log(`Pasangan Calon : ${paslonPemilu2024[paslon_pilihan - 1]}`);
        console.log(`Partai Politik : ${partai_koalisi[partai_pilihan - 1]}`);
        console.log("======================================");
    } else {
        console.log("Pilihan tidak valid. Silakan masukkan 1 atau 2.");
        continue;
    }

    // Memberikan opsi untuk keluar dari loop
    const exit_choice = prompt("\nApakah Anda ingin keluar? (y/n):").toLowerCase();
    if (exit_choice === 'y') {
        break;
    }
}

console.log('\n');