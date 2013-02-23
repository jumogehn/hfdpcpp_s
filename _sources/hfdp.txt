
헤드 퍼스트 디자인 패턴





목차

`1. 디자인 패턴의 세계에 오신 것을 환영 합니다 - 스트래티지`_

`2. 객체들에게 연락망을 돌립시다 - 옵저버`_

`3. 객체 꾸미기 - 데코레이터`_

`4. 객체지향 빵 굽기 - 팩토리`_

`5. 세상에 단 하나뿐인 특별한 객체 - 싱글턴`_

`6. 호출 캡슐화 - 커맨드`_

`7. 적응시키기 - 어댑터와 퍼사드`_

`8. 알고리즘 캡슐화 - 템플릿 메소드`_

`9. 잘 관리된 컬렉션 - 이터레이터와 컴포지트`_

`10. 객체의 상태 - 스테이트`_

`11. 객체 접근 제어 - 프록시`_

`12. 패턴들로 이루어진 패턴 - 컴파운드 패턴`_

`13. 실전에서의 디자인 패턴 - 패턴과 함께하는 행복한 삶`_

14. 부록 - 기타 패턴


생성관련 패턴
행동관련 패턴
구조관련 패턴
`싱글턴(5)`_
` 추상팩토리(4)`_
` 팩토리 메소드`_`(4)`_
프로토타입
빌더
`템플릿 메소드(8)`_
` 커맨드(6)`_
` 이터레이터(9)`_
` 옵저버(2)`_
` 스테이트(10)`_
` 스트래티지(1)`_
비지터
미디에이터
메멘토
인터프리터
역할사슬
`데코레이터(3)`_
` 컴포지트(9)`_
` 프록시(11)`_
` 퍼사드(7)`_
` 어댑터(7)`_
플라이웨이트
브리지









`1. 디자인 패턴의 세계에 오신 것을 환영 합니다.`_

디자인 원칙
애플리케 이션에서 달라지는 부분을 찾아내고, 달라지지 않는 부분으로부터 분리 시킨다.

"바뀌는 부분은 따로 뽑아서 캡슐화 시킨다. 그렇게 하면 나중에 바뀌지 않는 부분에는 영향을 미치지 않은 채로 그 부분만
고치거나 확장할 수 있다."

이 개념은 매우 간단하지만 다른 모든 디자인 패턴의 기반을 이루는 원칙이다. 모든 패턴은 '시스템의 일부분을 다른 부분과
독립적으로 변화시킬 수 있는' 방법을 제공하기 위한 것이니까...


디자인 원칙
구현이 아닌 인터페이스에 맞춰서 프로그래밍 한다.




`Duck.hpp`_
`FlyBehavior.hpp`_
`QuackBehavior.hpp`_

`FlyWithWings.hpp`_
`FlyNoWay.hpp`_
`FlyRocketPowered.hpp`_

`Quack.hpp`_
`Squeak.hpp`_
`FakeQuack.hpp`_
`MuteQuack.hpp`_

`MallardDuck.hpp`_
`RedHeadDuck.hpp`_
`ModelDuck.hpp`_
`DecoyDuck.hpp`_
`RubberDuck.hpp`_

`MiniDuckSimulator.cpp`_
`MiniDuckSimulator.hpp`_


디자인 원칙
상속보다는 구성을 활용한다.


패턴 1. 스트래티지
알고리즘 군을 정의하고 각각을 캡슐화하여 교환해서 사용할 수 있도록 만든다. 스트래티지를 활용하면 알고리즘을 사용하는
클라이언트와는 독립적으로 알고리즘을 변경할 수 있다.






` 2. 객체들에게 연락망을 돌립시다 - 옵저버 패턴`_


패턴 2. 옵저버
한 객체의 상태가 바뀌면 그 객체에 의존하는 다른 객체들한테 연락이 가고 자동으로 내용이 갱신되는 방식으로 일대다(one-
to-many) 의존성을 정의한다.



디자인 원칙
서로 상호작용을 하는 객체 사이에서는 가능하면 느슨하게 결합하는 디자인을 사용해야 한다.





`Subject.hpp`_
`Observer.hpp`_
`DisplayElement.hpp`_

`WeatherData.hpp`_
`CurrentConditionsDisplay.hpp`_
`ForecastDisplay.hpp`_
`HeatIndexDisplay.hpp`_
`StatisticsDisplay.hpp`_

`WeatherStation.hpp`_
`WeatherStation.cpp`_

`stdafx.cpp`_
`stdafx.h`_




` 3. 객체 꾸미기 - 데코레이터 패턴`_


디자인 원칙 - OCP (Open-Closed Principle) 클래스는 확장에 대해서는 열려 있어야 하지만 코드 변경에
대해서는 닫혀 있어야 한다.

패턴 3. 데코레이터
객체에 추가적인 요건을 동적으로 첨가한다. 데코레이터는 서브클래스를 만드는 것을 통해서 기능을 유연하게 확장할 수 있는 방법을
제공한다.





`Beverage.hpp`_
`CondimentDecorator.hpp`_
`DarkRoast.hpp`_
`Decaf.hpp`_
`Espresso.hpp`_
`HouseBlend.hpp`_
`Milk.hpp`_
`Mocha.hpp`_
`Soy.hpp`_
`Whip.hpp`_

`Starbuzz.cpp`_
`Starbuzz.hpp`_




` 4. 객체지향 빵 굽기 - 팩토리 패턴`_

간단한 팩토리 - 패턴 장려상


SimplePizzaFactory 클래스는 팩토리로써 위 애플리케이션에서 유일하게 Pizza 의 구상클래스를 직접 참조하는
부분이다.
이런 메소드(SimplePizzaFactory::createPizza())를 static 메소드로 선언하는 경우가 종종 있다.

`CheesePizza.hpp`_
`ClamPizza.hpp`_
`PepperoniPizza.hpp`_
`Pizza.hpp`_
`Pizzas.cpp`_
`Pizzas.hpp`_
`PizzaStore.hpp`_
`SimplePizzaFactory.hpp`_
`VeggiePizza.hpp`_




`Pizza.hpp`_
`PizzaStore.hpp`_

`ChicagoStyleCheesePizza.hpp`_
`ChicagoStyleClamPizza.hpp`_
`ChicagoStylePepperoniPizza.hpp`_
`ChicagoStyleVeggiePizza.hpp`_

`NYStyleCheesePizza.hpp`_
`NYStyleClamPizza.hpp`_
`NYStylePepperoniPizza.hpp`_
`NYStyleVeggiePizza.hpp`_

`ChicagoPizzaStore.hpp`_
`NYPizzaStore.hpp`_

`Pizzafm.cpp`_
`Pizzafm.hpp`_



패턴 4. 팩토리 메소드
객체를 생성하기 위한 인터페이스를 정의하는데, 어떤 클래스의 인스턴스를 만들지는 서브클래스에서 결정하게 만든다. 팩토리 메소드
패턴을 이용하면 클래스의 인스턴스를 만드는 일을 서브클래스에게 맏게 된다.



Q : 간단한 팩토리와 팩토리 메소드 패턴의 차이점
A : 간단한 팩토리는 1회용 처방에 불과한 반면, 팩토리 메소드 패턴을 사용하면 어떤 구현을 사용할지를 서브클래스에서
결정하는 프레임워크를 만들 수 있다는 결정적인 차이점이 있다. 예를 들어, 팩토리 메소드 패턴에서 사용한
orderPizza() 메소드에서는 피자를 만들기 위한 일반적인 프레임워크를 제공한다. 그 프레임워크에서는 팩토리 메소드를
사용하여 구상클래스의 객체를 생성한다. PizzaStore 클래스의 서브클래스를 만들 때, 어떤 구상 제품 클래스로부터
orderPizza() 에서 리턴할 피자를 만들지 결정하게 된다. 간단한 팩토리에서는 객체 생성을 캡슐화 하기는 하지만 팩토리
메소드 패턴처럼 강력한 유연성을 지닌 프레임워크를 제공하진 못한다. 생성하는 제품을 마음대로 변경할 수 없기 때문이다.



디자인 원칙 - 의존성 뒤집기 (Dependency Inversion Principle) 추상화된 것에 의존하도록 만들어라.
구상 클래스에 의존하도록 만들지 않도록 한다.
- 어떤 변수에도 구상 클래스에 대한 레퍼런스를 저장하지 말라
new 연산자를 사용하면 구상 클래스에 대한 레퍼런스를 사용하게 되는 것이다. 팩토리를 써서 구상 클래스에 대한 레퍼런스를
변수에 저장하는 일을 미리 방지하라.

- 구상 클래스에서 유도된 클래스를 만들지 말라
구상 클래스에서 유도된 클래스를 만들면 특정 구상 클래스에 의존하게 된다. 인터페이스나 추상클래스처럼 추상화된 것으로부터
클래스를 만들어야 한다.

- 베이스 클래스에 이미 구현되어 있던 메소드를 오버라이드하지 말라
이미 구현되어있는 메소드를 오버라이드한다는 것은 애초부터 베이스클래스가 제대로 추상화된 것이 아니었다고 볼 수 있다. 베이스
클래스에서 메소드를 정의할 때는 모든 서브 클래스에서 공유할 수 있는 것만 정의해야 한다.

>> 물론 이는 가이드라인일 뿐이다. 합당한 이유가 있는 경우에는 의도적으로 이 가이드라인을 지키지 않기로 선택할 수 있다.
예를 들면, 자바의 String 클래스와 같은 경우 거의 변경이 발생하지 않을 것으로 예상되므로 팩토리를 사용하지 않고 직접
만들어서 사용할 수 있는 것이다!





`Pizza.hpp`_
`CheesePizza.hpp`_
`ClamPizza.hpp`_
`PepperoniPizza.hpp`_
`VeggiePizza.hpp`_

`PizzaStore.hpp`_
`ChicagoPizzaStore.hpp`_
`NYPizzaStore.hpp`_

`PizzaIngredientFactory.hpp`_
`ChicagoPizzaIngredientFactory.hpp`_
`NYPizzaIngredientFactory.hpp`_

`Dough.hpp`_
`ThickCrustDough.hpp`_
`ThinCrustDough.hpp`_

`Sauce.hpp`_
`MarinaraSauce.hpp`_
`PlumTomatoSauce.hpp`_

`Cheese.hpp`_
`MozzarellaCheese.hpp`_
`ParmesanCheese.hpp`_
`RegginanoCheese.hpp`_

`Clams.hpp`_
`FreshClams.hpp`_
`FrozenClams.hpp`_

`Pepperoni.hpp`_
`SlicedPepperoni.hpp`_

`Veggies.hpp`_
`BlackOlives.hpp`_
`EggPlant.hpp`_
`Garlic.hpp`_
`RedPepper.hpp`_
`Spinach.hpp`_
`Mushroom.hpp`_
`Onion.hpp`_

`Pizzaaf.cpp`_
`Pizzaaf.hpp`_



패턴 5. 추상 팩토리
인터페이스를 이용하여 서로 연관된, 또는 의존하는 객체를 구상 클래스를 지정하지 않고도 생성할 수 있다.





팩토리 메소드 패턴 추상 팩토리 패턴 클래스 (의 상속)를 사용해서 객체 생성
객체(의 구성)를 사용해서 객체 생성
간단한 인터페이스 - 하나의 팩토리 메소드 - 장점
제품 군을 생성 - 인터페이스가 큰 편,
팩토리가 생성하는 제품군에 제품을 추가하는 경우
인터페이스의 변경이 불가피하다. - 단점
객체 생성을 캡슐화해서 애플리케이션의 결합을 느슨하게 만들고, 특정 구현에 덜 의존하도록 만들 수 있음.




`
5. 세상에 단 하나뿐인 특별한 객체 - 싱글턴 패턴`_

패턴 6. 싱글턴
해당 클래스의 인스턴스가 하나만 만들어지고, 어디서든지 그 인스턴스에 접근할 수 있도록 하기 위한 패턴




`chocolate.cpp`_
`Chocolate.hpp`_
`ChocolateBoiler.hpp`_

싱글턴을 쓸 때는 동기화 문제를 해결해야만 한다. 위 C++ 예제에서는 동기화 코드가 들어가 있지 않기 때문에 별도로 동기화
문제를 해결해야만 한다. 언어별로 제공되는 각종 동기화 기법을 사용하거나 아예 static 객체로 생성시키거나 안전한 시점에
객체 생성을 시키도록 하는 등의 방법을 쓸 수 있다.




` 6. 호출 캡슐화 - 커맨드 패턴`_



`SimpleRemoteControl.hpp`_

`Command.hpp`_

`GarageDoor.hpp`_
`GarageDoorOpenCommand.hpp`_

`Light.hpp`_
`LightOnCommand.hpp`_
`LightOffCommand.hpp`_

`SimpleRemote.cpp`_
`SimpleRemote.hpp`_



패턴 7. 커맨드
요구사항 을 객체로 캡슐화 할 수 있으며, 매개변수를 써서 여러가지 다른 요구사항을 집어넣을 수도 있다. 또한 요청 내역을
큐에 저장하거나 로그로 기록할 수도 있으며, 작업 취소 기능도 지원 가능하다.

참조 : 메타 커맨드 패턴 (명령들로 이루어진 매크로를 만들어서 여러개의 명령을 한번에 실행한다.)


참고 : 클라이언트(Client)는 Invoker 에 setCommand() 되는 ConcreteCommand 객체를
생성한다.




`RemoteControl.hpp`_

`Command.hpp`_

`CeilingFan.hpp`_
`CeilingFanOffCommand.hpp`_
`CeilingFanOnCommand.hpp`_

`GarageDoor.hpp`_
`GarageDoorDownCommand.hpp`_
`GarageDoorUpCommand.hpp`_

`hottub.hpp`_
`HottubOffCommand.hpp`_
`HottubOnCommand.hpp`_

`Light.hpp`_
`LightOffCommand.hpp`_
`LightOnCommand.hpp`_
`LivingroomLightOffCommand.hpp`_
`LivingroomLightOnCommand.hpp`_

`NoCommand.hpp`_

`Stereo.hpp`_
`StereoOffCommand.hpp`_
`StereoOnWithCDCommand.hpp`_

`TV.hpp`_

`Remote.cpp`_
`Remote.hpp`_


널 객체( null object ) - 패턴 장려상
딱히 리턴할 객체는 없지만 클라이언트 쪽에서 null 을 처리하지 않아도 되도록 하고 싶을 때 널 객체를 활용하면 좋다.
위 사례에서의 NoCommand 클래스의 용법이다.





`RemoteControlWithUndo.hpp`_

`Command.hpp`_

`CeilingFan.hpp`_
`CeilingFanHighCommand.hpp`_
`CeilingFanLowCommand.hpp`_
`CeilingFanMediumCommand.hpp`_
`CeilingFanOffCommand.hpp`_

`Light.hpp`_
`DimmerLightOffCommand.hpp`_
`DimmerLightOnCommand.hpp`_
`LightOffCommand.hpp`_
`LightOnCommand.hpp`_

`NoCommand.hpp`_

`stdafx.cpp`_
`stdafx.h`_

`Undo.cpp`_
`Undo.hpp`_


- undo 기능 외에도 매크로 커맨드 객체를 사용할 수도 있다.(샘플 리모컨의 파티모드)
- 쓰레드 풀이나 프로세스 풀 혹은 스케줄러 에서도 활용할 수 있다.
- 커맨드 클래스에 load(), store() 함수를 추가함으로써 로그 기반의 복구시스템을 구현하는데 쓰일 수도 있으며,
트랜젝션을 활용하여 모든 작업이 완벽하게 처리되도록 하거나, 그렇지 않으면 아무것도 처리되지 않게 롤백하도록 하는 기능을
구현하는데 쓰일 수도 있다.




` 7. 적응시키기 - 어댑터 패턴과 퍼사드 패턴`_


`Duck.hpp`_
`Turkey.hpp`_
`MallardDuck.hpp`_
`WildTurkey.hpp`_
`DuckAdapter.hpp`_
`TurkeyAdapter.hpp`_

`Ducks.hpp`_
`Ducks.cpp`_


패턴 8. 어댑터
한 클래스의 인터페이스를 클라이언트에서 사용하고자 하는 다른 인터페이스로 변환한다. 어댑터를 이용하면 인터페이스 호환성 문제
때문에 같이 쓸 수 없는 클래스들을 연결해서 쓸 수 있다.


[객체 어댑터]


[클래스 어댑터]

다중상속이 지양되는 바로 그 이유로 클래스 어댑터의 사용도 지양된다. (일반적으로...)




`Amplifier.hpp`_
`CdPlayer.hpp`_
`DvdPlayer.hpp`_
`PopcornPopper.hpp`_
`Projector.hpp`_
`Screen.hpp`_
`TheaterLights.hpp`_
`Tuner.hpp`_

`HomeTheaterFacade.hpp`_

`HomeTheater.hpp`_
`HomeTheater.cpp`_


패턴 9. 퍼사드
어떤 서브시스템의 일련의 인터페이스에 대한 통합된 인터페이스를 제공한다. 퍼사드에서 고수준 인터페이스를 정의하기 때문에
서브시스템을 더 쉽게 사용할 수 있다.




디자인 원칙 - 최소지식 원칙(데메테르의 법칙) 정말 친한 친구하고만 이야기 하라!
최소지식 원칙을 지키기 위한 가이드 : 어떤 메소드에서든지 다음 네 종류의 객체의 메소드만을 호출하면 된다.

- 객체 자체의 메소드
- 메소드에 매개변수로 전달된 객체의 메소드
- 그 메소드에서 생성하거나 인스턴스를 만든 객체의 메소드
- 그 객체에 속하는(포함되는) 구성요소(객체)의 메소드

절대 금물 : 어떤 메소드를 호출한 결과로 리턴받은 객체에 있는 메소드를 호출하는 것!!




` 8. 알고리즘 캡슐화 - 템플릿 메소드 패턴`_


`CaffeineBeverage.hpp`_
`Coffee.hpp`_
`Tea.hpp`_

`CaffeineBeverageWithHook.hpp`_
`CoffeeWithHook.hpp`_
`TeaWithHook.hpp`_

`Barista.cpp`_
`Barista.hpp`_


패턴 10. 템플릿 메소드
메소드에 서 알고리즘의 골격을 정의한다. 알고리즘의 여러 단계중 일부는 서브클래스에서 구현할 수 있다. 템플릿 메소드를
이용하면 알고리즘의 구조는 그대로 유지하면서 서브클래스에서 특정 단계를 재정의 할 수 있다.




잠깐 : 후크(hook)는 추상 클래스에서 선언되는 메소드이긴 하지만(위 패턴 정의 그림에서 Operation1(),
Operation2() 처럼) 자바의 abstract 메소드 혹은 C++ 의 순수 가상함수처럼 그 바디가 없는 것이 아니라
기본적인 내용이 구현되어있거나 아무 내용이 없는 빈 메소드로 구현이 된 메소드 이다. 이렇게 하면 서브클래스 입장에서는 후크를
활용(오버라이드)해서 후크 메소드가 사용되는 지점에서 알고리즘에 끼어들 수 있게 된다. 물론 그냥 무시하고 넘어가도록
전략적으로 방치시킬 수도 있다.


디자인 원칙 - 헐리우드 원칙 먼저 연락하지 마세요. 저희가 연락 드리겠습니다.

클래스들의 고수준과 저수준의 다단계의 계층 구조에서 고수준 구성요소가 저수준 구성요소에 의존하고 또, 저수준 구성요소도 아무런
제한없이 고소준 구성요소에 의존하며 구수준과 저수준의 각종 클래스들이 서로서로 의존관계가 무질서하게 얽혀있는 의존성
부페(dependency rot) 를 방지하기 위해서 헐리우드 원칙을 사용할 수 있다. 이 원칙을 사용하면 저수준
구성요소에서는 시스템에 접속을 할 수는 있지만, 언제 어떤 식으로 그 구성요소들을 사용할지는 고수준 구성요소에서 결정하게
된다. 즉, 고수준 구성요소에서 저수준 구성요소에게 "먼저 연락하지 마세요. 제가 먼저 연락 드리겠습니다." 라고 얘기를 하는
것과 같다.
헐리우드 원칙은 템플릿 메소드 패턴에서 눈에 확연히 드러나며, 팩토리 메소드 패턴과 옵저버 패턴 등 에서도 관찰할 수 있다.





` 9. 잘 관리된 컬렉션 - 이터레이터와 컴포지트 패턴`_




`Menu.hpp`_
`DinerMenu.hpp`_
`PancakeHouseMenu.hpp`_

`Waitress.hpp`_

`Iterator.hpp`_
`DinerMenuIterator.hpp`_
`PancakeHouseMenuIterator.hpp`_

`MenuItem.hpp`_

`DinerMergerI.cpp`_
`DinerMergerI.hpp`_



패턴 11. 이터레이터
컬렉션 구현 방법을 노출시키지 않으면서도 그 집합체 안에 들어있는 모든 항목에 접근할 수 있게 해 주는 방법을 제공한다.



주의 : Iterator 인터페이스에서 선언하는 메소드 이름은 전통적으로 First, Next, IsDone,
CurrentItem 등이었지만, 최근의 경향은 next, hasNext, remove 등을 사용하는 것이 대세이다.
first 가 없어진 것은 자바에서는 처음부터 다시 돌리고 싶은 경우 그냥 반복자를 새로 만드는 방식을 주로 사용하기
때문이다....

본문의 Iterator 는 외부 반복자 이다. 클라이언트가 next 를 호출하며 반복작업을 제어하기 때문이다. 반면 내부
반복자는 반복자 자신에 의해서 반복작업이 제어된다. 즉, 클라이언트가 반복자한테 어떤 작어을 넘겨줘야 한다. 내부 반복자를
쓰면 클라이언트가 반복작업을 마음대로 제어할 수 없기 때문에 외부 반복자를 쓰는 경우보다 유연성이 조금 떨어지게 되는데 작업을
반복자에게 완전 위임할 수 있어서 오히려 이점이 장점이 되기도 한다.


디자인 원칙 - 단일 역할의 원칙 클래스를 바꾸는 이유는 한 가지 뿐이어야 한다.

하나의 클래스가 수행하는 역할은 곧 그 역할에 변화가 발생할 때 그 클래스에도 변화를 불러오는 이유가 되게 된다.
하나의 클래스가 관련 없는 두가지 이상의 역할을 맡게 된다면 역할의 수 만큼 그 클래스가 변경될 경우의 수를 늘리게 된다.
하나의 클래스가 수행하는 역할을 한가지로 했을 때 응집도가 높은 좋은 디자인을 얻을 수 있게된다.

집합체에 내부 컬렉션과 관련된 기능과 반복자용 메소드관련 기능이 전부 구현된다면 단일 역할의 원칙에 위배된다.



패턴 12. 컴포지트
컴포지트 패턴을 이용하면 객체들을 트리 구조로 구성하여 부분과 전체를 나타내는 계층 구조로 만들 수 있으며, 클라이언트에서
개별 객체와 다른 객체들로 구성된 복합 객체(composite)를 똑같은 방법으로 다룰 수 있다.











`MenuComponent.hpp`_
`MenuItem.hpp`_
`Menu.hpp`_

`Waitress.hpp`_

`MenuException.hpp`_

`Menus.cpp`_
`Menus.hpp`_


주의 : 컴포지트 패턴은 Component 에서 Leaf 와 Composite 를 위한 인터페이스를 모두 포함하고 있기 때문에
하나의 클래스가 두 개의 역할을 맡게 되고 이것이 단일 역할의 원칙을 위배하고 있다고 볼 수도 있다. 컴포지트 패턴은 실제로
단일 역할의 원칙을 위배하는 대신 투명성을 추구하는 패턴이다. 여기서의 투명성이란 클라이언트 입장에서 복합객체와 잎 노드를
똑같은 Component 라는 인터페이스를 통해 처리하므로써 어떤 원소가 복합객체인지 잎 노드인지가 클라이언트 입장에서는
투명하게 느껴지는 것이다.
Component 클래스에는 두 종류의 기능이 들어있다 보니까 안전성이 다소 떨이지게 된다. 클라이언트가 어떤 원소에 대해서는
무의미하거나 부적절한 작업을 처리하려고 할 수 있기 때문이다. 하지만 이렇게 단일 역할의 원칙을 어기는 것은 일종의 디자인상의
결정사항이다.(트레이드 오프가 있다는 뜻?) 다른 방향에서 디자인해서(즉, 단일 역할의 원칙에 따라서 디자인) 각 역할별로
클래스를 구분할 수도 있을 것이다. 이렇게 하면 어떤 원소에 대해 부적절한 처리를 시도하려거나 하는 문제는 없어질 것이다.
하지만 대신에 투명성이 떨어지게 되고 코드중에 조건문이나 instanceof 연산자(자바에서) 같은 것들이 필요해 지게 된다.
컴포지트 패턴은 또한 상황에 따라 원칙을 적절히 사용해야 한다는 것의 대표사례가 되기도 한다. 디자인 패턴의 가이드라인을
따르는 것 보다 때로는 그에 위배되는 방식으로 디자인하는 것이 필요하기도 하다.
하지만 컴포지트 패턴의 잎 노드를 자식이 0개인 복합 객체라고 본다면 이런 해석과 달리 볼 수도 있다! (단일 역할 원칙을
지키는 것이다!)

print 메소드에서 사용된 반복자는 구성 요소의 각 항목에 대해 일을 처리하고 구성요소가 Menu 인 경우에는 재귀적으로
print 를 호출해서 작업을 처리한다. 즉 MenuComponent 내부에서 반복작업을 알아서 처리했다.(내부 반복자)
여기에 외부 반복자를 사용하는 방식을 추가로 구현해 본 것이 아래의 코드이다. 외부 반복자를 쓸 때는 반복중 현재 위치를 관리
해야한다. 그래야 클라이언트에서 hasNext, next 를 호출해서 원하는 반복작업을 할 수 있기 때문이다. 이 경우에는
스택을 써서 재귀적인 구조에서의 복합객체에서의 현재 위치를 관리할 수 있다. (쫌 복잡하군하..)




`MenuComponent.java`_
`MenuItem.java
`_`Menu.java

`_`NullIterator.java
`_`CompositeIterator.java

`_`Waitress.java

`_`MenuTestDrive.java

`_
널반복자는 널객체 디자인 패턴이 적용된 사례가 된다. 그리고 printBegetarianMenu 메소드에서 try/catch
구조를 사용한 것은 Menu 와 MenuItem을 똑같이 다룸으로써 투명성을 높이기 위함이다.

컴포지트 패턴의 가장 큰 장점은 클라이언트를 단순화 시킬 수 있다는 것이다. 클라이언트는 복합객체를 사용하고 있는지 잎 객체를
사용하고 있는지에 대해서 전혀 신경쓰지 않아도 된다. 올바른 객체에 대해 올바른 연산을 적용하고 있는지 확인하기 위해 if
문을 지저분하게 여기저기 사용하지 않아도 된다. 그리고 하나의 메소드를 호출하면 전체 구조에 대해서 반복해서 작업을 처리할
수도 있다.

안드로이드의 오픈코어의 테스트 코드에 바로 컴포지트 패턴이 적용되 있다. 자동으로 수많은 테스트 케이스의 테스트를 수행할 수
있도록 수많은 테스트 케이스들이 복합객체를 구성한다. 테스트는 일정 범위만 수행할 수도 있고 특정 테스트 항목만 할 수도
있으며 전체를 테스트할 수도 있다. 컴포지트 패턴이 GUI 외에 적용된 모법 사례이다. - humi주





` 10. 객체의 상태 - 스테이트 패턴`_



`State.hpp`_
`HasQuarterState.hpp`_
`NoQuarterState.hpp`_
`SoldOutState.hpp`_
`SoldState.hpp`_
`WinnerState.hpp`_

`GumballMachine.cpp`_
`GumballMachine.hpp`_

`GumballStateWinner.cpp`_
`GumballStateWinner.hpp`_

위 예제에서처럼 상태 전환 코드를 상태 클래스에 집어 넣으면 상태 클래스들 사이에 의존성이 생긴다는 단점이 있다.
GumballMachine을 구현한 코드를 보면 구상 상태 클래스를 코드에 직접 집어넣는 대신 Context 객체의 게터
메소드를 써서 그나마 의존성을 최소화 하려고 노력했음을 알 수 있다.
상태 전환의 흐름을 결정하는 코드를 어느 쪽에 집어 넣는지에 따라서, 시스템이 점점 커지게 될 때, 어떤 클래스(Context
또는 상태 클래스)가 변경에 대해서 닫혀지게 되는지가 결정된다.



패턴 13. 스테이트
객체의 내부 상태가 바뀜에 따라서 객체의 행동을 바꿀 수 있다. 마치 객체의 클래스가 바뀌는 것과 같은 결과를 얻을 수 있다.




"한가지 비밀을 알려드릴까요? 스트래티지 패턴하고 스테이트 패턴은 태어나자마자 헤어지긴 했지만 원래 쌍둥이랍니다."

스테이트 패턴
스트래티지 패턴
상태 객체에 일련의 행동(여러개의 함수)을 캡슐화 한다. 상황에 따라 Context 객체에서 여러 상태 객체 중 한 객체에게
모든 행동을 맡기게 된다.
클라이언트에서 컨택스트 객체에게 어떤 전략 객체를 사용할지를 지정해 준다. 그리고 실행시에 전략 객체를 변경할 수 있는
유연성을 제공해 준다.
컨택스트 객체에 수많은 조건문을 넣는 대신 사용할 수 있는 패턴이다. 행동을 상태 객체 내에 캡슐화 시켜서 컨택스트 내의 상태
객체를 바꾸는 것을 통해 컨택스트 객체의 행동을 바꿀 수 있기 때문이다.
서브클래스를 만드는 방법을 대신해서 유연성을 극대화 하는 용도로 사용된다.


참고 :
`OOP란 조건문(if)을 줄이는 것`_
`On the Criteria to be used in Decomposing Systems into Modules`_






` 11. 객체 접근 제어 - 프록시 패턴`_


패턴 14. 프록시
어떤 객체에 대한 접근을 제어하기 위한 용도로 대리인이나 대변인에 해당하는 객체를 제공하는 패턴



바보같은 질문은 없다네..
Q: 어떤 식으로 클라이언트에서 진짜 객체가 아닌 프록시를 사용하도록 만드나요?
A: 가장 흔하게 쓰이는 기법은 진짜 객체의 인스턴스를 생성해서 리턴하는 팩토리를 사용하는 방법입니다. 이 작업은 팩토리
메소드 내에서 진행되기 때문에 실제 객체를 프록시로 감싼 다음에 리턴할 수 있죠. 클라이언트에서는 진짜 객체를 쓰고 있는지,
아니면 프록시 객체를 쓰고 있는지 전혀 알지 못합니다.

이런 내용을 보면 프록시 패턴은 데코레이터와 같아보일 수도 있다. 하지만 그 용도와 사용 형태등에 있어서 차이점이 존재한다.
데코레이터 패턴은 주제 객체에 행동을 추가하는데 주 목적이 있고 흔하게 한 10겹 정도 감싸기까지 한다. 이에 반해 프록시
패턴은 아래와 같은 다양한 목적을 위해 쓰이는데 단순히 주제 객체에 행동을 추가하는 것 보다는 클라이언트측에 주제 객체를
대변한다. 클라이언트는 프록시를 통해 접근이 되고 있는지조차 눈치 채지 못할 수도 있다.
어뎁터 패턴과도 혼동될 수 있겠지만 어뎁터 패턴에서는 인터페이스가 상이하다는 차이점으로 구분할 수 있겠다....



+ 원격 프록시 : 원격 객체에 대한 접근을 제어
+ 가상 프록시 : 생성하기 힘든 자원에 대한 접근을 제어(CD 커버 뷰어)
+ 보호 프록시 : 접근 권한이 필요한 자원에 대한 접근을 제어
+ 방화벽 프록시 : 방화벽
+ 스마트 레퍼런스 프록시 : 레퍼런스 카운트를 세는 등의 기능
+ 캐싱 프록시 : 웹서버등에서 사용됨
+ 동기화 프록시 : 분산환경에서의 객체의 동기화. 자바스페이스에서 사용
+ 복잡도 숨김 프록시 : Facade Proxy 라고도 함 퍼사드와의 차이는 접근을 차단한다는 것.
+ 지연 복사 프록시 : COW(Copy-On-Write). 변형된 가상 프록시.


본문에서는 객체 직렬화와 키워드 transient에 대해서 배울 수 있었다. C++에서는 어떻게 될까?




` 12. 패턴들로 이루어진 패턴 - 컴파운드 패턴`_


GoF 책의 2장 Text Editor Lexi 를 참고하자

MVC 와 Model2 를 비교해보자

이제 HTML5, WebOS, Cloud Computing 시대가 오는 구나...

Native Application 은 좀 타격이 있을 듯...

그나저나 Compound Pattern 은 그저 비빔밥일 뿐이로구나 공식 패턴은 아니니....





` 13. 실전에서의 디자인 패턴 - 패턴과 함께하는 행복한 삶`_



패턴이란 특정 컨텍스트 내에서 주어진 문제에 대한 해결책이다.


컨텍스트 : 패턴이 적용되는 상황. 반복적으로 일어날 수 있어야 한다.

문제 : 컨텍스트 내에서 이루고자 하는 목적. 컨텍스트 내에서 생길 수 있는 제약조건도 문제에 포함된다.

해결책 : 누구든지 적용해서 일련의 제약조건 내에서 목적을 달성할 수 있는 일반적인 디자인

커뮤니티 :
`포틀랜드 패턴 리포지터리`_
`힐사이드 그룹`_
OOPSLA (컨퍼런스)



.. _Screen.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/Screen.hpp
.. _LivingroomLightOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/LivingroomLightOnCommand.hpp
.. _GumballStateWinner.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/GumballStateWinner.cpp
.. _Cheese.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Cheese.hpp
.. _ChicagoStyleClamPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/ChicagoStyleClamPizza.hpp
.. _Duck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/Duck.hpp
.. _PancakeHouseMenuIterator.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/PancakeHouseMenuIterator.hpp
.. _HottubOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/HottubOnCommand.hpp
.. _FlyRocketPowered.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/FlyRocketPowered.hpp
.. _SimpleRemote.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/SimpleRemote.hpp
.. _ChicagoStyleVeggiePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/ChicagoStyleVeggiePizza.hpp
.. _Soy.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Soy.hpp
.. _ModelDuck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/ModelDuck.hpp
.. _MallardDuck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/MallardDuck.hpp
.. _Undo.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/Undo.cpp
.. _ForecastDisplay.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/ForecastDisplay.hpp
.. _Menu.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/Menu.hpp
.. _LightOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/LightOnCommand.hpp
.. _LightOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/LightOffCommand.hpp
.. _Pizzafm.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/Pizzafm.hpp
.. _NoQuarterState.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/NoQuarterState.hpp
.. _stdafx.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/stdafx.cpp
.. _LightOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/LightOnCommand.hpp
.. _GarageDoorDownCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/GarageDoorDownCommand.hpp
.. _SlicedPepperoni.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/SlicedPepperoni.hpp
.. _CeilingFanOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/CeilingFanOnCommand.hpp
.. _Clams.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Clams.hpp
.. _Ducks.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/Ducks.hpp
.. _TeaWithHook.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/TeaWithHook.hpp
.. _StereoOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/StereoOffCommand.hpp
.. _ChicagoPizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/ChicagoPizzaStore.hpp
.. _HeatIndexDisplay.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/HeatIndexDisplay.hpp
.. _CaffeineBeverage.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/CaffeineBeverage.hpp
.. _HomeTheaterFacade.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/HomeTheaterFacade.hpp
.. _Dough.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Dough.hpp
.. _Pizzas.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/Pizzas.hpp
.. _힐사이드 그룹: http://hillside.net/
.. _HasQuarterState.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/HasQuarterState.hpp
.. _Pizzas.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/Pizzas.cpp
.. _GumballMachine.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/GumballMachine.cpp
.. _Tuner.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/Tuner.hpp
.. _Pizzaaf.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Pizzaaf.cpp
.. _RedHeadDuck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/RedHeadDuck.hpp
.. _MiniDuckSimulator.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/MiniDuckSimulator.hpp
.. _
: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/MenuItem.java
.. _EggPlant.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/EggPlant.hpp
.. _DuckAdapter.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/DuckAdapter.hpp
.. _CheesePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/CheesePizza.hpp
.. _ClamPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/ClamPizza.hpp
.. _Pizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/Pizza.hpp
.. _SimpleRemoteControl.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/SimpleRemoteControl.hpp
.. _CeilingFanHighCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/CeilingFanHighCommand.hpp
.. _13. 실전에서의 디자인 패턴 - 패턴과 함께하는 행복한 삶: http://opencpp.kr/Books/HFDP/hfdp.html#13
.. _컴파운드 패턴: http://opencpp.kr/Books/HFDP/hfdp.html#12
.. _
프록시(11): http://opencpp.kr/Books/HFDP/hfdp.html#11
.. _
스테이트(10): http://opencpp.kr/Books/HFDP/hfdp.html#10
.. _BlackOlives.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/BlackOlives.hpp
.. _DinerMergerI.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/DinerMergerI.cpp
.. _Duck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/Duck.hpp
.. _ChicagoStyleCheesePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/ChicagoStyleCheesePizza.hpp
.. _Pepperoni.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Pepperoni.hpp
.. _GumballMachine.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/GumballMachine.hpp
.. _MenuException.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/MenuException.hpp
.. _Tea.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/Tea.hpp
.. _CaffeineBeverageWithHook.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/CaffeineBeverageWithHook.hpp
.. _DarkRoast.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/DarkRoast.hpp
.. _Decaf.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Decaf.hpp
.. _LightOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/LightOffCommand.hpp
.. _FlyWithWings.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/FlyWithWings.hpp
.. _NoCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/NoCommand.hpp
.. _PancakeHouseMenu.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/PancakeHouseMenu.hpp
.. _Menu.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/Menu.hpp
.. _StereoOnWithCDCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/StereoOnWithCDCommand.hpp
.. _Command.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/Command.hpp
.. _NYPizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/NYPizzaStore.hpp
.. _VeggiePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/VeggiePizza.hpp
.. _Amplifier.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/Amplifier.hpp
.. _FakeQuack.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/FakeQuack.hpp
.. _NoCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/NoCommand.hpp
.. _PepperoniPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/PepperoniPizza.hpp
.. _CeilingFanOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/CeilingFanOffCommand.hpp
.. _
: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/NullIterator.java
.. _Chocolate.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Singleton/Chocolate/Chocolate.hpp
.. _MenuItem.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/MenuItem.hpp
.. _Command.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/Command.hpp
.. _TheaterLights.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/TheaterLights.hpp
.. _HouseBlend.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/HouseBlend.hpp
.. _Pizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/Pizza.hpp
.. _
: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/CompositeIterator.java
.. _DvdPlayer.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/DvdPlayer.hpp
.. _ClamPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/ClamPizza.hpp
.. _MarinaraSauce.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/MarinaraSauce.hpp
.. _Mushroom.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Mushroom.hpp
.. _PizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/PizzaStore.hpp
.. _LightOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/LightOnCommand.hpp
.. _ChocolateBoiler.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Singleton/Chocolate/ChocolateBoiler.hpp
.. _stdafx.h: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/stdafx.h
.. _StatisticsDisplay.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/StatisticsDisplay.hpp
.. _Beverage.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Beverage.hpp
.. _NYStyleCheesePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/NYStyleCheesePizza.hpp
.. _HomeTheater.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/HomeTheater.hpp
.. _stdafx.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/stdafx.cpp
.. _Barista.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/Barista.cpp
.. _WeatherStation.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/WeatherStation.hpp
.. _Ducks.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/Ducks.cpp
.. _CeilingFan.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/CeilingFan.hpp
.. _Whip.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Whip.hpp
.. _DinerMenuIterator.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/DinerMenuIterator.hpp
.. _DimmerLightOnCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/DimmerLightOnCommand.hpp
.. _CondimentDecorator.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/CondimentDecorator.hpp
.. _Coffee.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/Coffee.hpp
.. _MenuItem.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/MenuItem.hpp
.. _Menus.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/Menus.cpp
.. _OOP란 조건문(if)을 줄이는 것: http://alankang.tistory.com/249
.. _CdPlayer.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/CdPlayer.hpp
.. _Pizzafm.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/Pizzafm.cpp
.. _SoldState.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/SoldState.hpp
.. _Veggies.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Veggies.hpp
.. _Turkey.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/Turkey.hpp
.. _CeilingFan.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/CeilingFan.hpp
.. _GumballStateWinner.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/GumballStateWinner.hpp
.. _State.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/State.hpp
.. _RemoteControlWithUndo.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/RemoteControlWithUndo.hpp
.. _Light.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/Light.hpp
.. _SimplePizzaFactory.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/SimplePizzaFactory.hpp
.. _DisplayElement.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/DisplayElement.hpp
.. _stdafx.h: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/stdafx.h
.. _RegginanoCheese.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/RegginanoCheese.hpp
.. _NYPizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/NYPizzaStore.hpp
.. _FlyBehavior.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/FlyBehavior.hpp
.. _WinnerState.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/WinnerState.hpp
.. _PizzaIngredientFactory.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/PizzaIngredientFactory.hpp
.. _NYStyleClamPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/NYStyleClamPizza.hpp
.. _Light.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/Light.hpp
.. _GarageDoorUpCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/GarageDoorUpCommand.hpp
.. _SoldOutState.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/State/GumballStateWinner/SoldOutState.hpp
.. _PizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/PizzaStore.hpp
.. _Subject.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/Subject.hpp
.. _Sauce.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Sauce.hpp
.. _DecoyDuck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/DecoyDuck.hpp
.. _PepperoniPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/PepperoniPizza.hpp
.. _MallardDuck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/MallardDuck.hpp
.. _MiniDuckSimulator.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/MiniDuckSimulator.cpp
.. _Pizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Pizza.hpp
.. _QuackBehavior.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/QuackBehavior.hpp
.. _ThinCrustDough.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/ThinCrustDough.hpp
.. _Starbuzz.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Starbuzz.cpp
.. _PizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/PizzaStore.hpp
.. _WildTurkey.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/WildTurkey.hpp
.. _LivingroomLightOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/LivingroomLightOffCommand.hpp
.. _CheesePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/CheesePizza.hpp
.. _CurrentConditionsDisplay.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/CurrentConditionsDisplay.hpp
.. _ParmesanCheese.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/ParmesanCheese.hpp
.. _MenuComponent.java: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/MenuComponent.java
.. _Mocha.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Mocha.hpp
.. _CoffeeWithHook.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/CoffeeWithHook.hpp
.. _NYStyleVeggiePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/NYStyleVeggiePizza.hpp
.. _Onion.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Onion.hpp
.. _VeggiePizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzas/VeggiePizza.hpp
.. _ChicagoPizzaIngredientFactory.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/ChicagoPizzaIngredientFactory.hpp
.. _Waitress.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/Waitress.hpp
.. _Starbuzz.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Starbuzz.hpp
.. _Light.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/Light.hpp
.. _HottubOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/HottubOffCommand.hpp
.. _CeilingFanMediumCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/CeilingFanMediumCommand.hpp
.. _
어댑터(7): http://opencpp.kr/Books/HFDP/hfdp.html#7
.. _
커맨드(6): http://opencpp.kr/Books/HFDP/hfdp.html#6
.. _싱글턴(5): http://opencpp.kr/Books/HFDP/hfdp.html#5
.. _(4): http://opencpp.kr/Books/HFDP/hfdp.html#4
.. _데코레이터(3): http://opencpp.kr/Books/HFDP/hfdp.html#3
.. _
옵저버(2): http://opencpp.kr/Books/HFDP/hfdp.html#2
.. _
스트래티지(1): http://opencpp.kr/Books/HFDP/hfdp.html#1
.. _
13. 실전에서의 디자인 패턴 - 패턴과 함께하는 행복한 삶: http://opencpp.kr/Books/HFDP/hfdp.html#0
.. _
: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/Menu.java
.. _FlyNoWay.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/FlyNoWay.hpp
.. _
컴포지트(9): http://opencpp.kr/Books/HFDP/hfdp.html#9
.. _템플릿 메소드(8): http://opencpp.kr/Books/HFDP/hfdp.html#8
.. _NYPizzaIngredientFactory.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/NYPizzaIngredientFactory.hpp
.. _LightOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/LightOffCommand.hpp
.. _
: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/MenuTestDrive.java
.. _On the Criteria to be used in Decomposing Systems into Modules: http://www.cs.umd.edu/class/spring2003/cmsc838p/Design/criteria.pdf
.. _WeatherData.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/WeatherData.hpp
.. _chocolate.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Singleton/Chocolate/chocolate.cpp
.. _FrozenClams.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/FrozenClams.hpp
.. _TurkeyAdapter.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Adapter/Ducks/TurkeyAdapter.hpp
.. _Undo.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/Undo.hpp
.. _PopcornPopper.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/PopcornPopper.hpp
.. _GarageDoorOpenCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/GarageDoorOpenCommand.hpp
.. _Remote.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/Remote.hpp
.. _GarageDoor.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/GarageDoor.hpp
.. _Menus.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/Menus.hpp
.. _RemoteControl.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/RemoteControl.hpp
.. _RedPepper.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/RedPepper.hpp
.. _hottub.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/hottub.hpp
.. _ChicagoPizzaStore.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/ChicagoPizzaStore.hpp
.. _Spinach.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Spinach.hpp
.. _ChicagoStylePepperoniPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/ChicagoStylePepperoniPizza.hpp
.. _Milk.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Milk.hpp
.. _DinerMergerI.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/DinerMergerI.hpp
.. _Pizzaaf.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Pizzaaf.hpp
.. _
: http://opencpp.kr/Books/HFDP/HeadFirstDesignPatterns_code102507/HF_DP/src/headfirst/composite/menuiterator/Waitress.java
.. _Stereo.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/Stereo.hpp
.. _Quack.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/Quack.hpp
.. _RubberDuck.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/RubberDuck.hpp
.. _CeilingFanLowCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/CeilingFanLowCommand.hpp
.. _WeatherStation.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/WeatherStation.cpp
.. _DinerMenu.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/DinerMenu.hpp
.. _CeilingFanOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/CeilingFanOffCommand.hpp
.. _Command.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/Command.hpp
.. _PlumTomatoSauce.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/PlumTomatoSauce.hpp
.. _NYStylePepperoniPizza.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzafm/NYStylePepperoniPizza.hpp
.. _SimpleRemote.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/SimpleRemote/SimpleRemote.cpp
.. _TV.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/TV.hpp
.. _Espresso.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Decorator/Espresso.hpp
.. _DimmerLightOffCommand.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Undo/DimmerLightOffCommand.hpp
.. _Projector.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Facade/HomeTheater/Projector.hpp
.. _MenuComponent.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Composite/Menus/MenuComponent.hpp
.. _MozzarellaCheese.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/MozzarellaCheese.hpp
.. _Barista.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Template/Barista/Barista.hpp
.. _Remote.cpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/Remote.cpp
.. _FreshClams.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/FreshClams.hpp
.. _ThickCrustDough.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/ThickCrustDough.hpp
.. _포틀랜드 패턴 리포지터리: http://c2.com/cgi/wiki?WelcomeVisitors
.. _Garlic.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Factory/Pizzaaf/Garlic.hpp
.. _Waitress.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/Waitress.hpp
.. _Observer.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Observer/Observer.hpp
.. _Squeak.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/Squeak.hpp
.. _MuteQuack.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Strategy/MuteQuack.hpp
.. _GarageDoor.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Command/Remote/GarageDoor.hpp
.. _Iterator.hpp: http://opencpp.kr/Books/HFDP/cpp_Silver/Iterator/DinerMergerI/Iterator.hpp


