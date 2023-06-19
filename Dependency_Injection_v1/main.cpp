/**
*@ Code shows the dependency injection concept. The concept shown on the test programme emulated the work of a @warehouse with classes:
*@-container (oblect - container 1, container 2, container 3) - dependency in function
*@-container_2 (oblect - container 1, container 2, container 3) - dependency in class body
*@-container_2 (oblect - container 1, container 2, container 3) - dependency with uniq pointer on class
*@-transport (object - crane, train, truck)
*@-move (technical object for move and change location of containers)
* 
* */
#include <memory>
#include <iostream>
#include <string>

#include "containers.h"
#include "transport.h"


/**
 * @brief Creation of containers and transport and move it. 
 * @return changes printed on.
*/
int main() {

    std::cout << "------Dependency_1 type - class move called from function of container class----------------------" << "\n";


    std::cout << "Creation of transports:" << "\n";
    /**
    *@@ Here created some object from class transport for change states of another objects - containers
    **/
    transport* crane_1 = new transport("CRANE", "Crane_1", 111);
    transport* crane_2 = new transport("CRANE", "Crane_2", 222);
    transport* crane_3 = new transport("CRANE", "Crane_3", 333);
    transport* train_1 = new transport("TRAIN", "Train_1", 1234);
    transport* truck_1 = new transport("TRUCK", "Truck_1", 4321);
 
    std::cout << "\n"<< "Creation of containers : " << "\n";

    /**
    * @@Created containers with dependency from mooving, dependency implemented in function 
    **/
    
    container* cont1 = new container("test_1",  10);
    container* cont2 = new container("test_2", 100);
    container* cont3 = new container("test_3", 50);

    std::cout << "\n" << "Moovment of conttainer_1  : " << "\n\n";
        
    cont1->Do_smth();
    cont1->Set_location(21);
    cont1->Do_smth();
    cont1->change_location(200, *crane_1);
    delete cont1;

    std::cout << "\n" << "Moovment of conttainer_2  : " << "\n\n";
    
    cont2->Set_location(210);
    cont2->Do_smth();
    cont2->change_location(200, *train_1);
    cont2->Do_smth();
    delete cont2;

    std::cout << "\n" << "Moovment of conttainer_3  : " << "\n\n";

    cont3->Set_location(110);
    cont3->Do_smth();
    cont3->change_location(200, *truck_1);
    cont3->Do_smth();
    delete cont3;
   
    std::cout <<"\n" << "------Dependency_2 - class move created in the body of container class-----------" << "\n";

    std::cout << "\n" << "Creation of containers : " << "\n";
    
    /**
    * @@Created containers with dependency from mooving, dependency implemented in body of class 
    **/

    container_2* cont_2_1 = new container_2("test_2_1", 10);
    container_2* cont_2_2 = new container_2("test_2_2", 100);
    container_2* cont_2_3 = new container_2("test_2_3", 50);

    std::cout << "\n" << "Moovment of conttainer_2_1  : " << "\n\n";
       
    cont_2_1->Do_smth();
    cont_2_1->Set_location(21);
    cont_2_1->change_location(200, *truck_1);
    delete cont_2_1;
    
    std::cout << "\n" << "Moovment of conttainer_2_2  : " << "\n\n";


    cont_2_2->Do_smth();
    cont_2_2->Set_location(21);
    delete cont_2_2;

    std::cout << "\n" << "Moovment of conttainer_2_3  : " << "\n\n";

    cont_2_3->Do_smth();
    cont_2_3->Set_location(21);
    delete cont_2_3;

    std::cout << "\n" << "Creation of containers : " << "\n";

    /**
    * @@Created containers with dependency injection by pointers
    **/
    
    container_3* cont_3_1 = new container_3("test_3_1", 10);
    container_3* cont_3_2 = new container_3("test_3_2", 100);
    container_3* cont_3_3 = new container_3("test_3_3", 50);

    std::cout << "\n" << "Moovment of conttainer_3_1  : " << "\n\n";

    cont_3_1->Do_smth();
    cont_3_1->Set_location(21);
    cont_3_1->change_location(200, *truck_1);
    delete cont_3_1;

    std::cout << "\n" << "Moovment of conttainer_3_2  : " << "\n\n";


    cont_3_2->Do_smth();
    cont_3_2->Set_location(21);
    delete cont_3_2;

    std::cout << "\n" << "Moovment of conttainer_3_3  : " << "\n\n";

    cont_3_3->Do_smth();
    cont_3_3->Set_location(21);
    delete cont_3_3;

}

