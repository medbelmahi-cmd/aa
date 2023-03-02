#ifndef _PARSING_H
#define _PARSING_H

#ifndef _GNU_SOURCE
#define _GNU_SOURCE /* Required to work with strptime, which is OS-dependent */
#endif

#include <stdbool.h>

#include "student.h"
#include <string>
fhbfgdsgvdsv
using namespace std;



/** 
 * Parse the arguments of an update query.
 * Example:
 * ```
 * string query = "update id=864030 set fname=Trucmuche"
 * parse_update(query);
 * ```
 * @return: true if the parsing was successful, false otherwise
 **/
bool parse_update(string query);

/**
 * Parse the arguments of an insert query.
 * An insert query must specify all the fields as follows:
 * ```
 * string query = "insert Yannick Molinghen 393354 info 14/02/1995"
 * parse_insert(string query);
 * ```
 * @return:true if the parsing was successful, false otherwise
 **/
bool parse_insert(string query);

/** 
 * Parse field=value selectors.
 **/
bool parse_selectors(string query);




#endif
