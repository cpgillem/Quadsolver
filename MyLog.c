#include "MyLog.h"

void myLog(char *message) {
	FILE *f;

	// Open the log file in append mode.
	f = fopen(FILENAME, "a");
	if (f == NULL) {
		printf("Error opening log file.\n");
		exit(1);
	}

	// Write to the log file.
	fprintf(f, ">>> %s\n\n", message);

	// Close the log file.
	fclose(f);
}
