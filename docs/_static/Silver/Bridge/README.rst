
***************
Bridge Pattern
***************

Remotes
=======

How to use cmake environment
----------------------------

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below

**Compile**
::
 mkdir build
 cd build/
 cmake ../Remotes/
 (cmake ../Remotes/ -DCMAKE_INSTALL_PREFIX=/usr/local)
 make


**Test**
::
 make test
 ctest


**Install**
::
 (sudo) make install


**Use**
::
 ./driver/testremotes
 (testremotes)


**Creating binary distributing**
::
 cpack -C CPackConfig.cmake


**Creating source distributing**
::
 cpack -C CPackSourceConfig.cmake


Class Diagram
-------------

.. image:: Remotes/imgs/Overview_of_Remotes.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: Remotes/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram

+------------------------------------------------------------------------------+
|패턴 B. 브릿지                                                                |
+==============================================================================+
|구현뿐만 아니라 추상화된 부분까지 변경시켜야 하는 경우에는 브리지 패턴을      |
|씁니다.                                                                       |
+------------------------------------------------------------------------------+


.. image:: Bridge.jpg
   :scale: 50 %
   :alt: Class Diagram


**장점**

* 구현을 인터페이스에 완전히 결합시키지 않았기 때문에 구현과 추상화된 부분을
  분리시킬 수 있다.
* 추상화된 부분과 실제 구현 부분을 독립적으로 확장 할 수 있다.
* 추상화된 부분을 구현한 구상 클래스를 바꿔도 클라이언트 쪽에는 영향을 끼치지
  않는다.


**사용법 및 단점**

* 여러 플랫폼에서 사용해야 할 그래픽스 및 윈도우 처리 시스템에서 유용하게
  쓰인다.
* 인터페이스와 실제 구현부를 서로 다른 방식으로 변경해야 하는 경우에 유용하게
  쓰인다.
* 디자인이 복잡해진다는 단점이 있다.


Bridge Pattern using Template
-----------------------------

.. image:: Bridge_using_Template.jpg
   :scale: 50 %
   :alt: Class Diagram

**특징**

* 데이터형 안전성이 더 높다.
* 가상함수를 사용치 않고 인라인 함수화 할 수도 있어 더 빠르다.

**단점**

* 하지만 인터페이스와 구현 사이에 직접적인 종속관계가 생겨 독립적으로 변경할 수
  있던 특징이 사라진다?

