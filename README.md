# C++ 3D Curves Library

**A C++ implementation of a technical assignment from [CAD Exchanger](https://cadexchanger.com/).**

This project demonstrates the implementation of a library for working with 3D geometric curves (circles, ellipses, and helices) according to the following requirements:
- Polymorphism and virtual methods.
- STL containers and sorting.
- No memory leaks.
- Modular design (library + executable).

The project is designed to showcase **object-oriented principles**, **STL usage**, and **clean code practices** in C++.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![C++](https://img.shields.io/badge/C%2B%2B-20-blue.svg)]()

---

## 📋 Requirements

Before you start, make sure you have the following installed:

- **C++ Compiler** (`g++`, `clang++`, or MSVC) with C++11 or higher support
- **CMake** (version 3.10 or higher) for building the project
- **Google Test** framework for running unit tests

---

## **Features**
- Supports 3D curves: **Circle**, **Ellipse**, and **Helix**.
- Uses **polymorphism** and **virtual methods**.
- Implements **STL containers** and **sorting**.
- No memory leaks (uses `std::unique_ptr`).
- Modular design: **library** + **executable**.

---

## 📁 Project Structure

```
cpp-3d-curves/
├── curves_lib/
|   └── include/
|   |     └── Curve.h
|   |     └── Circle.h
|   |     └── Ellipse.h
|   |     └── Helix.h 
|   └── src/
|         └── Circle.cpp
|         └── Ellipse.cpp
|         └── Helix.cpp
├── app/
|     └── main.cpp
|
├── CMakeLists.txt        # Build configuration
├── .gitignore            # File to ignore unnecessary files
└── README.md             # This file 
```
---

## 🚀 Quick Start

### Step 1: Clone the Repository

```bash
git clone git@github.com:And1life/cpp-3d-curves.git
cd cpp-3d-curves
```

### Step 2: 🔨 Build with CMake

```bash
mkdir build
cd build
cmake ..
cmake --build .
```
### Step 3: Run the executable

```bash
./curves_app
```
---

## 💡 Example Output

```bash
=== All Curves ===
--- Curve Info at t = 0.785 ---
Point:    (1.414, 1.414, 0.000)
Derivative: (-1.414, 1.414, 0.000)
--------------------------
--- Curve Info at t = 0.785 ---
Point:    (2.121, 1.061, 0.000)
Derivative: (-2.121, 1.500, 0.000)
--------------------------

=== Sorted Circles ===
Circle with radius: 1.5
Circle with radius: 2.0

Total radius of all circles: 3.5

```
---

## 🚀 Future Enhancements

Possible improvements and extensions:

- [ ] Unit Testing
- [ ] Additional Curve Types
- [ ] Visualization

---

## 📝 License

This project is distributed under the **MIT License** — free for educational and commercial use.

```
MIT License

Copyright (c) 2026 And1life

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
```

See [LICENSE](LICENSE) file for full text.

---

## 📞 Feedback

Have questions or suggestions?

- 🐛 [Report Issues](https://github.com/And1life/ccpp-3d-curves/issues)
- 💬 Discussions (if enabled)
- 📧 Email: dmitriev18.dev@gmail.com

---

**Thank you for using cpp-3d-curves!** ⭐

If this project was helpful, please star it on GitHub! 🌟
