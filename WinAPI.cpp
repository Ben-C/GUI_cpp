#include <iostream>
#include <string>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
    {
        MessageBox(NULL, "This is a test, for the different C++ GUI libs", "Hello World", MB_OKCANCEL);
        return 0;

    }
