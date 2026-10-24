# Children's Tutor

A simple Windows learning program for young children, written in C++ with the `graphics.h` (WinBGIm) library. It shows numbers, letters and shapes on screen and plays audio to go with them.

## Features

- **Mathematics**
  - Counting (0–9)
  - Addition, subtraction, multiplication and division, explained by counting lines
- **Geometry**: learn shapes (rectangle, triangle, circle) and take a short skill test
- **Alphabet**: press any letter (A–Z) to see the letter with a matching picture (e.g. "A for Aeroplane") and hear both the letter and the word spoken aloud

## Requirements

- Windows
- A C++ compiler such as MinGW (e.g. through Code::Blocks)
- [WinBGIm](https://winbgim.codecutter.org/) (`graphics.h`) set up for your compiler

## Build and Run

Compile `Children_s Tutor.cpp` and link the graphics and sound libraries:

```
g++ "Children_s Tutor.cpp" -o "Children_s Tutor.exe" -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lwinmm
```

Then run `Children_s Tutor.exe` from the project folder so it can find the `audio/` directory.

## How to Use

The program is controlled with the keyboard:

- Main menu: `1` Mathematics, `2` Geometry, `3` Alphabet, `x` Quit
- Inside each section, follow the on-screen instructions (`b`, `x` or `0` goes back, depending on the screen)

## Project Structure

```
Children_s Tutor.cpp   # Source code
audio/                 # Sound files used by the program
```