
*****************
Singleton Pattern
*****************

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can 
compile as shown below::

 mkdir build
 cd build/
 cmake ../Chocolate/
 make
 ./driver/testchocolate


+------------------------------------------------------------------------------+
|패턴 6. 싱글턴                                                                |
+==============================================================================+
|해당 클래스의 인스턴스가 하나만 만들어지고, 어디서든지 그 인스턴스에 접근할 수|
|있도록 하기 위한 패턴                                                         |
+------------------------------------------------------------------------------+


Chocolate Boiler
================

Class Diagram
-------------

.. image:: Chocolate/imgs/Overview_of_Chocolate_Boiler.jpg
   :scale: 50 %
   :alt: Class Diagram


싱글턴을 쓸 때는 동기화 문제를 해결해야만 한다. 위 C++ 예제에서는 동기화 코드가
들어가 있지 않기 때문에 별도로 동기화 문제를 해결해야만 한다. 언어별로 제공되는
각종 동기화 기법을 사용하거나 아예 static 객체로 생성시키거나 안전한 시점에 객체
생성을 시키도록 하는 등의 방법을 쓸 수 있다.

