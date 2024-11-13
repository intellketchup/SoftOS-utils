#include <stdio.h>
#define MAX_DATA_SIZE 1000

int pointer = 0;

void copyData(char* data, char* buffer)
{
	int i = 0;
	while (buffer[i]) {
		if (MAX_DATA_SIZE < pointer) {
			data[pointer++] = buffer[i];
		}
		else {
			return;
		}
	}


}
