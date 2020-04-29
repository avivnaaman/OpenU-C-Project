
#include "globals.h"
#include "table.h"

/**
 * Writes the output files of a single assembled file
 * @param code_img The code image
 * @param data_img The data image
 * @param icf The final instruction counter
 * @param dcf The final data counter
 * @param filename The filename (without the extension)
 * @param ent_table The entries table
 * @param ext_table The external references table
 * @return Whether succeeded
 */
int write_output_files(machine_word **code_img, machine_data **data_img, long icf, long dcf, char *filename, table ent_table, table ext_table);