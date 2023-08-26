
# Тестовое задание для курса С++ для робототехников (Skillbox)
Беспалова Ульяна

[![Build Status](https://app.travis-ci.com/UlianaBespalova/Technopark_Cpp.svg?branch=homework_2)](https://app.travis-ci.com/UlianaBespalova/Technopark_Cpp)   [![codecov](https://codecov.io/gh/UlianaBespalova/Technopark_Cpp/branch/homework_2/graph/badge.svg?token=I69ZMCHZZZ)](https://codecov.io/gh/UlianaBespalova/Technopark_Cpp)


## Задание

Реализовать проект библиотеки librobo с использованием CMake. Библиотека должна содержать интерфейсный класс IRobot, объявляющий методы:
- setPosition - установка текущих координат
- setMotion - задание перемещение
- getPosition - получить текущее местоположение
Далее необходимо создать два класса-наследника, имплементирующих указанные методы для случаев перемещения на плоскости (класс Robot2D) и в пространстве (класс Robo3D).

По сути, метод setMotion должен реализовывать вычисление нового местоположения при помощи матрицы пермещения для 2D и 3D случаев.




## Установка и запуск

Сборка

```
cmake CMakeLists.txt
make
```

Запуск:

```
./main
```


Запуск тестов:

```
./skillbox_text_task_testing
```

Версия без гугл-тестирования лежит в соседней ветке *without_tests*
