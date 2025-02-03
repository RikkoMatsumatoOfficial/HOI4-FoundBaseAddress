#include <Windows.h>
#include <iostream>
#include <libmem/libmem.h>
lm_module_t modulex;
lm_process_t proc;
lm_bool_t boolity;
using namespace std;
int main() 
{
	SetConsoleTitleA("HOI4-FoundBaseAddress by RikkoMatsumatoOfficial");
	boolity = LM_FindProcess("hoi4.exe", &proc);
	if (!boolity) {
		MessageBoxA(0, "Not Founded Process of This Game(hoi4.exe)", "HOI4-FoundBaseAddress", MB_OK | MB_ICONERROR);
		exit(1223);
	}
	else {
		LM_GetProcessEx(proc.pid, &proc);
		LM_FindModuleEx(&proc, "hoi4.exe", &modulex);
		std::cout << "Base Address of hoi4.exe: " << (void*)modulex.size << std::endl;
		exit(344);
	}
	return 0;
}