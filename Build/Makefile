SRCPATH	        = ../Earth
CXX             = g++ 
SRCS            = $(wildcard $(SRCPATH)/*.cpp)
OBJS            = $(notdir $(SRCS:.cpp=.o))
OBJPATH			= ./Obj_Earth
TARGET          = space
LIBS            = -lprint
LIB_DIRS        = -L./lib
INC             = -I./include


#all : $(TARGET)
#		$(CXX) -o $(TARGET) $(OBJS) $(INC) $(LIB_DIRS) $(LIBS)
 
#$(TARGET) :
#		$(CXX) -c $(SRCS) $(INC) $(LIB_DIRS) $(LIBS)

all : $(TARGET)
		$(CXX) -o $(TARGET) $(OBJPATH)/$(OBJS)

$(TARGET) :
		$(CXX) -c $(SRCS) -o $(OBJPATH)/$(OBJS)

clean :
		rm -f $(TARGET)
		rm -f $(OBJPATH)/*.o