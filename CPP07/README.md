# C++ Module 07 - C++ Templates

This project is part of the 42 Common Core and focuses on learning and using **Templates** in C++. Templates allow us to write generic, reusable, and flexible code in a type-safe manner.

Throughout this module, we explore how to create generic functions and classes that can operate with any data type without the need to overload multiple versions of the same code.

## Exercises

### [Ex00: A few functions](./ex00/)
In this exercise, we implement three basic template functions:
- `swap`: Swaps the values of two given arguments. Does not return anything.
- `min`: Compares the two arguments passed and returns the smaller one.
- `max`: Compares the two arguments passed and returns the larger one.

The goal is to understand the basic syntax of templates and how the compiler deduces or instantiates the necessary types in each call.

### [Ex01: Iter](./ex01/)
The objective of this exercise is to implement a template function named `iter`.
- It takes three parameters: the address of an array, the length of the array, and a function that will be called on every element of the array.
- The function allows generic iteration over any array, whether constant or not, and applying generic or specific functions to its elements.

This exercise is excellent for understanding how to pass function templates as pointers to functions and how to manipulate arrays of any type generically.

### [Ex02: Array](./ex02/)
Development of a generic class `Array<T>` that dynamically manages memory.
Required features:
- Orthodox Canonical Form (Default constructor, copy constructor, assignment operator, and destructor).
- Dynamic memory allocation using `new[]` and `delete[]`.
- Deep copies.
- Overload of the subscript operator `operator[]`, which throws an exception (`std::exception`) if an attempt is made to access out of the array's bounds.
- A member function `size()` that returns the number of elements.

## Compilation and Execution

Each exercise is located in its respective directory and contains a `Makefile`.

To compile an exercise, navigate to its directory and run:
```bash
make
```

To execute the tests:
```bash
./<executable_name>
```
Usually, the executables are named `whatever`, `iter`, and `array` respectively, depending on the exercise.

## Technologies and Requirements
- Compiler: `c++`
- Compilation flags: `-Wall -Wextra -Werror -std=c++98`
- Standard: C++98

## Key Concepts Learned
- Use of `template <typename T>` or `template <class T>`.
- Template instantiation.
- Passing function templates as arguments to other functions.
- Generic class templates and their correct separation (templates must be implemented in the headers or in attached implementation files like `.tpp` or `.hpp` instead of `.cpp` source files).
- Exception handling when working with generic structures and dynamic memory.
