#include <Windows.h>
#include <iostream>
#include "dbvm_trap.hh"
bool dummy()
{
    char pass[64];
    std::cin >> pass;
    DBVM_TRAP();
    if (pass[4] == '4')
    {
      printf("cool pass!\n");
        Sleep(1000);
        return true;
    }
   printf("Wrong Password!\n");
    return false;
}
int main()
{

    printf(" ====[Japrapah]==== \n Tested on DBVM 16!\n DBVM TRACE KILLER!\n");
    while (!dummy())
    {
        Sleep(1000);
    }
   printf("exit...\n");
    Sleep(1000);
    return 0;
}

