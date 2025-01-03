# Readme.md

## C++ - Module 04

### Subtype Polymorphism, Abstract Classes, Interfaces

### Summary:
This document contains the exercises of Module 04 from C++ modules, focusing on subtype polymorphism, abstract classes, and interfaces.


### Contents
1. Introduction
2. General Rules
3. Exercise 00: Polymorphism
4. Exercise 01: I Don’t Want to Set the World on Fire
5. Exercise 02: Abstract Class
6. Exercise 03: Interface & Recap


---

### Chapter I: Introduction
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of C. This module introduces Object-Oriented Programming (OOP) principles, providing a foundation for using C++ effectively. The exercises in this module explore essential concepts of OOP, allowing for deeper understanding and practical application.

### Chapter II: General Rules
- Compile code using the command `make` for building and `make valgrind` to check for memory leaks.
- All code complies with Orthodox Canonical Form (OCF) and adheres to the C++98 standard using the -std=c++98 -pedantic flags.
- Class names are in UpperCamelCase and follow the required naming conventions for files and attributes.


### Chapter III: Exercise 00 - Polymorphism
In this exercise, a simple base class called `Animal` is implemented, which serves as the foundation for derived classes `Dog` and `Cat`. Each derived class initializes its type appropriately and overrides the `makeSound()` function, ensuring polymorphic behavior. There is also a `WrongCat` and `Olifant` class implemented to illustrate incorrect inheritance.

### Chapter IV: Exercise 01 - I Don’t Want to Set the World on Fire
This exercise involved creating a `Brain` class to handle the ideas of `Dog` and `Cat` classes. It is ensured that each derived class manages its own `Brain` instance, preventing shallow copies by implementing deep copy mechanics. Memory management was a key focus, ensuring no leaks occurred during object destruction.

### Chapter V: Exercise 02 - Abstract Class (I Don’t Want to Set the World on Fire part II)
The `Animal` class was made abstract to prevent instantiation, reinforcing the idea that it serves as a blueprint for derived classes. This modification ensures that only `Dog` and `Cat` and not `Animal` objects can be created while maintaining the same functionality.

### Chapter VI: Exercise 03 - Interface & Recap
In this exercise, I implemented the `AMateria` class and its derived classes `Ice` and `Cure`. I defined interfaces using pure abstract classes to enforce method implementation in derived classes with the prefix `I` like in `ICharacter`. Additionally, I created a `Character` class that interacts with `AMateria`, emphasizing the importance of interfaces in C++. 
