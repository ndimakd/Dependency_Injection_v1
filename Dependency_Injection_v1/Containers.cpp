#include <iostream>
#include <string>

#include "containers.h"
#include "transport.h"

/**
 * @brief container work emulation
*/
void container::Do_smth()
{
        std::cout << "Container: " << _name << ": I am exist and do smth: " <<" Location: " << _location << "\n";
}

/**
 * @brief In that function for conainer cteates object for change locatin of container
 * @param new_location 
 * @param object - transport object that take part in the moving.
*/
void container::change_location(int new_location, transport &object)
{
  
    move* destination = new move(_name, _location, new_location); ///@ Create dependency
    
    object.move_by_transport(); ///@ function in transport body emulated work of an object in moving container
    destination->move_to(_name, object); ///@  emulation of moving 
    _location = new_location; ///@ set new location for the container

    delete destination; ///@ We removed the move object when the task was completed

   std::cout << "container: "<< _name << " has been moved to new location: " << new_location << "\n";
      
}


/**
 * @brief container work emulation
*/
void container_2::Do_smth()
{
    std::cout << "Container: " << _name << ": I am exist and do smth: " << " Location" << _location << "\n";
}

/**
 * @brief for change locatin of container, object "move" was created in class body 
 * @param new_location
 * @param object - transport object that take part in the moving.
*/
void container_2::change_location(int new_location, transport &object)
{
    destination_2->set_new_location(new_location); ///@@ we set new location wen we decide to move
    object.move_by_transport(); ///@@ function in transport body emulated work of an object in moving container
    destination_2->move_to(_name, object);  ///@@  emulation of moving 
    _location = new_location; ///@@ set new location for the container


   std::cout << "Container: " << _name << " has been moved to new location: " << _location << "\n";

}

