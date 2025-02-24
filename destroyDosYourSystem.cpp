#include <iostream>
#include <Windows.h>

int main(int argc,const char* argv[]) {
	/*
 
 //Dos 
 //moooooooooore tasks
	if (argc < 1) { return 0; }
	else {
		for (int i = 0;i < argc;i++) {
			system(argv[i]);
		}
	}

 
	*/
    if (argc < 2) {
        return 0;
    }
    else {
        for (int i = 1; i < argc; i++) {
            if (strcmp(argv[i], argv[0]) != 0) {
                system(argv[i]);
            }
            else {
                system("taskkill /IM Project5.exe /f");
            }
        }
    }


	return 0;
}
