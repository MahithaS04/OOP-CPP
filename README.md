# Object Oriented Programming Using C++ - Lab Manual Solutions

This repository contains complete, verified, and modern C++ implementations for all 13 laboratory experiments outlined in the **Object Oriented Programming Using C++** Lab Manual.

---

## Course Outcomes (CO) & PO Mapping Summary

| CO No. | Course Outcome Description | Mapped Experiments |
| :---: | :--- | :---: |
| **CO1** | Recall and explain fundamental OOP concepts: classes, objects, encapsulation, and memory management in C++. | Exp 1, Exp 12 |
| **CO2** | Design C++ programs using inheritance, polymorphism, and operator overloading to solve structured problems. | Exp 2, Exp 3 |
| **CO3** | Apply templates, the Standard Template Library (STL), and modern C++17/20 features to build reusable, efficient code. | Exp 4, Exp 5, Exp 11, Exp 13 |
| **CO4** | Implement robust C++ applications using exception handling, smart pointers, move semantics, and concurrency primitives. | Exp 6, Exp 7, Exp 8, Exp 10 |
| **CO5** | Evaluate and integrate design patterns (Creational, Structural, and Behavioral) into real-world C++ software projects. | Exp 9 |

---

## Experiments Directory & Compilation Guide

All files can be compiled using GCC/G++ with C++20 support:

```bash
g++ -std=c++20 -Wall -Wextra <filename>.cpp -o <output_name>
./<output_name>
```

| Exp No. | File Name | Title | Concepts Covered |
| :---: | :--- | :--- | :--- |
| **1** | [`practical1.cpp`](practical1.cpp) | University Management System | Encapsulation, Object Lifecycle, Constructor, Destructor |
| **2** | [`practical2.cpp`](practical2.cpp) | Runtime Polymorphism | Abstract Class, Pure Virtual Functions, Dynamic Binding |
| **3** | [`practical3.cpp`](practical3.cpp) | Matrix Operations | Operator Overloading (`+`, `*`, `[]`, `<<`), Unit Tests (`assert`) |
| **4** | [`practical4.cpp`](practical4.cpp) | Generic Stack and Queue | Class Templates, STL Stack/Queue Benchmarking with `chrono` |
| **5** | [`practical5.cpp`](practical5.cpp) | Student Grade Analyzer | STL Algorithms (`sort`, `transform`, `find_if`, `accumulate`), Lambdas |
| **6** | [`practical6.cpp`](practical6.cpp) | Smart Pointer Behavior | RAII Pattern, `std::unique_ptr`, `std::shared_ptr`, Memory Safety |
| **7** | [`practical7.cpp`](practical7.cpp) | Exception Safety in Banking | Custom Exceptions, Try/Catch Hierarchy, Strong Exception Guarantee |
| **8** | [`practical8.cpp`](practical8.cpp) | Move Semantics & Forwarding | Move Constructor, Move Assignment, `std::forward`, Benchmarking |
| **9** | [`practical9.cpp`](practical9.cpp) | Design Patterns | Singleton (Meyers), Factory, Observer Pattern, Doxygen Comments |
| **10** | [`practical10.cpp`](practical10.cpp) | Producer-Consumer System | Concurrency: `std::thread`, `std::mutex`, `std::condition_variable`, `std::atomic` |
| **11** | [`practical11.cpp`](practical11.cpp) | Type-Safe Unit Conversion | Compile-Time Metaprogramming, Templates, `constexpr`, `static_assert` |
| **12** | [`practical12.cpp`](practical12.cpp) | Mini File System Simulator | Binary File I/O (`ofstream`, `ifstream`), Serialization, Custom Allocator |
| **13** | [`practical13.cpp`](practical13.cpp) | Generic Data Pipeline | C++20 Concepts (`Numeric`), Ranges & Views (`filter`, `transform`) |
| **13 (Mod)** | [`exp13_modules/`](exp13_modules/) | Modular Pipeline | C++20 Modules (`pipeline.cppm`, `main.cpp`, `CMakeLists.txt`) |

---

## Detailed Experiment Details & Verification

### 1. University Management System (`practical1.cpp`)
- **Aim**: Demonstrate encapsulation and object lifecycle using constructors and destructors.
- **Run**: `g++ -std=c++20 practical1.cpp -o practical1 && ./practical1`

### 2. Runtime Polymorphism (`practical2.cpp`)
- **Aim**: Compute areas dynamically using an abstract `Shape` class with pure virtual `area()`.
- **Run**: `g++ -std=c++20 practical2.cpp -o practical2 && ./practical2`

### 3. Matrix Operator Overloading (`practical3.cpp`)
- **Aim**: Overload arithmetic, subscript, and stream operators with assertion-based unit tests.
- **Run**: `g++ -std=c++20 practical3.cpp -o practical3 && ./practical3`

### 4. Generic Stack & Queue (`practical4.cpp`)
- **Aim**: Benchmark custom template stack and queue against STL containers using `std::chrono`.
- **Run**: `g++ -std=c++20 practical4.cpp -o practical4 && ./practical4`

### 5. Student Grade Analyzer (`practical5.cpp`)
- **Aim**: Process student data using STL algorithms (`sort`, `transform`, `find_if`, `accumulate`) and modern C++ lambda expressions.
- **Run**: `g++ -std=c++20 practical5.cpp -o practical5 && ./practical5`

### 6. RAII and Smart Pointers (`practical6.cpp`)
- **Aim**: Implement custom RAII smart pointer and refactor with `std::unique_ptr` and `std::shared_ptr`.
- **Run**: `g++ -std=c++20 practical6.cpp -o practical6 && ./practical6`

### 7. Exception Safety in Banking (`practical7.cpp`)
- **Aim**: Custom exception hierarchy inheriting from `std::exception` ensuring the strong exception guarantee.
- **Run**: `g++ -std=c++20 practical7.cpp -o practical7 && ./practical7`

### 8. Move Semantics & Perfect Forwarding (`practical8.cpp`)
- **Aim**: Eliminate deep copies in a resource-heavy String class using rvalue references and `std::forward`.
- **Run**: `g++ -std=c++20 practical8.cpp -o practical8 && ./practical8`

### 9. Singleton, Factory & Observer Design Patterns (`practical9.cpp`)
- **Aim**: Event-driven notification system combining Meyers' Singleton, Factory, and Observer patterns.
- **Run**: `g++ -std=c++20 practical9.cpp -o practical9 && ./practical9`

### 10. Multi-Threaded Producer-Consumer (`practical10.cpp`)
- **Aim**: Coordinate concurrent producer and consumer threads using mutexes, condition variables, and atomics.
- **Run**: `g++ -std=c++20 practical10.cpp -o practical10 && ./practical10`

### 11. Type-Safe Unit Conversion Library (`practical11.cpp`)
- **Aim**: Compile-time unit conversions using C++ templates, `constexpr`, and `static_assert`.
- **Run**: `g++ -std=c++20 practical11.cpp -o practical11 && ./practical11`

### 12. Mini File System Simulator (`practical12.cpp`)
- **Aim**: Binary serialization and custom memory allocator for persistent file record management.
- **Run**: `g++ -std=c++20 practical12.cpp -o practical12 && ./practical12`

### 13. Generic Data Pipeline (`practical13.cpp`)
- **Aim**: Functional data processing pipeline built with C++20 concepts and range adaptors.
- **Run**: `g++ -std=c++20 practical13.cpp -o practical13 && ./practical13`

