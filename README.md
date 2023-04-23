# Структуры данных 
В данном репозитории я представлю свои реализации структур данных на языке программирования C++

----
## Бинарное дерево
----
### Реализация
Реализация сделана: `добавление в дерево`, `удаление элемента из дерева`, `центрированый обход дерева`, `удаление дерева из памяти`

### Тесты
Тесты написаны для: `добавление в дерево`, `центрированый обход дерева`

### Асимптотика
`Add` : $O(\log n)$ до $O(n)$
`Remove` : $O(\log n)$ до $O(n)$
`InOrder` : $O(n)$

----
## Бинарная куча
----
### Реализация
Реализация сделана: `добавление в кучу`, `сортировка кучи относительно элемента`, `вывод дерева`

### Тесты
Тесты написаны для: `добавление в кучу`

### Асимптотика
`addelem` : $O(\log n)$
`out` :  $O(n)$
`heapify` : $O(n\ \log{n})$

----
## Стек
----
### Реализация
Реализация сделана: `добавление в стек`, `вывод стека`, `взять элемент из стека`

### Тесты
Тесты написаны для: `добавление в стек`, `вывод стека`, `взять элемент из стека`

### Асимптотика
`pop` : $O(1)$
`push` :  $O(1)$
