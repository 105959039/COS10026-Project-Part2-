const bdayInput = document.getElementById("bday");
const ageError = document.getElementById("ageError");
const form = document.getElementById("jobapp");

// Hide error by default
ageError.style.display = "none";

// Trigger when the user selects a date
bdayInput.addEventListener("change", function () {
    checkAge();
});

// Check age before submitting
form.addEventListener("submit", function (event) {
    if (!checkAge()) {
        event.preventDefault(); // stop submission
    }
});

function checkAge() {
    const dobInput = bdayInput.value;
    if (!dobInput) return false;

    const dob = new Date(dobInput);
    const today = new Date();

    let age = today.getFullYear() - dob.getFullYear();
    const month = today.getMonth() - dob.getMonth();
    const day = today.getDate() - dob.getDate();

    if (month < 0 || (month === 0 && day < 0)) {
        age--;
    }

    if (age < 18) {
        ageError.style.display = "block";
        return false;
    } else {
        ageError.style.display = "none";
        return true;
    }
}