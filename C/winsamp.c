#include <windows.h>

LRESULT CALLBACK WindowProcedure(HWND,UINT,WPARAM,LPARAM);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncomdshow)
{
    WNDCLASSW wc = {0};

    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = L"myWindowClass";
    wc.lpfnWndProc = WindowProcedure;

    if(!RegisterClassW(&wc))
        return FALSE;

    CreateWindowW(L"myWindowClass","Sample Win32 App", WS_OVERLAPPED | WS_VISIBLE, 100, 100, 500, 500,NULL, NULL,NULL,NULL);

    MSG msg = {0};

    while(GetMessage(&msg,NULL,NULL,NULL))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
    switch(msg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        DefWindowProc(hWnd,msg,wp,lp);
    }
}
