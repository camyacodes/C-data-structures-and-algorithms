# C Data Structures and Algorithms

This repository contains C implementations of various data structures and algorithms. The aim is to provide clear and efficient implementations for learning and practical use.

## Currently Implemented

* **Recursion:**
    * Combinations (`combinations.c`)
    * Odometer simulation (`odometer.c`)
    * Permutations (`permutations.c`)
* **Binary Search Trees (BSTs):**
    * Basic BST implementation (`binary_search_tree.c`)
* **Elementary Sorting:**
    * Implementation of elementary sorting algorithms (`elementary_sorting.c`)
* **Hash Tables:**
    * Chaining implementation (`hash_table_chaining.c`)
    * Open Addressing implementation (`hash_table_open_addressing.c`)
* **Heaps:**
    * Binary Min-Heap (`min_heap.c`)
* **Linked Lists:**
    * Singly Linked List (`linked_list.c`)
    * No-list linked list implementation (potentially a different linked list variant or experiment) (`no_list_linked_list.c`)
* **Queues:**
    * Array-based circular queue (`queue_array_circular.c`)
    * Array-based naive queue (`queue_array_naive.c`)
    * Linked List-based queue (`queue_LL.c`)
* **Sorting:**
    * Merge Sort (`merge_sort.c`)
    * Heapsort algorithm (`heapsort.c`)
    * Quick Sort (`quick_sort.c`)
* **Stacks:**
    * Array-based stack (`stack_array.c`)
    * Linked List-based stack (`stack_LL.c`)
* **Tries:**
    * Standard Trie (`trie.c`)

## Running the Code

This project is developed and tested using GitHub Codespaces, providing a consistent and ready-to-use development environment. However, all implementations are standard C and can be compiled and run locally on any system with a C compiler (like GCC or Clang).

### Using GitHub Codespaces (Recommended)

1.  Click the "Code" button on the repository page.
2.  Select "Create codespace on main".
3.  Once the Codespace is set up, you can navigate to the desired implementation directory (e.g., `recursion`), compile the C files using `gcc <filename>.c -o <executable_name>`, and run the executable using `./<executable_name>`.

### Running Locally

1.  **Clone the repository:**
    ```bash
    git clone git@github.com:camyacodes/C-data-structures-and-algorithms.git
    cd C-data-structures-and-algorithms
    ```
2.  **Compile the C file:**
    ```bash
    gcc <source_file>.c -o <executable_name>
    ```
    * Replace `<source_file>.c` with the name of the C file you want to compile (e.g., `heapsort.c`).
    * Replace `<executable_name>` with the desired name for your executable (e.g., `heapsort`).
3.  **Run the executable:**
    ```bash
    ./<executable_name>
    ```
