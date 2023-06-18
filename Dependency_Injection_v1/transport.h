#pragma once

/**
 * @brief for cteating transport object that moves containers (ctanes, trucks, trains...)
*/
class transport
{

public:
    /**
     * @brief  constructor of an object
     * @param type  (crane, truck, train,....) there are no predited types in that task
     * @param name, name of an object
     * @param number, of an object
    */
    transport(std::string type, std::string name, int number) : _type(type), _tname(name), _number(number) { std::cout << "Transport type: " << _type << " Name:  " << "Number: " << _number << " activated" << "\n"; }

    /**
     * @brief getters 
     * @return name of an object
    */
    std::string get_name() { return _tname; };

    /**
     * @brief Emulation of movement, kind of function in reality 
    */
    void move_by_transport();

private:
    /**
     * @brief variables sets by constructor
    */
    std::string _type;
    std::string _tname;
    int _number;

};

