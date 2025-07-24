# EXP 1: Basics of C++

## 🔰 Aim
To understand the basic structure, syntax, and working of a C++ program by writing:
1. A simple **Hello World** program.
2. A **Basic Calculator** that performs arithmetic operations (+, -, *, /).

---

## 📚 Theory

### ✅ 1. Hello World Program

- The simplest C++ program used to verify that the compiler and development environment are set up correctly.
- It demonstrates:
  - Including libraries (`#include <iostream>`)
  - Using the `main()` function
  - Output using `std::cout`

#### 🧠 Algorithm:
1. Start
2. Include `<iostream>`
3. Define `main()` function
4. Use `std::cout` to print "Hello, World!"
5. Return 0
6. End

---

### ✅ 2. Calculator Program

- This program performs **basic arithmetic operations**: addition, subtraction, multiplication, and division using **switch-case**.
- It takes two operands and an operator as input from the user.

#### 🧠 Algorithm:
1. Start
2. Take input of two numbers (`num1`, `num2`)
3. Take input of an operator (`+`, `-`, `*`, `/`)
4. Use `switch` statement to select operation:
   - Case `+`: Add `num1 + num2`
   - Case `-`: Subtract `num1 - num2`
   - Case `*`: Multiply `num1 * num2`
   - Case `/`: Divide `num1 / num2` (check if `num2 != 0`)
5. Print result
6. End

---


---

## ✅ Conclusion

This experiment introduces the foundational syntax and structure of C++. Through the Hello World program, we verify the basic working of the compiler. The calculator demonstrates the use of user input, conditional logic via switch-case, and arithmetic operations — essential elements of procedural programming in C++.

---

## 📌 Topics Covered

- Header files and namespaces
- `main()` function
- Input/Output using `cin` and `cout`
- Switch-case statement
- Operators and basic user interaction

---

