//
// Created by EGYPT on 12/10/2022.
//

#include "ENVector.h"
// Constructors and Big 4
template<class T>
ENVector <T>::ENVector (int x)
{}
template<class T>
ENVector <T>::ENVector(T* ptr, int  n )
{}
template<class T>
ENVector <T>::ENVector(const ENVector& v)
{}
template<class T>
ENVector <T>::~ENVector()
{}
template<class T>
ENVector<T>& ENVector<T> ::operator=(const ENVector<T>& v)
{}
template<class T>
ENVector<T>&::ENVector<T>:: operator=(const ENVector&& v)
{}


// Access operations
template<class T>
T& ENVector<T>::operator[](int index)
{}

// Modifying operations
template<class T>
int ENVector<T>::push_back(T item)
{}
template<class T>
T ENVector<T>::pop_back()
{}
template<class T>
void ENVector<T>::erase(iterator)
{}
template<class T>
void ENVector<T>::erase(iterator1, iterator2)
{}
template<class T>
void ENVector<T>::clear()
{}
template<class T>
void ENVector<T>::insert(iterator, T)
{}

// Iterators
template<class T>
iterator ENVector<T>::begin()
{}
template<class T>
iterator ENVector<T>::end()
{}

// Comparison operations
template<class T>
bool ENVector<T>::operator==(const ENVector<T>& v)
{}
template<class T>
bool ENVector<T>::operator< (const ENVector<T>& v)
{}

// Capacity operations
template<class T>
int ENVector<T>::size() const
{}
template<class T>
int ENVector<T>::capacity() const
{}
template<class T>
int ENVector<T>::resize()
{}
template<class T>
bool ENVector<T>::empty()
{}

// Friends
template<class T>
ostream&  operator<< (ostream& out, ENVector<T> v)
{}