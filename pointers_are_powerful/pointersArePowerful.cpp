// pointersArePowerful.cpp
// CIT 66
// Spring 25
// by Mark Edmunds
//
#include <iostream>
#include <array>

using  namespace std;

int main() {
    // MARK: - Pointer Basics
    /*
     Write a program that declares an integer variable a and a pointer p to an integer.
     Assign the address of a to p. Print the address stored in p and the value of a using p.
     Change the value of a using p and print the new value of a.
     */
    cout << "-------- Begin Pointer Basics ---------" << endl;
    int a;
    // set pointer to address of a
    int *p = &a;
    cout << "Address stored in p: " << p << endl;
    // set value of a using p
    *p = 5;
    cout << "Value of a using p: " << *p << endl;
    a = *p;
    cout << "New value of a: " << a << endl;
    cout << "-------- End Pointer Basics ---------" << endl;

    // MARK: - Pointer Arithmetic
    /*
    Create an array arr of integers with 5 elements.
    Write a program that prints the address of each element in the array using pointer arithmetic.
    Increment a pointer to traverse the array and print each value.
     */
    cout << "-------- Begin Pointer Arithmatic ---------" << endl;
    // create array
    int arr[5] = {1, 2, 3, 4, 5};
    // create pointer to array
    int* p_arr = arr;
    // loop through array
    for (int i = 0; i < 5; i++) {
        cout << "The address of element " << i << " is: " << (p_arr + i) << " it's value is " << *(p_arr + i) << endl;
    }
    cout << "-------- End Pointer Arithmatic ---------" << endl;
    return 0;
}