# String Comparison Ignoring Case Project

Этот проект демонстрирует работу со строками выполняется сравнение двух строк игнорируя регистр: ввод двух строк, сравнение двух объектов стрoк, вывод результата а также анализ утечек памяти.

---

## Компиляция и запуск

### 1. Простая компиляция и запуск

```bash
g++ -o main main.cpp src/utils/input_utils.cpp src/entities/string_entity.cpp src/adapters/string_adapter.cpp src/usecases/string_comparator.cpp
./main

### 2. Компиляция и запуск с анализом утечек памяти
 
```bash
g++ -g -o main main.cpp src/utils/input_utils.cpp src/entities/string_entity.cpp src/adapters/string_adapter.cpp src/usecases/string_comparator.cpp
valgrind --leak-check=full ./main