body {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background-color: #fce4ec; /* Light pink */
    font-family: 'Arial', sans-serif;
}

.container {
    text-align: center;
    background: white;
    padding: 50px;
    border-radius: 20px;
    box-shadow: 0 10px 20px rgba(0,0,0,0.1);
}

#yesBtn {
    background-color: #ff4081;
    color: white;
    padding: 15px 30px;
    border: none;
    border-radius: 10px;
    font-size: 1.2rem;
    cursor: pointer;
}

#noBtn {
    position: absolute; /* Essential for it to move around */
    padding: 10px 20px;
    border-radius: 10px;
    border: 1px solid #ccc;
    cursor: pointer;
}
