#include "include/declaration.hpp"

template class Vector<int>;

template <class T>
Vector<T>::Vector()
{
    my_vector.clear();
    size =0;
}

template <class T>
Vector<T>::~Vector()
{
    my_vector.clear();
    size =0;
}

template <class T>
void Vector<T>::push_bac(T var)
{
    my_vector.push_back(var);
}

template <class T>
void Vector<T>::pop_bac()
{
    my_vector.pop_back();
}
