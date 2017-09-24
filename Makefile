CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Argument.o Operation.o CylinderCapacity.o TriangleSquare.o Purchase.o Visit.o VerstToKm.o PoundsToKg.o

LIBS =

TARGET =	firstLab.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:
	g++ src/main/main.cpp src/main/Argument.cpp src/main/Operation.cpp src/main/CylinderCapacity.cpp src/main/TriangleSquare.cpp src/main/Purchase.cpp src/main/Visit.cpp src/main/VerstToKm.cpp src/main/PoundsToKg.cpp -o firstLab

clean:
	rm -f $(OBJS) $(TARGET)
