# Dependency_Injection_v2_1

Dependency_Injection_v2_1

IDE:
Microsoft Visual Studio Community 2022 (64-bit) - Current
Version 17.6.0



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



2. Dependence in class constructor. Object created in a constructor (implemented with container_2). 
+ test only class
+ Add new functionality, some easy for tracking
- created object live, may be difficulties with many "heavy" objects

3. Dependency injection with smart pointers. 
+ smart pointer controls connection





