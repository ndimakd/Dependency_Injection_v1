# Dependency_Injection_v2_1

Dependency_Injection_v2_1

IDE:
Microsoft Visual Studio Community 2022 (64-bit) - Current
Version 17.6.0

solution: Dependency_Injection_v1.sln
programm files:
\Dependency_Injection_v1\
    main.cpp
    containers.h
    containers.cpp
    move.h
    move.cpp
    transport.h
    transport.cpp

Doxygen:
\Dependency_Injection_v1\Doxygen\html\index

PlantUML:
PlantUM_DI.txt // code
PlantUM_DI     // picture

Programme  shows the dependency injection concept. The concept shown on the test programme emulated the work of a warehouse with classes:
-container (oblect - container 1, container2)
-transport (object - crane, train, truck)
-move (technical object for move and change location of containers)

1. Dependency in the function. Class colled in function anothr class (implemented with container)Class container call function that cheate another class.
+ object created and destroyed when it needed.
+ easy for implementation

- difficult for bug tracking 
- difficult for implementation of new functionalities because you have to track classes and functions.  
- it is difficult to test only class (module testing) because function influence.



2. Dependence on class constructor. Object created in a constructor (implemented with container_2). 
+ you can test class separately 
+ Add new functionality, some easy for tracking
- easy to forget to delete created object

3. Dependency injection with smart pointers. 
+ smart pointer controls connection
+ create and delete controls by pointers
+ standard library that gives the most stable code


PS. There are some additional libraries for dependency injection, like boost DI or kangaru DI frameworks. Perhaps these libraries give more clear realization of dependency injection  -  give control for connection between client and server to the third part. Using these libraries depends on companies and IT security requirements. 



