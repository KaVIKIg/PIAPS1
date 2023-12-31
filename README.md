# PIAPS1
Паттерн проектирования Абстрактная фабрика (Abstract Factory)

Название и классификация паттерна.
Абстрактная фабрика - паттерн, порождающий объекты.

Назначение.
Предоставляет интерфейс для создания семейств взаимосвязанных или взаимозависимых объектов, не специфицируя их конкретных классов.

Применимость.
Использование паттерна Abstract Factory (абстрактная фабрика) целесообразно если:
- система не должна зависеть от того, как создаются, компонуются и представляются входящие в нее объекты;
- входящие в семейство взаимосвязанные объекты должны использоваться вместе и вам необходимо обеспечить выполнение этого ограничения;
- система должна конфигурироваться одним из семейств составляющих ее объектов, а вы хотите предоставить библиотеку объектов, раскрывая только их интерфейсы, но не реализацию.
  
Задание.
С помощью шаблона Абстрактная фабрика решить следующую задачу.
Обеспечить контроль загрузки и готовности к отправлению автобусов и такси. Водитель такси и автобуса имеют права разной категории. 
Без водителя машина не поедет. Два водителя в одну машину сесть не могут. Без пассажиров машины не поедут. Есть лимит загрузки машин. Для автобуса 30 человек. Для такси -4 человека.
