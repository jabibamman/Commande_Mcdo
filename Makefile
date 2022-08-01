JSON_C_DIR=/vcpkg/packages/json-c_x86-windows
CFLAGS += -I$(JSON_C_DIR)/include/json-c
# Or to use lines like: #include <json-c/json_object.h>
#CFLAGS += -I$(JSON_C_DIR)/include
LDFLAGS+= -L$(JSON_C_DIR)/lib -ljson-c