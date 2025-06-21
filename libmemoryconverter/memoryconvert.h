#pragma once
#include <Windows.h>
namespace MemoryConvert
{
	DWORD VirtualAddressToRVA(void* virtualAddress, HMODULE hModule);
}
	

