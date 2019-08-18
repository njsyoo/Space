CXX             = g++ 
SRC_PATH_EARTH	= ../Earth
SRC_EARTH		= $(wildcard $(SRC_PATH_EARTH)/*.cpp)
LIBS_EARTH		= $(wildcard $(SRC_PATH_EARTH)/*.h)
OBJ_EARTH       = $(notdir $(SRC_EARTH:.cpp=.o))
OBJ_PATH_EARTH	= ./Obj_Earth

SRC_PATH_MAIN	= ../
SRC_MAIN		= $(wildcard $(SRC_PATH_MAIN)/*.cpp)
OBJ_MAIN		= $(notdir $(SRC_MAIN:.cpp=.o))
OBJ_PATH_MAIN	= ./

OBJS			= $(OBJ_PATH_EARTH)/$(OBJ_EARTH) $(OBJ_PATH_MAIN)/$(OBJ_MAIN)

TARGET          = space

$(TARGET) : $(OBJ_MAIN) $(OBJ_EARTH)
		$(CXX) -o $(TARGET) $(OBJS)

$(OBJ_MAIN) :
	$(CXX) -c $(SRC_MAIN) -o $(OBJ_PATH_MAIN)/$(OBJ_MAIN)

$(OBJ_EARTH) : $(SRC_EARTH) $(LIB_EARTH)
	$(CXX) -c $(SRC_EARTH) -o $(OBJ_PATH_EARTH)/$(OBJ_EARTH)

clean :
		rm -f $(TARGET)
		rm -f $(OBJ_PATH_EARTH)/*.o
		rm -f $(OBJ_PATH_MAIN)/*.o