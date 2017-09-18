CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		firstLab.o commonUtil.o firstTask.o secondTask.o thirdTask.o fourthTask.o fifthTask.o sixthTask.o

LIBS =

TARGET =	firstLab.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:
	g++ src/main/firstLab.cpp src/main/commonUtil.cpp src/main/firstTask.cpp src/main/secondTask.cpp src/main/thirdTask.cpp src/main/fourthTask.cpp src/main/fifthTask.cpp src/main/sixthTask.cpp -o firstLab

clean:
	rm -f $(OBJS) $(TARGET)
