//
// Ariq Heritsa Maalik - 1305213031 - DS-45-01
//

#ifndef MODUL3_CATALOG_H
#define MODUL3_CATALOG_H

#include <iostream>

using namespace std;

const int nMax = 50;

struct catalog {
  int data[nMax];
  int max, num;
};

void add_data(catalog &C, int x);

void view_data(catalog C);

int search_data(catalog C, int x);

void reversed_view(catalog C);

void delete_data(catalog &C);

#endif //MODUL3_CATALOG_H
