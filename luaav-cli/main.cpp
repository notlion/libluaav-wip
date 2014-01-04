#include <iostream>

#include "lua.hpp"

int main(int argc, const char * argv[])
{
  lua_State *L;

  L = luaL_newstate();
  if (L == NULL) {
    fprintf(stderr, "luaL_newstate has failed\n");
    return 1;
  }

  luaL_openlibs(L);

  // Do something here ...

  lua_close(L);

  return 0;
}