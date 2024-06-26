#include "include/header.h"

int main(int argc, char *argv[]) {
	size_t n;
	long long max_product = 0;
    printf("How many elements? ");
	scanf("%lu", &n);
    if (n < 3) {
        printf("Size must be at least 3");
        return 0;
    }

	// Init an array of length n.
	int arr[n];

	// Take array's elements.
    printf("Please insert your %lu elements.\n/> ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}

	// If no algorithm is specified, Use the most efficient.
	if (argc < 2) {
		argv[1] = "f";
	}

	// Determine which algorithm you're going to use.
	switch (argv[1][0]) {
		case 'f':
			max_product = findMaxes(arr, n);
			break;
		case 's':
			max_product = sortMethod(arr, n);
			break;
		case 'b':
			max_product = bruteforce(arr, n);
			break;
	}

	// Print the result.
	printf("Max product of three elements is: %lld\n", max_product);
}
