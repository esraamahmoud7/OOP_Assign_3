//
// Created by EGYPT on 12/10/2022.
//

#include "ENVector.h"
// Constructors and Big 4
template<class T>
ENVector <T>::ENVector (int x)
{
    cap = x;
    data = new T[cap];
    stored=0;
}
template<class T>
ENVector <T>::ENVector(T* ptr, int  n )
{
    stored=n;
    cap=n;
    data=new T[cap];
    for(int i=0;i<cap;i++)
    {
        data[i]=ptr[i];
    }
}
template<class T>
ENVector <T>::ENVector(const ENVector& v)
{
    cap=v.cap;
    data=new T[cap];
    stored=v.stored;
    for(int i=0;i<stored;i++)
    {
        data[i]=v.data[i];
    }
}
template<class T>
ENVector <T>::~ENVector()
{
  delete[] data;
}
template<class T>
ENVector<T>& ENVector<T> ::operator=(const ENVector<T>& v)
{
    if(this != &v)
    {
        delete[] data;
        cap = v.cap;
        stored=v.stored;
        data = new T[cap];
        for(int i = 0; i < cap; i++)
        {
            data[i] = v.data[i];
        }
    }
    return *this;
}
template<class T>
ENVector<T>&::ENVector<T>:: operator=(const ENVector&& v)
{
    if(this != &v)
    {
        delete[] data;
        cap = v.cap;
        stored=v.stored;
        data = new T[cap];
        for(int i = 0; i < cap; i++)
        {
            data[i] = v.data[i];
        }
    }
    v= nullptr;
    return *this;
}


// Access operations
template<class T>
T& ENVector<T>::operator[](int index)
{
    if(index <0 || index >=stored)
    {
        cout<<"Invalid index"<<endl;
        exit(1);

    }
    else
        return data[index];
}

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
