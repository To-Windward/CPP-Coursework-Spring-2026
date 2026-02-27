# SNHU-CPP-Project

**This repository contains a coursework assignment completed as part of an introductory C++ course. The focus was on reinforcing foundational language concepts and syntax.**


## Overview

`ItemTracker` is a console-based C++ application designed to read, process, and report on item frequency data from a text file. The project demonstrates foundational C++ concepts including object-oriented design, file I/O, standard library containers, string manipulation, and formatted console output.

---

## Features

- Loads and parses text files, storing item counts in a case-insensitive manner.  
- Queries the frequency of individual items.  
- Prints a complete item frequency list.  
- Generates a simple text-based histogram for visualizing item purchases.  
- Handles invalid or missing input files gracefully.

---

## Purpose

This project was completed as part of CS-210 to reinforce C++ programming fundamentals. The scope of the assignment focuses on beginner to intermediate-level concepts: readability, modular design, and defensive programming practices.

---

## Course Required Q+A Section

**1. Project Summary / Problem Solved**  
`ItemTracker` is a console-based program that reads a text file of item names, counts the frequency of each item, and presents the results as a frequency list and a text-based histogram. It solves the problem of quickly analyzing and visualizing item purchase data in a simple, case-insensitive way.

**2. What Went Well / Strengths**  
- Clean object-oriented design: All functionality is encapsulated in the `ItemTracker` class.  
- Effective use of standard library containers and algorithms (`std::map`, `std::transform`, range-based loops).  
- Case-insensitive input handling and file I/O error checks improve usability and robustness.  
- Readable outputs for both frequency lists and histograms.

**3. Areas for Enhancement**  
- Leverage RAII fully for file reading  
- Could use `std::unordered_map` for faster lookups on large datasets.  
- Add stricter input validation to handle malformed or extreme data.  

**4. Challenges and Solutions**  
- Implementing case-insensitive counting required a helper function (`toLowerCase`) and careful testing.  
- Formatting the histogram output required experimenting with `iomanip` and loops.  
- Overcame these challenges by consulting C++ reference documentation and testing edge cases.

**5. Transferable Skills**  
- Object-oriented design and encapsulation  
- File I/O and error handling  
- STL container usage and algorithms  
- Input validation and defensive programming  
- Output formatting for clarity  

**6. Maintainability, Readability, and Adaptability**  
- Methods have single responsibilities and are logically organized.  
- Clear variable and method names and consistent formatting.  
- The modular nature of it means adding new features or output formats is very straightforward.
