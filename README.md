# C Data Structures and Algorithms

This repository contains C implementations of various data structures and algorithms. The aim is to provide clear and efficient implementations for learning and practical use.

## Currently Implemented 

* **Heaps:**
    * Binary Heaps (Min-Heap and Max-Heap)
* **Tries:**
    * Standard Trie
* **Binary Search Trees (BSTs):**
    * Basic BST implementation with insertion, deletion, and search operations.
* **Linked Lists:**
    * Singly Linked Lists

## Running the Code

This project is developed and tested using GitHub Codespaces, providing a consistent and ready-to-use development environment. However, all implementations are standard C and can be compiled and run locally on any system with a C compiler (like GCC or Clang).

### Using GitHub Codespaces (Recommended)

1.  Click the "Code" button on the repository page.
2.  Select "Create codespace on main".
3.  Once the Codespace is set up, you can navigate to the desired implementation directory (e.g., `heaps`), compile the C files using `gcc <filename>.c -o <executable_name>`, and run the executable using `./<executable_name>`.

### Running Locally

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/](https://github.com/)<your_username>/<your_repository_name>.git
    cd <your_repository_name>
    ```
2.  **Navigate to the directory** of the specific data structure or algorithm you want to run (e.g., `cd heaps`).
3.  **Compile the C files:**
    ```bash
    gcc <source_file1>.c <source_file2>.c ... -o <executable_name>
    ```
    * Replace `<source_file1>.c`, `<source_file2>.c`, etc., with the names of the C files in the directory.
    * Replace `<executable_name>` with the desired name for your executable.
4.  **Run the executable:**
    ```bash
    ./<executable_name>
    ```