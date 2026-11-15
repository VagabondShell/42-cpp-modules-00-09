# 42 C++ Modules · 00–09

C++ projects I developed as part of the **42 Common Core**, covering object-oriented design, memory management, generic programming, and STL containers and algorithms.

The exercises progress from small command-line programs to class hierarchies, reusable templates, expression evaluation, and sorting across different containers. Each exercise is an independent program with its own Makefile, built with `-Wall -Wextra -Werror -std=c++98`.

## Start here

These exercises offer a quick view of the work:

| Project | What to look at |
| --- | --- |
| [PmergeMe](cpp09/ex02) | Merge-insertion sorting with `std::vector` and `std::deque`, Jacobsthal-based insertion ordering, and execution timing. |
| [Reverse Polish Notation](cpp09/ex01) | Stack-based expression evaluation, input parsing, and arithmetic error handling. |
| [Forms and Intern](cpp05/ex03) | Abstract classes, polymorphic form execution, exceptions, and creation of forms by name. |
| [Materia system](cpp04/ex03) | Interfaces, object ownership, cloning, and interaction between characters and a materia source. |
| [Span](cpp08/ex01) | Container-backed storage, range insertion, and shortest/longest span calculations. |

## Module overview

| Module | Focus | Exercises |
| --- | --- | --- |
| [CPP 00](cpp00) | Classes, encapsulation, streams, and static members | Megaphone, PhoneBook, Account |
| [CPP 01](cpp01) | Allocation, pointers, references, file I/O, and member function pointers | Zombies, weapons, string replacement, Harl |
| [CPP 02](cpp02) | Orthodox Canonical Form, operator overloading, and fixed-point arithmetic | Fixed-point class and point-in-triangle check |
| [CPP 03](cpp03) | Inheritance and the diamond hierarchy | ClapTrap, ScavTrap, FragTrap, DiamondTrap |
| [CPP 04](cpp04) | Runtime polymorphism, abstract classes, interfaces, and deep copies | Animals, Brain, Materia |
| [CPP 05](cpp05) | Exceptions and polymorphic workflows | Bureaucrats, forms, Intern |
| [CPP 06](cpp06) | Type conversion, serialization, and runtime type identification | ScalarConverter, Serializer, Identify |
| [CPP 07](cpp07) | Function and class templates | `swap` / `min` / `max`, `iter`, Array |
| [CPP 08](cpp08) | Containers, algorithms, and iterators | easyfind, Span, MutantStack |
| [CPP 09](cpp09) | STL-based data processing and algorithms | Bitcoin Exchange, RPN, PmergeMe |

## Build and run

You need a C++ compiler with C++98 support and `make`. The Makefiles use `c++`; no third-party libraries are required. PmergeMe uses the POSIX `gettimeofday` API, so use a macOS or Linux environment.

From the repository root:

```sh
# Stack-based calculator: prints 42
make -C cpp09/ex01
./cpp09/ex01/RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"

# Sort a sequence and display container timings
make -C cpp09/ex02
./cpp09/ex02/PmergeMe 3 5 9 7 4

# Convert a scalar to char, int, float, and double representations
make -C cpp06/ex00
./cpp06/ex00/ScalarConverter 42
```

Every exercise supports `make`, `make clean` (remove object files), `make fclean` (also remove the executable), and `make re` (rebuild).

To build all 38 exercises:

```sh
for exercise in cpp*/ex*/; do
    make -C "$exercise" || break
done
```

To remove their build outputs:

```sh
for exercise in cpp*/ex*/; do
    make -C "$exercise" fclean
done
```

### Bitcoin Exchange data

`cpp09/ex00` expects an external `data.csv` in its working directory. The historical exchange-rate dataset is **not included** in this repository. Supply the exercise dataset before running:

```sh
cd cpp09/ex00
make
./btc input.txt
```

The database must start with `date,exchange_rate`, followed by `YYYY-MM-DD,rate` rows. The input file must start with `date | value`, followed by entries such as `2011-01-03 | 3`. When an exact date is absent, the program looks up the preceding available rate.

## Repository conventions

- Modules use zero-padded names, `cpp00` through `cpp09`; exercises use `ex00`, `ex01`, and so on.
- C++ class files keep their class names, such as `Bureaucrat.cpp` and `Bureaucrat.hpp`. Exercise entry points and helper files retain their established names, including `main.cpp`, `whatever.hpp`, and `easyfind.hpp`.
- Each exercise keeps its own source files so it can be built and reviewed independently.
- Build outputs, editor settings, and generated exercise files are excluded through `.gitignore`.

## Scope

This is an educational portfolio of my 42 C++ coursework. The C++98 constraint is part of the exercises. The `main.cpp` files (and `cpp00/ex02/tests.cpp`) provide demonstrations and exercise checks; they are not a comprehensive automated test suite.
