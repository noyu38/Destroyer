#include <stdio.h>
#include <windows.h>

int main(){
	
	printf("RBUTTON:start;\n");
	while(1){
		if(GetAsyncKeyState(VK_RIGHT)){
			break;
		}
	}
	Sleep(200);
	printf("RBUTTON:break;\n");
	while(1){
		if(GetAsyncKeyState(VK_RIGHT)){
			break;
		}
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		Sleep(10);
	}
	
	return 0;
}