#ifndef clox_memory_h
#define clox_memory_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk,const char* name);
int disassembleInstruction(Chunk* chunk,int offset);

#endif