#ifndef EXPORT_H
#define EXPORT_H

#include "interpreter.h"

int externalVariableSetValue(Program* program, const char* identifier, opcode_t opcode, int data);
int externalVariableGetValue(Program* program, const char* name, opcode_t* opcodePtr, int* dataPtr);
int externalVariableCreate(Program* program, const char* identifier);
void _initExport();
void externalVariablesClear();
Program* externalProcedureGetProgram(const char* identifier, int* addressPtr, int* argumentCountPtr);
int externalProcedureCreate(Program* program, const char* identifier, int address, int argumentCount);
void _exportClearAllVariables();

#endif /* EXPORT_H */
