#define _CRT_SECURE_NO_WARNINGS
#include "shapes.h"
#include <stdio.h>

int main(void)
{

	FILE *f = fopen("line1.bin", "rb");
	if (f != NULL)
	{
		struct line pln;
		bool a = line_load(f,&pln);
		bool b= line_load(f, &pln);

	}
}