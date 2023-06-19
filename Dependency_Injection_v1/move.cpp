#include <iostream>
#include <string>
#include <memory>
#include "move.h"



/**
 * @brief change location of containers
 * @param name - container's name
 * @param object - transport that take part in the moving 
*/
void move::move_to(std::string name, transport object)
{
    std::cout << "Container: " << name << " is moving by " << object.get_name() << " to new location: " << _end_location << "\n";
}


