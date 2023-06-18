# Dependency_Injection_v2_1

Dependency_Injection_v2_1


Code shows the dependency injection concept. The concept shown on the test programme emulated the work of a warehouse with classes:
-container (oblect - container 1, container2)
-transport (object - crane, train, truck)
-move (technical object for move and change location of containers)

1. Dependency in the function. Class colled in function anothr class (implemented with container)Class container call function that cheate another class. That example is very easy for implementation, but it is difficult for bug tracking and implementation of new functionalities because you have to track classes and functions. It is difficult to test only class because function influence.
2. Dependence in class constructor. Object created in a constructor (implemented with container_2). Such implementation of dependency lets us test modules separately. Add new functionality, some easy for tracking.3..modules separately
3.


