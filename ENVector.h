//
// Created by EGYPT on 12/10/2022.
//

#ifndef OOP_ASSIGN_3_ENVECTOR_H
#define OOP_ASSIGN_3_ENVECTOR_H

#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

template<class T>


class ENVector
{
private:
    T* data;
    int cap;
    int stored;
    
public:
// Constructors and Big 4
    ENVector (int);			// Initialize by specific capacity
// No content is added, size = 0
// Assign a default size value
    ENVector (T*, int  n );		// Initialize by n items from array
    ENVector (const ENVector&);	// Initialize with a copy
    ~ENVector();			// Delete allocated memory
    ENVector &operator=(const ENVector&);  // Copy assignment
    ENVector &operator=(const ENVector&&); // Move assignment

// Access operations
    T& operator[](int); // Access item by reference
    // Throw an exception if out of range

// Modifying operations
    int push_back(T); // Add item to end of vec & return # of items
    // Increase capacity of needed
    T pop_back();     // Remove and return last element in vec
    void erase(iterator);        // Remove item at iterator
    // Throw exception if invalid iter
    void erase(iterator1, iterator2);// Remove items between
// iterator 1 <= iterator 2 otherwise do nothing
// Throw exception if any iterator outside range
    void clear();     // Delete all vector content
    void insert(iterator, T);       // Insert item at iterator
    // Throw exception if invalid

// Iterators 		// Supports *, + and ++ operations at least
// Can use: typedef T* iterator
    // Or u can use std::iterator so you can
// apply STL algorithms on XYVector
    iterator begin();	// Return an iterator (T*)
    iterator end();	// Return an iterator (T*)

// Comparison operations
    bool operator==(const ENVector<T>&); // Return true if ==
    bool operator< (const ENVector<T>&); // Compares item by item
    // Return true if first different item in this is < in other

// Capacity operations
    int size() const;     // Return current size of vec
    int capacity() const; // Return size of current allocated array
    int resize();         // Relocate to bigger space
    bool empty();        // Return true if size is 0

// Friends
    friend ostream& operator << (ostream& out, ENVector<T>);

};


#endif //OOP_ASSIGN_3_ENVECTOR_H
