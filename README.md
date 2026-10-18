# Bookstore Management System

## Description
This project is a simple **Bookstore Management System** developed in C. It allows users to add, remove, and search for books in a bookstore.

Each book contains the following information:
- **Title:** A string representing the book's title.
- **Bin Number:** A four-digit integer identifying the book.
- **Price:** A double representing the book's price.

## Main Menu
When the program starts, it displays a message indicating that the book information has been loaded. In this phase, no actual file operations are performed.

The program then displays the following menu:

```text
Please Select an Operation (1-4):
1- Add a Book
2- Remove a Book
3- Search for a Book
4- Exit System
```

The menu continues to appear after each operation until the user selects option 4 to exit the system.

When the user exits, the program displays a message indicating that the book information has been updated. In this phase, no actual file updates are performed.

## Required Functions

- `displayMainMenu()` – Displays the main menu.
- `addBook()` – Adds information for a new book.
- `removeBook()` – Removes information about an existing book.
- `searchForBook()` – Searches for a book in the store.
- `uploadDataFile()` – Displays a message indicating that book information has been loaded from a file.
- `updateDataFile()` – Displays a message indicating that book information has been updated.

## Current Phase
In this phase, the required functions are implemented as `void` functions that mainly use `printf()` statements to display messages describing their operations.

Actual file loading, saving, and book management operations are not implemented yet. These functions will be expanded in later phases of the project.

## Programming Language
C
