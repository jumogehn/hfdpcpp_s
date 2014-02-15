
*****************
Decorator Pattern
*****************

Starbuzz
========

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can 
compile as shown below::

 mkdir build
 cd build
 cmake ../Content/
 make
 ./driver/testdecorator


+------------------------------------------------------------------------------+
|디자인 원칙 - OCP (Open-Closed Principle)                                     |
+==============================================================================+
|클래스는 확장에 대해서는 열려 있어야 하지만 코드 변경에 대해서는 닫혀 있어야  |
|한다.                                                                         |
+------------------------------------------------------------------------------+


+------------------------------------------------------------------------------+
|패턴 3. 데코레이터                                                            |
+==============================================================================+
|객체에 추가적인 요건을 동적으로 첨가한다. 데코레이터는 서브클래스를 만드는    |
|것을 통해서 기능을 유연하게 확장할 수 있는 방법을 제공한다.                   |
+------------------------------------------------------------------------------+


.. image:: Decorator.jpg
   :scale: 50 %
   :alt: GoF's Decorator Pattern



Class Diagram
-------------

.. image:: Content/imgs/Overview_of_Starbuzz.jpg
   :scale: 50 %
   :alt: Class Diagram


예제 코드에서는 각 구상 CondimentDecorator 클래스에서 Beverage 클래스로의
연관관계를 가지고 있다. 데코레이터 패턴의 템플릿에서 처럼 이를
CondimentDecorator 클래스가 가지도록 하는 것이 더 좋아보인다. 이렇게 할 때
새로운 CondimentDecorator의 구상 클래스를 작성하게 될 때 마다 동일한 변수를
매번 선언하지 않아도 되는 장점이 있기 때문이다.


Sequence Diagram
----------------

.. image:: Content/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


