
*************
State Pattern
*************

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can 
compile as shown below::

 mkdir build
 cd build/
 cmake ../GumballStateWinner/
 make
 ./driver/testgumballstatewinner


gumballStateWinner
==================

Class Diagram
-------------

.. image:: GumballStateWinner/imgs/Overview_of_GumballStateWinner.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: GumballStateWinner/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


Statechart Diagram
-------------------

.. image:: GumballStateWinner/imgs/StatechartDiagram1.jpg
   :scale: 50 %
   :alt: Statechart Diagram



위 예제에서처럼 **상태 전환 코드** 를 상태 클래스에 집어 넣으면 상태 클래스들
사이에 의존성이 생긴다는 단점이 있다. GumballMachine을 구현한 코드를 보면 구상
상태 클래스를 코드에 직접 집어넣는 대신 Context 객체의 게터 메소드를 써서 그나마
의존성을 최소화 하려고 노력했음을 알 수 있다.

상태 전환의 흐름을 결정하는 코드를 어느 쪽에 집어 넣는지에 따라서, 시스템이 점점
커지게 될 때, 어떤 클래스(Context 또는 상태 클래스)가 변경에 대해서 닫혀지게
되는지가 결정된다.

상태 전환이 고정되어 있으면 상태 전환 흐름을 결정하는 코드를 Context에 집어
넣어도 된다. 하지만 이 예제에서 처럼 **상태 전환이 동적으로 결정되는 경우에는
상태 클래스 내에서 처리하는 것이 좋다.** (GumballMachine 에서 NoQuarter 또는
SoldOut 으로 전환하는 결정은 실행중에 남아있는 알맹이의 개수에 따라 동적으로
결정될 수 밖에 없다.)


+------------------------------------------------------------------------------+
|패턴 13. 스테이트                                                             |
+==============================================================================+
|객체의 내부 상태가 바뀜에 따라서 객체의 행동을 바꿀 수 있다. 마치 객체의      |
|클래스가 바뀌는 것과 같은 결과를 얻을 수 있다.                                |
+------------------------------------------------------------------------------+

.. image:: State.jpg
   :scale: 50 %
   :alt: GoF's State Pattern


**"한가지 비밀을 알려드릴까요? 스트래티지 패턴하고 스테이트 패턴은 태어나자마자
헤어지긴 했지만 원래 쌍둥이랍니다."**


+-------------------------------------+----------------------------------------+
|스테이트 패턴                        |스트래티지 패턴                         |
+=====================================+========================================+
|상태 객체에 일련의 행동(여러개의     |클라이언트에서 컨택스트 객체에게 어떤   |
|함수)을 캡슐화 한다. 상황에 따라     |전략 객체를 사용할지를 지정해 준다.     |
|Context 객체에서 여러 상태 객체 중 한|그리고 실행시에 전략 객체를 변경할 수   |
|객체에게 모든 행동을 맡기게 된다.    |있는 유연성을 제공해 준다.              |
+-------------------------------------+----------------------------------------+
|컨택스트 객체에 수많은 조건문을 넣는 |서브클래스를 만드는 방법을 대신해서     |
|대신 사용할 수 있는 패턴이다. 행동을 |유연성을 극대화 하는 용도로 사용된다.   |
|상태 객체 내에 캡슐화 시켜서 컨택스트|                                        |
|내의 상태 객체를 바꾸는 것을 통해    |                                        |
|컨택스트 객체의 행동을 바꿀 수 있기  |                                        |
|때문이다.                            |                                        |
+-------------------------------------+----------------------------------------+


| 참고 :
`OOP란 조건문(if)을 줄이는 것 <http://alankang.tistory.com/249>`_

`On the Criteria to be used in Decomposing Systems into Modules
<http://www.cs.umd.edu/class/spring2003/cmsc838p/Design/criteria.pdf>`_

