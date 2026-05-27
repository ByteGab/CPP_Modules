# C++ Module 06 - C++ Casts

![C++](https://img.shields.io/badge/C++-98-blue.svg)
![42 School](https://img.shields.io/badge/42-School-black.svg)

## Description

This module from the 42 Common Core focuses on introducing the different types of **casts** in C++ and their proper use. Unlike C, where casts are generic and often unsafe, C++ provides four specific types of casts that offer greater type control and safety:

- `static_cast`
- `dynamic_cast`
- `reinterpret_cast`
- `const_cast` (not extensively used in this module, but part of the standard)

---

## Exercises

### Exercise 00: Conversion of scalar types (ex00)
Implementation of a static `ScalarConverter` class that takes a string representing a C++ literal (e.g., `42`, `42.0f`, `'a'`, `nan`) and converts it to the fundamental scalar types:
- `char`
- `int`
- `float`
- `double`

This exercise handles implicit and explicit conversions (`static_cast`), overflows, impossible conversions, and special pseudo-literals (`-inff`, `+inff`, `nanf`, `-inf`, `+inf`, `nan`).

### Exercise 01: Serialization (ex01)
Development of a static `Serializer` class designed to convert a pointer to an unsigned integer (`uintptr_t`) and vice versa. 
- **`serialize`**: Converts a `Data*` pointer to `uintptr_t`.
- **`deserialize`**: Converts a `uintptr_t` back to a `Data*`.

This exercise demonstrates the use of `reinterpret_cast` to safely manipulate and store memory addresses.

### Exercise 02: Identify real type (ex02)
Creation of a class system with a pure virtual `Base` class and three derived classes (`A`, `B`, `C`). The program generates random instances and must identify their real type without using the forbidden `<typeinfo>` library.
It explores the two ways to use `dynamic_cast`:
- **With pointers**: Checking if the cast returns `NULL`.
- **With references**: Catching the `std::bad_cast` exception when the cast fails.

---

## Compilation and Execution

Each exercise is located in its own folder and includes a `Makefile` to compile the code. The standard used is **C++98**.

To compile any of the exercises, navigate to its directory and run:

```bash
make
```

### Usage Examples:

**Exercise 00:**
```bash
cd ex00
make
./convert 42.0f
./convert nan
```

**Exercise 01:**
```bash
cd ex01
make
./serialize
```

**Exercise 02:**
```bash
cd ex02
make
./identify
```

---

## Project Rules
- All code must comply with the **C++98** standard.
- Compiled with strict flags: `-Wall -Wextra -Werror -std=c++98`.
- Exercise classes (where applicable) must follow the **Orthodox Canonical Form** (default constructor, copy constructor, assignment operator, and destructor).
- External libraries or functions like `printf()`, `alloc()`, and `free()` are forbidden.
