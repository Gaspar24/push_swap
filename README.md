# Push_Swap

## Overview

**Push_Swap** is a project that challenges developers to sort a stack of integers using the fewest possible operations while adhering to strict constraints. It is an exploration into algorithm design, complexity analysis, and memory management in C. This project serves as a foundational step for understanding sorting algorithms, stack operations, and optimization.

The program takes a list of integers as input and produces a sequence of instructions to sort them in ascending order.

---

## Features

- Implements two stacks (`a` and `b`) to manage and sort integers.
- Provides efficient sorting solutions by minimizing the number of operations.
- Handles memory allocation and management robustly.
- Validates input and handles errors gracefully, including:
  - Non-integer arguments.
  - Duplicates in the input.
  - Arguments exceeding integer limits.

---

## Operations

The following stack operations are available to sort the integers:

- **Swap**:
  - `sa`: Swap the top two elements of stack `a`.
  - `sb`: Swap the top two elements of stack `b`.
  - `ss`: Perform `sa` and `sb` simultaneously.

- **Push**:
  - `pa`: Push the top element of stack `b` to stack `a`.
  - `pb`: Push the top element of stack `a` to stack `b`.

- **Rotate**:
  - `ra`: Rotate stack `a` upward.
  - `rb`: Rotate stack `b` upward.
  - `rr`: Perform `ra` and `rb` simultaneously.

- **Reverse Rotate**:
  - `rra`: Rotate stack `a` downward.
  - `rrb`: Rotate stack `b` downward.
  - `rrr`: Perform `rra` and `rrb` simultaneously.

---

## Usage

### Compilation

To compile the program:
```bash
make
This will generate an executable named push_swap.

Running the Program
To run the program with a list of integers:

bash
Copy code
./push_swap <list_of_integers>
For example:

bash
Copy code
./push_swap 4 2 8 1
This will output the sequence of operations to sort the integers in ascending order.

Example Output
Input:

bash
Copy code
./push_swap 3 2 1
Output:

bash
Copy code
pb
pb
sa
pa
pa
Error Handling
The program handles various errors, including:

Invalid arguments (e.g., non-integer inputs).
Duplicate integers.
Overflow or underflow of integers.
In case of an error, the program outputs:

javascript
Copy code
Error
Learning Experience
What I Learned
Algorithm Design:

Explored various sorting algorithms (e.g., Bubble Sort, Merge Sort) to minimize the number of operations.
Gained an understanding of stack-based sorting and its unique challenges.
Complexity Analysis:

Studied time and space complexity, and how different configurations of input impact performance.
Memory Management:

Learned how to manage dynamic memory in C effectively.
Ensured no memory leaks by carefully freeing allocated memory.
Optimization:

Focused on reducing the number of operations to meet project benchmarks.
Error Handling:

Implemented robust input validation to handle edge cases and invalid inputs gracefully.
Challenges and Solutions
Managing Two Stacks with Arrays:

Using arrays for stacks added complexity to memory management, particularly when resizing or shifting elements during operations. I solved this by implementing efficient shift algorithms and ensuring proper memory cleanup.
Minimizing Operations:

It was challenging to design an algorithm that consistently met the benchmark for sorting 100 and 500 integers. After researching and testing, I implemented a hybrid approach using predefined patterns for small stacks and advanced techniques (e.g., Quick Sort logic) for larger stacks.
Understanding Complexity:

Breaking down and analyzing the complexity of each operation helped me design a solution that balanced efficiency and clarity.
Benchmarks
The project meets the following benchmarks:

Sorting 100 random integers in fewer than 700 operations.
Sorting 500 random integers in fewer than 5500 operations.
How to Test
To test the program:

Run the following command to sort 100 random numbers and count the operations:

bash
Copy code
ARG=$(shuf -i 0-100 -n 100); ./push_swap $ARG | wc -l
Verify the output using the provided checker_OS program:

bash
Copy code
ARG=$(shuf -i 0-100 -n 100); ./push_swap $ARG | ./checker_OS $ARG
If the checker_OS program outputs OK, the sorting is successful.

Conclusion
The Push_Swap project taught me the importance of algorithmic thinking, memory management, and efficiency. Despite the challenges of using arrays for stacks, I successfully implemented a robust solution that meets the required benchmarks. This project has deepened my understanding of sorting algorithms and their practical applications.

css
Copy code

This README provides a clear overview of your project, highlights what you learned, and details how you overcame specific challenges. Let me know if you need further refinements!
