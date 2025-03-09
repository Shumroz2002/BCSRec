#pragma once

#ifdef BCSREC_EXPORTS
#define BCSREC_API __declspec(dllexport)
#else
#define BCSREC_API __declspec(dllimport)
#endif

BCSREC_API int getPerimeter(int length, int width);
BCSREC_API int getArea(int length, int width);
BCSREC_API void setLength(int input, int* length);
BCSREC_API void setWidth(int input, int* width);
BCSREC_API void printWelcomeMenu();
BCSREC_API void printOptions();
BCSREC_API int getIntInput(char message[]);
