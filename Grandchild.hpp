#ifndef LAB3_GRANDCHILD_HPP
#define LAB3_GRANDCHILD_HPP
#include "Child.hpp"

class Grandchild : public Child{
private:
    std::string home_city;
public:
    Grandchild();
    ~Grandchild() = default;
    void print() override;

};

#endif //LAB3_GRANDCHILD_HPP
