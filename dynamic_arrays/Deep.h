//
// Created by vince on 3/4/2023.
//

#ifndef DYNAMIC_ARRAYS_DEEP_H
#define DYNAMIC_ARRAYS_DEEP_H


class Deep
{
private:
    int *data;
public:
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};


#endif //DYNAMIC_ARRAYS_DEEP_H
