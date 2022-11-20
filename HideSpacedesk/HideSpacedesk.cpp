// HideSpacedesk.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
int main()
{
    while (true)
    {
        HWND hide = FindWindowA("SPACEDESKSERVICETRAYAPPLICATION", NULL);
        ShowWindow(hide, 0);
        Sleep(1000);
    }
    
     
}

 