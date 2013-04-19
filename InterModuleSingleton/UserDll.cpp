#include <windows.h>
#include <cstdio>
#include "TestClass.h"

extern "C" __declspec(dllexport) void DoSomethingOnDLL()
{
    printf("fron dll: TestClass::GetInstance() %p\n", TestClass::GetInstance());
    TestClass::GetInstance()->DoSomething();
}


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch(fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            break;

        case DLL_PROCESS_DETACH:
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            break;
    }
    return  TRUE;
}
