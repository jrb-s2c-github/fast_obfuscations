/*
 *
 * Turn content of two-dimensional array into long by adding bitshifted values together, e.g.
 *   [ 2 0 1 ]
 *   [ 2 1 0 ]  ==> 001 100 010 001 010 100 010 001 100
 *   [ 1 2 0 ]
 *
 * Do you see it?
 */
long new_state = 0;
for (int i = 0; i < dimension; i++) {
  for (int j = 0; j < dimension; j++) {
    new_state += 1 << grid[state_index][i][j]<<dimension*(i*dimension+j);
  }
}
