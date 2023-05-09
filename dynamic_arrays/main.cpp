#include <iostream>
#include "Vector.h"
#include <string>
#include "Shallow.h"
int main()
{
/*    Vector<std::string> firstList(5, "hello");

    std::cout << firstList.front() << "\n";
    std::cout << firstList.back() << "\n";
    firstList.push_back("World");
    std::cout << firstList.back() << "\n";
    firstList.push_back("Help");
    std::cout << firstList.back() << "\n";
    if(firstList.empty() == true)
        std::cout << "Vector is empty\n";
    else
        std::cout << "Vector is size " << firstList.size() << "\n";

    std::cout << firstList.at(0) << "\n";
    firstList.pop_back();
    std::cout << "Vector size is " <<firstList.size() << "\n";
    std::cout << firstList.back() << "\n";*/


    /*Vector<int> newList(5, 3);
    newList.resize(10, 6);
    std::cout << newList.size() << "\n";
    std::cout << newList.back() << "\n";
    std::cout << newList << "\n";

    newList += 5;
    newList += 22;
    std::cout << newList.back() << "\n";
    std::cout << newList;*/

/*    Vector<int> vect(5);
    vect.push_back(1);
    std::cout << vect.size() << "\n";
    vect.push_back(2);
    vect += 3;
    std::cout << vect.size() << "\n";
    std::cout << vect.back() << "\n";
    std::cout << vect.front() << "\n";
    std::cout << vect.at(7);*/


    Vector<int> a(3 ,3);
    //Vector<int> c = a : same as Vector<int> c{a}
    Vector<int> c;
    c = a;
    std::cout << "Vector a: \n" << a << "\n";
    std::cout << "Vector c: \n" << c << "\n";
    a.push_back(25);
    std::cout << "Vector a: \n" << a << "\n";
    std::cout << "Vector c: \n" << c << "\n";
    std::cout << c.size();

    /*Shallow obj1 {100};
    display_shallow(obj1);*/
    //obj1's data has been released

    return 0;
}
