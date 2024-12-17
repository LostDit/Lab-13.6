# 13.6 Практическая работа
## Задача 1
### Что нужно сделать 
Необходимо из заданного пользователем вектора удалить число X.
### Как работает программа
  1.Пользователь вводит с клавиатуры число n — размер вектора, который надо заполнять.

  2.Пользователь вводит n целых чисел, которые заполняют вектор.

  3.Пользователь вводит значение — X. X — удаляемое из вектора значение.Необходимо удалить из вектора все элементы, которые равны заданному значению.

  4.В конце программы необходимо вывести итоговое состояние вектора.

### Пример выполнения:
```
Input vector size: 5 
Input numbers: 1 3 3 5 1 
Input number to delete: 3 
Result: 1 5 1
```
### Что оценивается
* Не удалено лишних элементов.

* Все элементы, которые необходимо удалить, удалены.

* Для удаления элементов из вектора использована функция pop_back().

* Порядок элементов не изменился.

* Удаления из вектора совершены in-place.

* Решение использует только один вектор.

### [Код первой задачи](https://github.com/LostDit/Lab-13.6/blob/master/Task%201%20Lab%2013.6/Task%201%20Lab%2013.6.cpp)


## Задача 2
### Что нужно сделать
С помощью списка инициализации задаётся вектор цен на продукты (дробными
числами). Таким же образом с помощью списка инициализации задаётся вектор покупок (в виде индексов), которые совершает человек. 
Необходимо вывести на экран итоговую стоимость покупок. 
Вектор цен и вектор покупок можно задать напрямую в коде.

### Пример выполнения
```
// Вектор цен выглядит так: {2.5, 4.25, 3.0, 10.0}.

std::vector<float> prices {2.5, 4.25, 3.0, 10.0};

// Вектор покупок: {1, 1, 0, 3}, то есть два товара по индексу 1 и по одному — индексов 0 и 3.

std::vector<int> items {1, 1, 0, 3};

Суммарная стоимость будет равна 21.0.
```
### Что оценивается
* Программа не допускает выхода за границы вектора цен.
### [Код второй задачи](https://github.com/LostDit/Lab-13.6/blob/master/Task%202%20Lab%2013.6/Task%202%20Lab%2013.6.cpp)


## Задача 3
### Что нужно сделать
Вам дали задание разработать хранилище для целочисленных значений во встраиваемой операционной системе. 
Такие системы работают в большей части техники, которая нас окружает: автомобилях, стиральных машинах, микроволновках, холодильниках. 
Только вот незадача: объём памяти этой системы очень небольшой, поэтому в хранилище не может находиться более 20 элементов.

В хранилище, являющееся вектором, с клавиатуры приходят целочисленные значения и помещаются один за другим.

При вводе −1 с клавиатуры необходимо вывести всё содержимое хранилища (допускается вывести все 20 элементов, даже если введено меньше). При выводе элементы должны быть в том порядке, в котором они добавлялись.

Попробуйте написать максимально оптимизированное решение этой задачи, чтобы совершалось как можно меньше расширений и перемещений элементов внутри вектора.

### Чтобы задать размера вектора равным 20, используйте:
```
std::vector<int> db(20);

//                   ^ Задаём размер вектора при создании
```
### Что оценивается
* Размер вектора не превышает 20 элементов.
* Нет изменений в размере вектора (это выполняется, если вы выбрали верный алгоритм решения).
### [Код третей задачи](https://github.com/LostDit/Lab-13.6/blob/master/Task%203%20Lab%2013.6/Task%203%20Lab%2013.6.cpp)
