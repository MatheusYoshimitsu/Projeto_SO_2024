#ifndef INTERFACE_H
#define INTERFACE_H

#ifdef WIN64
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

#include "../std/list.h"
#include "../memory/memory.h"

void main_interface();
void proc_state_interface();
void mem_usage_interface();

#endif