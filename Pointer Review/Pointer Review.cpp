/*
Name of the File: Pointer Review.cpp
Purpose: Doing a review on pointers in this file
Coder: Adrian Onofre
Date: September 4, 2024
*/

#include <iostream>
#include <crtdbg.h>

/*

Name: populate_array
Purpose: To assign values to the elements of an array
Takes in: A reference to an array and the size of the array
Returns: Nothing

*/

void populate_array(int* array, const int size) {

    int* pointer = array;

    for (int i = 0; i < size; i++) {


        //Assign value 

        //array[i] = i; //We can use pointer as an arrays
        //* (array + i) = i;

        std::cout << *pointer++ << " , ";

    }



}

/*

Name: print_array
Purpose: To print the values of an array
Takes in: A reference to an array and the size of the array
Returns: Nothing

*/

void print_array(int* array, const int size) {

    int* pointer = array;

    for (int i = 0; i < size; i++) {

        //Alternative way of transversing over an array through a pointers
        //std::cout << array[i] << std::endl;
        std::cout << *(array + i) << " , ";

        std::cout << *pointer++ << " , ";

    }

}

int main()
{
    std::cout << "Pointer Review " << std::endl;

    int i;
    i = 42;

    std::cout << "The value of i " << i << std::endl;
    std::cout << "The address that has the value of i is " << &i << std::endl;

    int* i_pointer = &i;

    std::cout << "The value that the pointer points to is: " << i_pointer << std::endl;

    std::cout << "The address that the pointer point store is: " << *i_pointer << std::endl;

    *i_pointer = 99;

    std::cout << "The value of i is now: " << i << std::endl;

    //Create a stack array

    //Locating a block of integer in memory (5)

    //5 x 4 = 20 on memory
    int stack_array[5];

    for (int i = 0; i < 5; i++) {

        /*
        std::cout << "The address of element " << i << " is " << &stack_array[i] << std::endl;
        */

        //Assign values

        stack_array[i] = 2 * i;

        std::cout << "The values of the array are " << stack_array[i] << " , ";

    }

    std::cout << "Working with the array through a pointer" << std::endl;

    //Create a pointer to the array

    int* stack_array_pointer = stack_array; //Pointing to the first element of the memory boker of the array

    //stack_array_pointer = & stack_array[0]; // This is just an alternative way

    for (int i = 0; i < 5; i++) {

        //std::cout << *stack_array_pointer++ << " , "; // The reason for using parentheses here is that * has higher precedence than + 
        
        //The reason of the bracket is * operator is higher privilage than + operator
        std::cout << *(stack_array_pointer + i) << " , ";

    }

    //Create function that accepts a pointer to an array
    //And the size to populate the array
    //And another function to print the array

    populate_array(stack_array, 5);
    print_array(stack_array, 5);

    //Create a heap array using a pointer

    int* heap_array_pointer = new int[100];

    //Add memory leak checking code 

    //Only use data struture when using huge data structures

    //Using dynamic memory allocation and you want to make sure not leak
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    //Free the resources for the allocated array

    //Second allocation is freed but the first allocation is lost as we no longer have a pointer to it

    delete[] heap_array_pointer;

    heap_array_pointer = new int[5];

    delete[] heap_array_pointer;

    //Solve the above problem od memory leak - fixed

    

}



