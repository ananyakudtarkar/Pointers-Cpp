# Pointers in C++

**AIM:** Demonstration of pointers in C++

**THEORY:**

In C++, a pointer is a variable that stores the memory address of another variable. Instead of holding a value directly, it "points" to the location in memory where that value is stored. This allows for powerful and flexible memory manipulation.

Pointers:
Declaration: A pointer is declared with an asterisk * before its name. For example, int* ptr; declares a pointer ptr that can hold the address of an integer.
Address-of Operator (&): This operator gives you the memory address of a variable. int num = 5; int* ptr = &num; assigns the address of num to ptr.
Dereference Operator (*): This operator accesses the value at the address a pointer is pointing to. cout << *ptr; would print the value 5.
Pointer Arithmetic: You can perform arithmetic operations like addition and subtraction on pointers. When you add an integer n to a pointer, the pointer's address increases by n times the size of the data type it points to. For example, ptr++ moves the pointer to the next memory location for the variable's data type.

Algorithms for Pointer-Based Code Snippets
Here are the algorithms for the provided C++ code examples, explained in simple steps.

1. Pointer Subtraction
This code calculates the difference between the values pointed to by two pointers, which are pointing to different elements of the same array.

Algorithm:
1. Declare and initialize an integer array arr with five elements.
2. Declare an integer pointer pA1 and initialize it with the memory address of the third element of arr (arr[2]).
3. Declare an integer pointer pA2 and initialize it with the memory address of the fifth element of arr (arr[4]).
4. Calculate the difference between the values pointed to by pA1 and pA2 using the dereference operator (*).
5. Store this difference in an integer variable diff.
6. Print the value of diff.

2. Printing a String with a Pointer
This code snippet uses a pointer to iterate through a C-style string and print each character until the null terminator (\0) is reached.

Algorithm:
1. Declare and initialize a character array str with the string "Batman".
2. Declare a character pointer ptr and initialize it to point to the beginning of the str array.
3. Start a while loop that continues as long as the character at the current address (*ptr) is not the null terminator (\0).
4. Inside the loop, print the character that ptr is currently pointing to.
5. Increment the pointer ptr to move to the next character in memory.
6. The loop terminates when ptr points to the \0 character, and the program returns.

3. Printing an Array in Reverse
This code demonstrates how to use pointer arithmetic to print an array's elements in reverse order without using a reverse loop.

Algorithm:
1. Prompt the user to enter the number of elements n for an array and read the input.
2. Prompt the user to enter n elements and store them in an integer array arr.
3. Declare an integer pointer ptr and initialize it to point to the last element of the array. This is done by adding n-1 to the base address of arr.
4. Start a for loop that runs n times.
5. Inside the loop, print the value that ptr is currently pointing to (*ptr).
6. Decrement the pointer ptr to move it to the previous element in the array.
7. The loop will print each element from last to first, and the program will then return.
