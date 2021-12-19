#include "seqalgo.h"
#include "pthreadsalgo.h"

int main(int argc, char *argv[]) {
	entry *data = (entry *) malloc(NUM_TX * sizeof(entry));

	generate_dataset(data, NUM_TX, NUM_ITEMS);

#if DEBUG
	print_dataset(data);
#endif

	save_dataset(data);

	seqalgo_run(data);

	pthreadsalgo_run(data);

	free(data);

	return 0;
}
