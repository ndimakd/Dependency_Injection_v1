#pragma once
#include <memory>
#include "transport.h"

/**
 * @brief object of that class changes location of objects container and container_2 
 * @ for this used another object transpotr
*/
class move {
public:

    /**
     * @brief constuctor for pointers
    */
    move() {}

    /**
     * @brief constructor 
     * @param name - name of object that will  move
     * @param start_location - current location of the object
     * @param end_location  - goal location of the object
    */
    move(std::string name, int start_location, int end_location) : _move_name(name), _start_location(start_location), _end_location(end_location) {}
    ~move() { std::cout << "Move_function of  " << _move_name << " finished, move function delated" << "\n"; }

    /**
     * @brief setters of new location if oject creates in class body it created with start_location=end_location 
     *  it changes when it needs. 
     * @param new_location 
    */
    void set_new_location(int new_location) { _end_location = new_location; }

    /**
     * @brief function that take transport object and change location of container. container can't move without it
     * @param name name of container that will move 
     * @param object  name of transport
    */
    void move_to(std::string name, transport object);

private:
    /**
     * @brief _move_name  -  object that will move
     * @_start_location - location of an object
     * @_current location - for future, not uded in this task, needed for the long movement
     * @_end location - location wil move
    */
    std::string _move_name;
    int _start_location =0;
    int _current_location =0;
    int _end_location =0;

};
