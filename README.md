# 🎮 Number Guessing Game in C

A beginner-friendly command-line game built using the C programming language. The player selects a difficulty level and tries to guess a randomly generated number while receiving hints after each guess. The game also tracks the total number of attempts taken to win.

---

## ✨ Features

* 🎯 Three difficulty levels

  * Easy (1–50)
  * Medium (1–100)
  * Hard (1–500)
* 🎲 Random number generation
* 📈 "Too High" and 📉 "Too Low" hints
* 🔢 Attempt counter
* 🎉 Winning message with total attempts
* 💻 Interactive command-line interface

---

## 🛠️ Technologies Used

* C Programming Language
* GCC Compiler
* Git & GitHub
* Kali Linux

---

## 📂 Project Structure

```text
number-guessing-game/
├── main.c
└── README.md
```

---

## 🚀 Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/number-guessing-game.git
```

### 2. Navigate to the project directory

```bash
cd number-guessing-game
```

### 3. Compile the program

```bash
gcc main.c -o game
```

### 4. Run the program

```bash
./game
```

---

## 💻 Example Output

```text
=================================
   Number Guessing Game 🎮
=================================

Choose Difficulty

1. Easy (1 - 50)
2. Medium (1 - 100)
3. Hard (1 - 500)

Enter your choice: 2

Guess a number between 1 and 100.

Enter your guess: 25
📉 Too low! Try again.

Enter your guess: 80
📈 Too high! Try again.

Enter your guess: 63

🎉 Congratulations!
You guessed the number in 3 attempt(s).
```

---

## 📚 Concepts Practiced

* Variables and Data Types
* User Input and Output
* Conditional Statements (`if`, `else if`)
* `while` Loops
* `switch` Statements
* Random Number Generation (`rand()` and `srand()`)
* Time Library (`time.h`)
* Counter Variables

---

## 🚀 Planned Improvements

* Limited attempts based on difficulty
* Play Again option
* Input validation
* High score tracking
* Scoreboard using file handling
* Cleaner terminal interface

---

## 👨‍💻 Author

**Daksh Kumawat**

Learning C programming and software development by building practical projects and sharing the journey on GitHub.
