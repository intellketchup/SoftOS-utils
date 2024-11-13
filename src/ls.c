#include <stdio.h>
#include <dirent.h>
#include "../include/buffer.h"

int main(int argc, char *argv[]) {
	struct dirent *entry;
	DIR *dp = opendir(argc > 1 ? argv[1] : ".");

	if (dp == NULL) {
		perror("opendir");
		return 1;
	}

	while ((entry = readdir(dp)) != NULL ) {
		printf("%s\n", entry->d_name);

	}

	closedir(dp);
	return 0;

}
