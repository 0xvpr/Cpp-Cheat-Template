PROJECT     = Payload.dll

ARCH        = Win32
#ARCH       = Win64

CMAKE       = cmake.exe
CMAKE_FLAGS =
TOOLCHAIN   = 

BUILD       = Build
SOURCE      = Sources
INCLUDE     = Includes

SOURCES     = $(wildcard Sources/*.cpp)
OBJECTS     = $(patsubst Sources/%.cpp,build/CMakeFiles/Testing.dir/Sources/%.cpp.o,$(SOURCES))

all: $(PROJECT)
$(PROJECT): release debug

release: CMakeLists.txt
	$(CMAKE) --build $(BUILD) --config Release

debug: CMakeLists.txt
	$(CMAKE) --build $(BUILD) --config Debug

.PHONY: $(OBJECTS)
CMakeLists.txt: $(OBJECTS)
	$(CMAKE) -B $(BUILD) -A $(ARCH)

clean:
	rm -fr Bin/*
	rm -fr Build/*

extra-clean:
	rm -fr Bin
	rm -fr Build
