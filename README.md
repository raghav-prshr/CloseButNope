# 🎯 CloseButNope

A fun (and slightly evil 😈) C++ number guessing game where you try to guess a number between **1 and 100**.

---

## 🧠 Twist

This is not a normal guessing game.

The number is **not fixed at the start**.
Instead, the game dynamically adjusts the possible range based on your guesses…

👉 So you're always **close**
👉 But never actually right 😌

---

## 🎮 Features

* 🔁 Adaptive range logic (no fixed number)
* 🧠 Smart decision-making system
* 🎲 Randomized responses (avoids predictable patterns)
* 😹 "Almost won" psychological ending
* 💥 Crash-safe implementation

---

## 🚀 How to Run

### 🔧 Compile

```bash
g++ game.cpp -o game
```

### ▶️ Run

```bash
./game
```

---

## 🕹️ How It Works

* You get **6 attempts** to guess the number
* After each guess:

  * The game responds with **"Too high"** or **"Too low"**
* Internally, it **reshapes the valid range** instead of using a fixed number
* At the end:

  * It reveals a number that **fits all previous responses**
  * Usually the one that makes you feel *painfully close* 😈

---

## 📚 Concepts Used

* Conditional statements
* Dynamic range manipulation
* Randomization
* Defensive programming
* Basic game logic

---

## 😈 Why this project?

This project explores how:

* Logic can influence outcomes
* Systems can appear fair while being adaptive
* Small design changes affect user experience

Also… it’s just fun to mess with people 😅

---

## 📂 Project Structure

```
CloseButNope/
│── game.cpp
│── README.md
│── LICENSE
│── .gitignore
```

---

## 📜 License

This project is licensed under the **MIT License**.

You are free to:

* Use
* Modify
* Distribute

Just don’t blame the author if your friends stop trusting you 😉

---

## ⭐ If You Like This

Give it a ⭐ on GitHub and try it on your friends.

Let’s see how many people say:

> “BRO I WAS SO CLOSE 😭”
