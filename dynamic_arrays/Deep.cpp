//
// Created by vince on 3/4/2023.
//

#include "Deep.h"
Deep::Deep(int d)
{
    data = new int;
    *data = d;
}
Deep::~Deep()
{
    delete data;
}
Deep::Deep(const Deep &source)
{
    data = new int; //allocate storage
    *data = *source.data;
    //Deep copy - create new storage and copy values
}