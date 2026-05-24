# C++ Module 05 - Repetition and Exceptions

![C++](https://img.shields.io/badge/C++-98-blue.svg)
![42 School](https://img.shields.io/badge/42-School-black.svg)

This repository contains the solutions for **Module 05** of the C++ curriculum at 42 School.
The main objective of this module is to dive deeper into Object-Oriented Programming by introducing safe error handling through **exceptions**, the use of **abstract classes**, **polymorphism**, and an approach to design patterns such as the **Factory Pattern**.

## Module Contents

The module is divided into 4 incremental exercises that build a "bureaucracy" system, managing employees, forms, signatures, and executions.

### [ex00 - Bureaucrat](./ex00)
Introduction to the exception system (`try`, `catch`, `throw`).
- Creation of the `Bureaucrat` class with immutable attributes.
- Implementation of custom exception classes (`GradeTooHighException`, `GradeTooLowException`) that inherit from `std::exception`.
- Strict protection of the object's state to prevent instantiation or modification outside the allowed limits (grade 1 to 150).

### [ex01 - Form](./ex01)
Class interaction and *Forward Declaration*.
- Creation of the `Form` class with grade requirements to be signed and executed.
- Two-way communication where a `Bureaucrat` interacts with the `Form` to sign it.
- Handling of hierarchy failures by throwing clear exceptions.

### [ex02 - Concrete Forms](./ex02)
Abstract Classes, Pure Virtual Methods, and Polymorphism.
- Refactoring `Form` into `AForm` (Abstract Form).
- Creation of three concrete forms with specific actions:
  - `ShrubberyCreationForm`: File output handling (`std::ofstream`) to generate ASCII trees.
  - `RobotomyRequestForm`: Pseudo-random probability generation (`std::rand`).
  - `PresidentialPardonForm`: Standard message form.
- Delegation of execution using polymorphism.

### [ex03 - Intern](./ex03)
Factory Design Pattern without extensive conditionals.
- Creation of an `Intern` that dynamically generates forms from *strings*.
- Use of arrays of function pointers (or methods) to avoid large `if/else if` blocks, strictly complying with 42's clean code rules.

## Technical Rules (42)
- All code is written and compiles in the **C++98** standard.
- The use of the *Standard Template Library* (STL) is forbidden in this module.
- All classes strictly comply with the **Orthodox Canonical Form** (Default Constructor, Copy Constructor, Assignment Operator, Destructor).
- Compiled with restrictive flags: `-Wall -Wextra -Werror`.
- No *memory leaks* (memory rigorously managed for dynamic objects instantiated by the Factory).

## Compilation and Usage

Each exercise has its own `Makefile`. To compile and run the tests for any exercise, simply navigate to its directory and run `make`:

```bash
cd ex02
make
./exercise02
```

You can clean the object files and the executable using:
```bash
make clean
make fclean
```

---
*This project was developed as part of the Common Core at 42 School.*
