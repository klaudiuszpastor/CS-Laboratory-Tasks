# Operacje na zmiennych i instrukcje sterujące

### Systemy liczbowe
**System pozycyjny** - okraśla on, że cyfra znajdująca się na danej pozycji w ciągu stanowi wielokrotność potęgi liczby zwanej bazą systemu.
* 2 w systemie binarnym
* 10 w systemie dziesiętnym
* 16 w systemie heksadecymalnym

W C/C++ można przypisanie do zmiennych wartości liczbowych o różnych bazach.
```
int a = 180; //system dziesiętny
int b = 0b10110100; //system binarny (prefisk 0b)
int c = 0264; //system ósemkowy (prefiks 0)
int d = 0xB4; // system szesnastkowy (prefiks 0x)
```
### Rodzaje zmiennych
W C/C++ rozrożniamy zmienne lokalne oraz globalne(różnią się one zasięgiem ).

**Zmienne lokalne** są widczone w obrębie bloaku, w którym zostały zdeklarowane, od miejsca (linii kodu) ich deklaracji. W momencie zdefiniowania zmiennej lokalnej zostaje zaalokowana potrzebna pamięć w segmencie zwanym **_stosem_**. **Pamięć ta jest automatycznie zwalniana, gdy program opuści blok, w którym zdefiniowaana została zmienna lokalna.** Z tego powodu zmienne lokalne zwane sa również **zmiennymi automatycznymi**. Zmienne lokalne nie są domyślnie inicjalizowane. Oznacza to, że jeżeli nie przypiszemy do zmiennej lokalnej konretnej wartości, to jej wartość będzie niezdefiniowana (będzie równa wartości aktualnie przechowywanej na stosie pod adresem zmiennej)

**Zmienne globalne** są widoczne w obrębie całej aplikacji. Deklarowane są poza ciałami funkcji. Zgodnie z ANSI C zmienne globalne są domyślnie zerowane, jeszcze przed wywołaniem funkcji main(). Stąd też czas życia zmiennych globalnych jest równy czasowi wykonywania programu i mogą zostać zainicjalizowane wyłącznie za pomocą wyrażeń stałych. Jeszcze niezainicjalizowane zmienne globalne przechowywane są w segmencie pamięci _.bss_, a po inicjalizacji w segmencie _.data_ . 

**Lokalne zmienne statyczne** to zmienne lokalne zdeklarowane (wewnątrz bloku) przy użyciu słowa kluczowego _static_. Nie wpływa to na ich widoczność, ale zmienia czas życia(od momentu inicjalizacji do końca działania aplikacji). Inicjalizacja zachodzi jednorazowo, przy pierwszym wywołaniu zmiennej (domyślnie wartością 0). Jest to tak zwana **leniwa inicjalizacja zmiennej** i stosowana jest często do inicjalizacji lokalnych zmiennych o znacznym rozmiarze, których każdorazowe tworzenie i zwalnienie byłoby kosztowne. W związku z powyższym, **lokalne zmienne statyczne** utrzymują swoją wartośc między wywołaniami funkcji. Zmienna utrzymuje wartość zapisaną po poprzednim wykonaniu funkcji, w której została zdeklarowana. Zmienne zdeklarowane przy użyciu słowa kluczowego _static_ są alokowane w tych samych segmentach pamięci co zmienne globalne. 

**Globalne zmienne statyczne** to zmienne globalne zdeklarowane przy użyciu słowa kluczowego _static_. Od zmiennych globalnych różnią się rodzajem wiązania (wewnętrzne) - można odwołać się do nich jedynie w jednostce kompilacji, w której zostały zdeklarowane. 

_Zaleca się,aby wszystkie wyrażenia, których wartość nie będzie modyfikowana w trakcie działania programu, były deklarowane przy użyciu kwalifikatora **const**_. W C++ wyrażanie opatrzone słowej kluczowym _const_ to stałe w pełnym tego słowa znaczeniu. Alokowane są w segmencie pamięci tylko do odczytu _.rodata_, a ich wykorzystanie w kodzie może być optymalizowane przez kompilator. 

**Zmienne lokalne**





### **Pytania**
1. Czym jest system pozycyjny, jak przeliczyć liczbę zapisaną w systemie pozycyjnym na system dziesiętny?
2. Czym jest zmienna lokalna? Co to znaczy że jest zaalokowana na stosie?
3. Czym jest zmienna lokalna?
4. Wymień zmienne statyczne i opisz.
5. Czym jest kwalifikator _const_. Gdzie są alokowane w C++?
6. Ograniczenia i zastoswanie zmiennych globalnych.
7. Wiązania i ich rodzaje (z pojęcia zasięgu).