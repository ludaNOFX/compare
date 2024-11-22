# Компилятор и флаги
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

# Список файлов проекта
SRC_DIR = src
SRC_FILES = \
    main.cpp \
    $(SRC_DIR)/entities/string_entity.cpp \
    $(SRC_DIR)/usecases/string_comparator.cpp \
    $(SRC_DIR)/adapters/string_adapter.cpp \
    $(SRC_DIR)/utils/input_utils.cpp

# Целевой исполняемый файл
TARGET = main

# Правило сборки
all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Очистка
clean:
	rm -f $(TARGET)