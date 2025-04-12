CXX = g++
CXXFLAGS = -std=c++17 -Wall -g -I ./include
OBJ_DIR = build
TARGET = main.out

SOURCES = $(wildcard ./src/*.cpp)
OBJECTS = $(patsubst ./src/%.cpp, $(OBJ_DIR)/%.o, $(SOURCES))

.PHONY: all clean run debug

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo "Compilando el programa..."
	@$(CXX) $(OBJECTS) -o $(TARGET) $(CXXFLAGS)

$(OBJ_DIR)/%.o: ./src/%.cpp | $(OBJ_DIR)
	@echo "Compilando %<.."
	@$(CXX) -c $< -o $@ $(CXXFLAGS)

$(OBJ_DIR): 
	mkdir -p $(OBJ_DIR)

run: $(TARGET)
	@echo "Ejecutando el programa..."
	@./$(TARGET)

debug: $(TARGET)
	gdb ./$(TARGET)

memoria: $(TARGET)
	valgrind --leak-check=full --track-origins=yes ./$(TARGET)

clean: $(TARGET)
	@rm -rf $(OBJ_DIR) $(TARGET)
