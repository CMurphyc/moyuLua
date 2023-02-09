#ifndef luaobject_h
#define luaobject_h 

#include "lua.h"

typedef struct lua_State lua_State;

typedef LUA_INTEGER lua_Integer;
typedef LUA_NUMBER lua_Number;
typedef unsigned char lua_Byte;
typedef int (*lua_CFunction) (lua_State* L); // light c function只有一个int类型的返回值
                                            // 代表调用完成后还有多少个返回值在栈中

#endif