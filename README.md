# C++ Design Patterns

Yazılım tasarım kalıpları, nesne yönelimli tasarım ortamında tekrar tekrar ortaya çıkan sorunlara genel olarak yeniden kullanılabilir çözümler üretmektedir. Doğrudan kaynak koduna dönüştürülebilecek bitmiş bir tasarım değil, sorunun nasıl çözüleceği şablonu. Bunları amaca göre yaratılış olarak sınıflandırabiliriz yaratıcı (soyut somutlaştırma süreci),yapı (sınıfların ve nesnelerin daha büyük yapılar oluşturmak için nasıl oluşturulduğu) ve davranış kalıpları (nesneler arasındaki sorumlulukların atanması).


## Creational Patterns

Bu tasarım desenleri tamamen sınıf somutlaştırma ile ilgilidir. Bu model ayrıca sınıf yaratma kalıplarına ve nesne yaratma kalıplarına ayrılabilir. Sınıf oluşturma kalıpları, somutlaştırma sürecinde kalıtımı etkin bir şekilde kullanırken, nesne oluşturma kalıpları işi yapmak için yetkilendirmeyi etkili bir şekilde kullanır.

- **Abstract Factory** , Birkaç sınıf ailesinin bir örneğini oluşturur.
- **Builder** , Nesne yapısını temsilinden ayırır.
- **Factory Method **, Birkaç türetilmiş sınıfın bir örneğini oluşturur.
- **Prototype** , Kopyalanacak veya klonlanacak tamamen başlatılmış bir örnek.
- **[Singleton](https://github.com/emre21/DesignPatterns/tree/master/SingletonPattern)** , Yalnızca tek bir örneğinin bulunabileceği bir sınıf.

## Structural Patterns

Bu tasarım desenleri tamamen Sınıf ve Nesne kompozisyonu ile ilgilidir. Yapısal sınıf oluşturma kalıpları, arabirimleri oluşturmak için kalıtımı kullanır. Yapısal nesne kalıpları, yeni işlevsellik elde etmek için nesneleri oluşturmanın yollarını tanımlar.

- **Adapter** , Farklı sınıfların arayüzlerini eşleştirir.
- **Bridge** , Bir nesnenin arayüzünü uygulamasından ayırır.
- **Composite** , Basit ve bileşik nesnelerin ağaç yapısı.
- **Decorator** , Nesnelere dinamik olarak sorumluluklar ekler.
- **Facade** , Tüm bir alt sistemi temsil eden tek bir sınıf.
- **Flyweight** , Verimli paylaşım için kullanılan ayrıntılı bir örnek.
- **Proxy** , Başka bir nesneyi temsil eden bir nesne.

## Behavioral Patterns

Bu tasarım kalıpları tamamen Class'ın nesne iletişimi ile ilgilidir. Davranış kalıpları, nesneler arasındaki iletişimle en özel olarak ilgilenen kalıplardır.

- **Chain of Responsibility** , Bir nesne zinciri arasında bir istek iletmenin bir yoludur.
- **Command** , Bir komut isteğini nesne olarak kapsüller
- **Interpreter** , Bir programa dil öğelerini dahil etmenin bir yoludur.
- **Iterator**, Bir koleksiyonun öğelerine sırayla erişir.
- **Mediator** , Sınıflar arasında basitleştirilmiş iletişimi tanımlar.
- **Memento** , Bir nesnenin dahili durumunu yakalar ve geri yükler.
- **[Observer](https://github.com/emre21/DesignPatterns/tree/master/ObservablePattern)** , Bir dizi sınıftaki değişikliği bildirmenin bir yoludur.
- **State** , Durumu değiştiğinde bir nesnenin davranışını değiştirir.
- **Strategy** , Bir sınıf içinde bir algoritmayı kapsüller.
- **Template Method** , Bir algoritmanın tam adımlarını bir alt sınıfa erteler.
- **Visitor** , Değişiklik yapılmadan bir sınıfa yeni bir işlem tanımlar.

