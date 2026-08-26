📁 Project Overview

This project contains two simple C programs that demonstrate fundamental programming concepts such as functions, arrays, pointers, loops, strings, user input, and basic processing.

The programs included are:

Cubes Generator – Calculates and displays the cube of every element in a square 2D array.

Length Finder – Finds the length of a string using a custom function and pointer traversal.

📌 Programs Included

1. Cubes Generator

File: Cubes-Generator.c

This program accepts the size and elements of a square 2D array and calculates the cube of each element.

It uses:

A 2D integer array

A separate findCubes() function

Pointers to access array elements

Nested for loops

User input using scanf()

The findCubes() function receives a pointer to the first array element and the array size, then calculates each value as value * value * value. fileciteturn0file0L3-L14

2. Length Finder

File: Length-Finder.c

This program accepts a string from the user and calculates its length without using the standard strlen() function.

It uses:

Character arrays

A custom findLength() function

Character pointers

A while loop

fgets() for string input

Newline removal

The findLength() function counts characters until the null character ('\0') is reached. fileciteturn0file1L3-L13

⚙️ How the Programs Work

Cubes Generator

The program first asks the user to enter the size of a square array and then accepts all array elements. It passes the address of the first element to the findCubes() function, which processes the array using pointer arithmetic. fileciteturn0file0L21-L41

Length Finder

The program asks the user to enter a string using fgets(). It removes the newline character from the input and then calls findLength() to count the characters until the end of the string. fileciteturn0file1L16-L38

▶️ How to Run

Using GCC

🎯 Learning Objectives

This project helps practice:

Basic C syntax

Variables and data types

Input and output using scanf(), printf(), and fgets()

Functions

1D and 2D arrays

Pointers and pointer arithmetic

loops

📂 Project Structure

C-Programming-Project/
│
├── README.md
├── Cubes-Generator.c
└── Length-Finder.c

👨‍💻 Author

KRISH SAPARIYA
