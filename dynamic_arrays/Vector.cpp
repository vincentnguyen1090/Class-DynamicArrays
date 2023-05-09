//
// Created by ray on 2/23/2023.
//


#ifndef DYNAMIC_ARRAYS_VECTOR_CPP
#define DYNAMIC_ARRAYS_VECTOR_CPP
#include "Vector.h"
template <typename T>
Vector<T>::Vector()
{

}
template <typename T>
Vector<T>::Vector(int size, const T &defaultValue)
: m_size(size), m_capacity(size)
{
    arr = new T[m_size];
    for (int i = 0; i < m_size; ++i)
    {
        *(arr + i) = defaultValue;
    }
}
template <typename T>
Vector<T>::Vector(int size)
: m_size(size), m_capacity(size)
{
    arr = new T[m_size];
}
template <typename T>
void Vector<T>::push_back(const T &item)
{
    std::cout << m_size << "&" << m_capacity << std::endl;
    if(m_size == m_capacity)
    {
        resize(m_capacity * 2);
    }
    *(arr + m_size) = item;
    ++m_size;
}
template <typename T>
int Vector<T>::size()
{
    return m_size;
}
template <typename T>
T& Vector<T>::front()
{
    return *arr;
}
template <typename T>
T& Vector<T>::back()
{
    return *(arr + m_size - 1);
}
template <typename T>
bool Vector<T>::empty()
{
    return m_size == 0;
}
template <typename T>
T& Vector<T>::at(int index) const
{
    if(index < 0 || index >= m_size)
    {
        std::cout << "Out of range";
    }
    return *(arr + index);
}
template <typename T>
void Vector<T>::pop_back()
{
    T *temp = new T[m_size - 1];
    //copying arr into smaller temp
    for (int i = 0; i < m_size - 1; ++i)
    {
        *(temp + i) = *(arr + i);
    }
    delete [] arr;
    arr = temp;
    //since we are removing one element
    --m_size;
}
template <typename T>
void Vector<T>::resize(int size)
{
    T *temp = new T[size];
    for (int i = 0; i < m_size; ++i)
    {
        *(temp + i) = *(arr + i);
    }
    delete [] arr;
    arr = temp;
}
template <typename U>
std::ostream& operator << (std::ostream& out, const Vector<U>& vector)
{
    for (int i = 0; i < vector.m_size; ++i)
    {
        out << "Index " << i << ": " <<  *(vector.arr + i) << "\n";
    }
    return out;
}
template <typename T>
Vector<T>& Vector<T>::operator+=(const T& item)
{
    push_back(item);
}
//copy constructor
template <typename T>
Vector<T>::Vector(const Vector& vector) : Vector()
{
     *this = vector;
}
//deconstructor
template<typename T>
Vector<T>::~Vector()
{
    delete [] arr;
}
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& rhs_vector)
{
    //vec1 = vec1
    if(this == &rhs_vector)
        return *this; //return current object
    m_size = 0;
    m_capacity = 0;
    this->~Vector();
    for (int i = 0; i < rhs_vector.m_size; ++i)
    {
        push_back(rhs_vector.at(i));
    }
    return *this;
}






#endif
