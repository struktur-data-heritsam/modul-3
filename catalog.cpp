//
// Ariq Heritsa Maalik - 1305213031 - DS-45-01
//

#include "catalog.h"

void add_data(catalog &C, int x) {
  if (C.num < C.max-1) {
    C.num++;
    C.data[C.num] = x;
  }
}

void view_data(catalog C) {
  for (int i = 0; i <= C.num; i++) {
    cout << C.data[i] << " ";
  }

  cout << endl;
}

int search_data(catalog C, int x) {
  for (int i = 0; i <= C.num; i++) {
    if (C.data[i] == x) {
      return i;
    }
  }

  return -1;
}

void reversed_view(catalog C) {
  for (int i = C.num; i >= 0; i--) {
    cout << C.data[i] << " ";
  }

  cout << endl;
}

void delete_data(catalog &C) {
  if (C.num >= 0) {
    C.data[C.num] = NULL;
    C.num--;
  } else {
    cout << "Array kosong" << endl;
  }
}
