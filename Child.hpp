#ifndef LAB3_CHILD_HPP
#define LAB3_CHILD_HPP
#include "Parent.hpp"

class Child : public Parent{
protected:
    Parent* parent;
public:
    Child();
    ~Child();
    void print() override;
};

#endif //LAB3_CHILD_HPP
