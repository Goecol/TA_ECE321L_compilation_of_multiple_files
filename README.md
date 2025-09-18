# TA_ECE321L_compilation_of_multiple_files

ECE321L – Lab: Compilation of Multiple Files

This repository contains a lab assignment for ECE 321L – Introduction to Software Engineering. The objective is to demonstrate how to split code into multiple files, compile them together, and understand the advantages of modular programming.

📘 Lab Objective

Learn how to organize code across multiple files.

Practice compiling and linking .c files into a single executable.

Understand the role of libraries (e.g., -lm for the math library).

Learn about include guards to prevent redefinition errors.


📂 Repository Contents

main.c – Contains the main() function and program entry point.

shapes.c – Contains helper functions for shape-related calculations.

shapes.h – Header file with function declarations.

info.c, header1.c, header1.h, header2.c, header2.h – Example files to study include guards and file dependencies.


🛠️ Compilation Instructions
Compile shapes example

Linux / macOS

gcc main.c shapes.c -o main -lm
./main


Windows (MinGW or similar)

gcc main.c shapes.c -o main.exe -lm
main.exe


The -lm flag links the math library, required for functions like sqrt() or pow().

Compile include guards example

Linux / macOS

gcc info.c header1.c header2.c -o info
./info


Windows

gcc info.c header1.c header2.c -o info.exe
info.exe


🔹 How It Works: Include Guards

#ifndef SHAPES_H
Checks if SHAPES_H is already defined. If not, the code between this line and the corresponding #endif is included in compilation.

#define SHAPES_H
Defines SHAPES_H, ensuring that if the header is included again in the same file or another file, the #ifndef SHAPES_H condition evaluates to false, skipping the enclosed declarations.

#endif
Marks the end of the conditional code block started by #ifndef.


Why important:
Without include guards, multiple inclusion of the same header can lead to compilation errors due to redefinition of functions, variables, or data structures.


✨ Learning Outcomes

Gain hands-on experience compiling multiple source files.

Understand modular programming and how include guards prevent redefinition errors.

Learn to link external libraries and manage dependencies in multi-file projects.
