#include <stdio.h>

int main() {
	// Set the val to 5
	int val = 5;
	// Now run the re.sh, you have 5 secounds
	sleep(5);
	// It should print 10 instead of 5
	printf("%d\n", val);
	return 0;
}
