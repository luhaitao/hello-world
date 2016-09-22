/// hello_ace.cpp
/// test if ace available in system

#include "ace/Log_Msg.h"

int main(int argc, char *argv[])
{
    ACE_DEBUG((LM_DEBUG, "Hello World from ACE !\n"));
    return 0;
}
