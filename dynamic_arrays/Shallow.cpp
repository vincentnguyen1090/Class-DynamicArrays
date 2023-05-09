//
// Created by vince on 3/4/2023.
//

#include "Shallow.h"
#include <iostream>
Shallow::Shallow(int d)
{
    data = new int; //allocate storage
    *data = d;
}
Shallow::~Shallow()
{
    delete data; //free storage
    std::cout << "Destructor freeing data" << std::endl;
}
Shallow::Shallow(const Shallow &source)
: data(source.data)
{
    std::cout << "Copy constrcutor - shallow" << std::endl;
}
void display_shallow(Shallow s)
{
    std::cout << s.get_data_value() << std::endl;
}