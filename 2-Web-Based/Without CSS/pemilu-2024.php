<?php
$paslonPemilu2024 = array("Anies-Muhaimin", "Prabowo-Gibran", "Ganjar-Mahfud");
$parpolPemilu2024 = array("PKB", "Gerindra", "PDIP", "Golkar", "Nasdem", "Buruh", "Gelora", "PKS", "PKN", "Hanura", "Garuda", "PAN", "PBB", "Demokrat", "PSI", "Perindo", "PPP", "Ummat");

$selectedPaslon = "";
$selectedPartai = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_POST["paslon"]) && isset($_POST["partai"])) {
        $paslonIndex = $_POST["paslon"];
        $partaiIndex = $_POST["partai"];

        $allowedParties = [];
        if ($paslonPemilu2024[$paslonIndex - 1] == "Anies-Muhaimin") {
            $allowedParties = ["PKB", "Nasdem", "PKS", "Ummat"];
        } elseif ($paslonPemilu2024[$paslonIndex - 1] == "Ganjar-Mahfud") {
            $allowedParties = ["PDIP", "Hanura", "Perindo", "PPP"];
        } else {
            $allowedParties = array_diff($parpolPemilu2024, $allowedParties);
        }

        $selectedPaslon = $paslonPemilu2024[$paslonIndex - 1];
        $selectedPartai = $allowedParties[$partaiIndex - 1];
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Program Pemilihan Umum 2024</title>
</head>
<body>
    <h1>Program Pemilihan Umum 2024</h1>
    <form action="" method="post" id="electionForm">
        <label for="paslon">Pilih Pasangan Calon:</label>
        <select name="paslon" id="paslon">
            <option value="">--Pilih Pasangan Calon--</option> <!-- Menampilkan pesan default -->
            <?php foreach ($paslonPemilu2024 as $key => $value) : ?>
                <option value="<?php echo $key + 1; ?>"><?php echo $value; ?></option>
            <?php endforeach; ?>
        </select>
        <br><br>
        <label for="partai">Pilih Partai Politik:</label>
        <select name="partai" id="partai">
            <option value="">--Pilih Partai Politik--</option> <!-- Menampilkan pesan default -->
            <!-- Opsi partai politik akan diisi melalui JavaScript -->
        </select>
        <br><br>
        <button type="submit">Submit</button>
    </form>

    <?php if ($selectedPaslon !== "" && $selectedPartai !== "") : ?>
        <div>
            <h2>PILIHAN ANDA</h2>
            <p>Pasangan Calon: <?php echo $selectedPaslon; ?></p>
            <p>Partai Politik: <?php echo $selectedPartai; ?></p>
        </div>
    <?php endif; ?>

    <script>
        const paslonPemilu2024 = <?php echo json_encode($paslonPemilu2024); ?>;
        const allowedParties = {
            "Anies-Muhaimin": ["PKB", "Nasdem", "PKS", "Ummat"],
            "Prabowo-Gibran": ["Gerindra", "Golkar", "Buruh", "Gelora", "PKN", "Garuda", "PAN", "PBB", "Demokrat", "PSI"],
            "Ganjar-Mahfud": ["PDIP", "Hanura", "Perindo", "PPP"],
        };

        const paslonSelect = document.getElementById("paslon");
        const partaiSelect = document.getElementById("partai");

        // Function to update party options based on selected candidate
        function updatePartyOptions() {
            const selectedPaslon = paslonPemilu2024[paslonSelect.value - 1];
            const parties = allowedParties[selectedPaslon] || [];

            partaiSelect.innerHTML = ""; // Clear existing options
            parties.forEach((party, index) => {
                const option = document.createElement("option");
                option.text = party;
                option.value = index + 1;
                partaiSelect.appendChild(option);
            });
        }

        // Call the function when the page loads and when the candidate selection changes
        updatePartyOptions();
        paslonSelect.addEventListener("change", updatePartyOptions);
    </script>
</body>
</html>
