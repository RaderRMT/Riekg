TARGET_NAME := riekg
SOURCE_DIR  := ./src
OBJECT_DIR  := ./obj
BIN_DIR     := ./bin

CC := g++
CCFLAGS := -g -Wall -lglfw -lGL -lGLEW -lGLU

SRCFILES     := $(wildcard $(SOURCE_DIR)/*.cpp)
OBJECTS      := $(SRCFILES:$(SOURCE_DIR)/%.cpp=$(OBJECT_DIR)/%.o)

all: init $(BIN_DIR)/$(TARGET_NAME)

$(BIN_DIR)/$(TARGET_NAME): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(CCFLAGS)

$(OBJECT_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJECTS)

run: all
	./$(BIN_DIR)/$(TARGET_NAME)

init:
	mkdir -p $(SOURCE_DIR)
	mkdir -p $(OBJECT_DIR)
	mkdir -p $(BIN_DIR)
ifeq (, $(wildcard $(SOURCE_DIR)/main.cpp))
	echo "int main() {\n}" >> $(SOURCE_DIR)/main.cpp
endif
