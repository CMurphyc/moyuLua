#ifndef luaobject_h
#define luaobject_h 

#include "lua.h"

typedef struct lua_State lua_State;

typedef LUA_INTEGER lua_Integer;
typedef LUA_NUMBER lua_Number;
typedef unsigned char lu_byte;
typedef int (*lua_CFunction)(lua_State* L); // 定义light c function函数指针

typedef union lua_Value {
    void* p; // 存放light userdata
    int b;
    lua_Integer i;
    lua_CFunction f;
} Value;

typedef struct lua_TValue {
    Value value_;  // 值
    int tt_;       // 类型信息
} TValue;


#define LUA_NUMINT (LUA_TNUMBER | (0 << 4)) // int number
#define LUA_NUMFLT (LUA_TNUMBER | (1 << 4)) // float number

#define LUA_TLCL (LUA_TFUNCTION | (0 << 4)) // lua closure
#define LUA_TLCF (LUA_TFUNCTION | (1 << 4)) // light c function
#define LUA_TCCL (LUA_TFUNCTION | (2 << 4)) // c closure

#define LUA_LNGSTR (LUA_TSTRING | (0 << 4)) // long string
#define LUA_SHRSTR (LUA_TSTRING | (1 << 4)) // short string

#endif