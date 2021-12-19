#ifndef DATASET_H
#define DATASET_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <fstream>

typedef struct entry {
    int txid;
    int item_present[100]; // 100 is upper bound
} entry;

void generate_dataset(entry *db, int len, int total_items);
void print_dataset(entry *db);
void save_dataset(entry *db);

#endif /* DATASET_H */
