

#ifndef radon_debug_h
#define radon_debug_h

#include "chunk.h"


void disassembleChunk(Chunk *chunk,const char *name);
int disassembleInstruction(Chunk *chunk,int offset);












#endif // radon_debug_h
