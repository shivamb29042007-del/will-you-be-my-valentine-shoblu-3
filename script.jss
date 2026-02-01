const noBtn = document.getElementById("noBtn");
const yesBtn = document.getElementById("yesBtn");

// When the mouse hovers over the "No" button
noBtn.addEventListener("mouseover", () => {
    // Calculate a random position on the screen
    const x = Math.random() * (window.innerWidth - noBtn.offsetWidth);
    const y = Math.random() * (window.innerHeight - noBtn.offsetHeight);

    // Move the button to that position
    noBtn.style.left = `${x}px`;
    noBtn.style.top = `${y}px`;
});

// When they finally click "Yes"
yesBtn.addEventListener("click", () => {
    alert("Yay! See you on the 14th! ❤️");
});
