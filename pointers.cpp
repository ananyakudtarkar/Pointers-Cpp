#include <iostream>
#include <cstdio>

int main() {

    int int_var = 10;
    int* p_int = &int_var;
    printf("The original address of the int is: %p\n", p_int);
    printf("The size of an int is: %d bytes\n", sizeof(int));
    p_int++;
    printf("The address of int after increment is: %p\n\n", p_int);

    float float_var = 10.5f;
    float* p_float = &float_var;
    printf("The original address of the float is: %p\n",p_float);
    printf("The size of a float is: %d bytes\n", sizeof(float));
    p_float++;
    printf("The address of float after increment is: %p\n\n", p_float);

 
    double double_var = 20.25;
    double* p_double = &double_var;
    printf("The original address of the double is: %p\n", p_double);
    printf("The size of a double is: %d bytes\n", sizeof(double));
    p_double++; 
    printf("The address of double after increment is: %p\n\n", p_double);

    char char_var = 'A';
    char* p_char = &char_var;
    printf("The original address of the char is: %p\n", p_char);
    printf("The size of a char is: %d bytes\n", sizeof(char));
    p_char++; 
    printf("The address of char after increment is: %p\n\n", p_char);

    bool bool_var = 1;
    bool* p_bool = &bool_var;
    printf("The original address of the bool is: %p\n", p_bool);
    printf("The size of a bool is: %d bytes\n", sizeof(bool));
    p_bool++; 
    printf("The address of bool after increment is: %p\n", p_bool);
    return 0;
} 
    
    
/*

OUTPUT :
The original address of the int is: 0x7ffdcda63224
The size of an int is: 4 bytes
The address of int after increment is: 0x7ffdcda63228

The original address of the float is: 0x7ffdcda63220
The size of a float is: 4 bytes
The address of float after increment is: 0x7ffdcda63224

The original address of the double is: 0x7ffdcda63218
The size of a double is: 8 bytes
The address of double after increment is: 0x7ffdcda63220

The original address of the char is: 0x7ffdcda63217
The size of a char is: 1 bytes
The address of char after increment is: 0x7ffdcda63218

The original address of the char is: 0x7ffdcda63216
The size of a char is: 1 bytes
The address of char after increment is: 0x7ffdcda63217


=== Code Execution Successful ===
*/ 
    
    
    
