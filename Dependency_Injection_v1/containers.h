#pragma once
#include "transport.h"
#include "move.h"


/**
 * @brief This class implement concept of dependency implemented in function
*/
class container {
public:
    /**
     * @brief constructor of classe
     * @param name  - name of jbject
     * @param mass  - technichal var, not used in this programm
    */
    container(std::string const& name, int const& mass) : _name(name), _mass(mass) 
    {
        std::cout << "Container: " << _name << " create! Location: " <<_location << "\n";
    }
    /**
     * @brief destructor implemened for control delation of ojects
    */
    ~container() { std::cout << "Container: " << _name << " delated" << "\n"; }
    /**
     * @brief Setters set location of object, when object created it is 0. 
     * @param location just int number in real - x,y,z,
    */
    void Set_location(int location) 
    {
        _location = location;
        std::cout << "Container: " << _name << ": " << "New location is: " << _location << "\n";
    }
    /**
     * @brief Getter for getting current location of object
     * @return return current location, int in that programm
    */
    int Get_location() 
    {
        return _location;
    }
   
    /**
     * @brief Emullation of work
    */
    void Do_smth();
    /**
     * @brief change location of an object, in that function created dependency 
     * @param new_location 
     * @param object  
    */
    void change_location(int new_location, transport &object);
/**
 * @brief standart variable of class
 * @  parametrs  _location  - set by setter, _name and _mass - constructor 
*/
private:
    std::string _name;
    int _mass = 0;
    int _location =  0;
};


/**
 * @brief  This class shows concept of dependency implemented in body of class

*/
class container_2 {
    /**
     * @brief constructor that created dependency
     * @created object of move class
    */
    move* destination_2 = new move(_name, _location, _location);

public:
    /**
 * @brief constructor of classe
     * @param name  - name of jbject
     * @param mass  - technichal var, not used in this programm
    */
    container_2(std::string const& name, int const& mass) : _name(name), _mass(mass) 
    {
        std::cout << "Container: " << _name << " create! Location: "<<_location  << "\n"; 
    }
    /**
     * @brief Destructor with additional message about destruction
    */
    ~container_2() { std::cout << "Container: " << _name << " deleted" << "\n"; }
    /**
     * @brief Setters set location of object, when object created it is 0.
     * @param location just int number in real - x,y,z,
    */
    void Set_location(int location) 
    {
        _location = location;
        std::cout << "Container: " << _name << ": " << "New location is: " << _location << "\n";
    }
    /**
     * @brief Getter for getting current location of object
     * @return return current location, int in that programm
    */
    int Get_location() 
    {
        return _location; 
    }

    /**
     * @brief Emulation of work
    */
    void Do_smth();
    /**
     * @brief change location of an object
     * @param new_location
     * @param object
    */
    void change_location(int new_location, transport &object);

/**
 * @brief standart variable of class
 * @  parametrs  _location  - set by setter, _name and _mass - constructor
*/
private:
    std::string _name;
    int _mass = 0;
    int _location = 0;
};

