#include <stdio.h>
#include "db.h"
#include "parsing.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  std::cout << argv[1] << std::endl;
  const char *db_path = argv[1];
  string x;
  database_t db;
  db_init(&db);
  db_load(&db, db_path);
  // Il y a sans doute des choses à faire ici...
  while (true){ 
    std::cin>> x;

  }
  db_save(&db, db_path);
  printf("Bye bye!\n");
  return 0;
}