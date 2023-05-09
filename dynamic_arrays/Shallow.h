//
// Created by vince on 3/4/2023.
//

#ifndef DYNAMIC_ARRAYS_SHALLOW_H
#define DYNAMIC_ARRAYS_SHALLOW_H


class Shallow
{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d;}
    int get_data_value() {return *data;}
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();

};
void display_shallow(Shallow s);


#endif //DYNAMIC_ARRAYS_SHALLOW_H
