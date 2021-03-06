/*
 * mesh_mpi.h:  function definitions for mesh_mpi.c 
 *
 */

#ifndef MESH_MPI_H
#define MESH_MPI_H


int mesh_broadcast_all(struct mesh_data *mesh);
int mesh_broadcast_constants(struct mesh_data *mesh);
int mesh_broadcast_special_boundaries(struct mesh_data *mesh);
int mesh_broadcast_baffles(struct mesh_data *mesh);
int mesh_mpi_init_complete(struct mesh_data *mesh, long int range, long int start);

#endif