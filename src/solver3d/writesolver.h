/* writesolver.h
 *
 * header filef or file i/o for solver_data
 */

#ifndef _WRITESOLVER_H
#define _WRITESOLVER_H

#include "solver.h"

int write_solver(struct solver_data *solver, char *filename);
int write_initial(struct solver_data *solver, char *filename);

#endif
