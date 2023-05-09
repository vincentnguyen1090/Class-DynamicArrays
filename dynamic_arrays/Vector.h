//
// Created by vince on 2/23/2023.
//

#ifndef DYNAMIC_ARRAYS_VECTOR_H
#define DYNAMIC_ARRAYS_VECTOR_H
#include <iostream>
template <typename T>
class Vector
{
private:
    //size is # of elements currently in the list
    //capacity is # of items allowed in the list
    int m_size = 0, m_capacity = 0;
    T *arr = nullptr;
public:
    //vector <int> v;
    //vector <int>* this = &v;
    Vector();
    Vector(int size, const T &defaultValue);
    Vector(int size);
    Vector(const Vector &vector); //copy constructor
    ~Vector(); //deconstructor

    void push_back(const T &item);
    //'T&' means the function returns the reference of an object of type 'T'
    T& front();
    T& back();
    T& at(int index) const;

    int size();
    bool empty();
    void pop_back();//remove last element in the array
    void resize(int size);

    template<typename U>
    friend std::ostream& operator<< (std::ostream& out, const Vector<U>& theVector);
    Vector& operator +=(const T& item);
    Vector& operator=(const Vector<T>& vector);
};

#include "Vector.cpp"
#endif //DYNAMIC_ARRAYS_VECTOR_H
