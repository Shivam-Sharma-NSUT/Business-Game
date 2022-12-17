#include "Include\Headers.h"

using namespace std;

int main(){
    printf("\n\n********************************************************************************\n");
    printf("----------------------------BUSINESS GAME LAUNCHER------------------------------\n");
    printf("********************************************************************************\n");
    printf("\n\n\n\n\t\tPlease Don't Close Launcher While The Game Is Running!!!");
    initGame();
    HWND hWnd;
    hWnd = FindWindow(NULL, "Windows BGI");
    SendMessage((HWND) hWnd, WM_SETTEXT,0, (LPARAM)"Business Game");
    PrimarySCR();
    return 0;
}
