#include "memoryconvert.h"
DWORD MemoryConvert::VirtualAddressToRVA(void* virtualAddress, HMODULE hModule)
{
	if (!hModule) 
	{
		return 0;
	}
	return (DWORD_PTR)virtualAddress - (DWORD_PTR)hModule;
}