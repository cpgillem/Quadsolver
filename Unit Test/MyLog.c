#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define FILENAME "log.txt"

int main() {
	FILE *f;
	char *message = malloc(255);

	// Open the log file in append mode.
	f = fopen(FILENAME, "a");
	if (f == NULL) {
		printf("Error opening log file.\n");
		exit(1);
	}

	strcpy(message, "test 1");
	// Write to the log file.
	fprintf(f, ">>> %s\n\n", message);

	strcpy(message, "test 2");
	// Write to the log file.
	fprintf(f, ">>> %s\n\n", message);

	strcpy(message, "test 3");
	// Write to the log file.
	fprintf(f, ">>> %s\n\n", message);
	
	strcpy(message, "test 4");
	// Write to the log file.
	fprintf(f, ">>> %s\n\n", message);

	strcpy(message, "test 5");
	// Write to the log file.
	fprintf(f, ">>> %s\n\n", message);

	// Close the log file.
	fclose(f);
	return 0;
}
