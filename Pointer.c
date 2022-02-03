#include <stdio.h>
void addFive( int* ); // Deklaration

int main( int argc, char** argv )
{
	int a; // Deklaration
	int b = 0; // Deklaration + Definition
	a = 1; // Zuweisung

	// int* p; // Deklaration: Erstelle einen Int-Pointer
	// int* pb = NULL; // Deklaration: Erstelle einen Int-Pointer + Definition: Der Pointer soll auf NULL zeigen
	// p = NULL; // Zuweisung: Adresse auf die der Pointer zeigt soll NULL sein
	// *p = 0; // Zuweisung: Wert, auf den der Pointer zeigt, soll 0 sein
	// 
	// printf( "%d", *p ); // Zugriff auf den Wert, auf den der Pointer zeigt
	// printf( "%d", p ); // Zugriff auf die Adresse auf die der Pointer zeigt

	int* pa = &a; // & = adresse von ...
	printf( "%d\n", &a );
	printf( "%d\n", pa );
	printf( "%d\n", *pa );

	int i = 0;
	addFive(&i);
	printf( "%d\n", i );

	return 0;
}

void addFive( int* cnt ) // Definition
{
	*cnt = 5;
}
