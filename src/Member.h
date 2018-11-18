//
// Created by Andrew Gonzalez on 11/8/18.
//

#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include "Person.h"

class Member : public Person {
public:
    Member();
    ~Member();
    void display();
    void addService();
    void deleteService();
private:
    //Member_Service * head;
    //Member_Service * tail;
};


#endif MEMBER_H
