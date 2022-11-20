// HideSpacedesk.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
int main()
{
    HWND hide = FindWindowA("SPACEDESKSERVICETRAYAPPLICATION", NULL);
    ShowWindow(hide, SW_HIDE);   
}

 