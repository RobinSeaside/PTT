#ifndef CGBT_H
#define CGBT_H

#include "helpers.h"
#include "gbt.h"

class CondGBT: public GBT {
public:
  GBT ***gbt_ptrs;
  int k_Y;
  int p_Y;
  int n_s_Y;
  double rho0_Y;
  int rho0_mode_Y;

  double get_root_logrho();
  double get_root_logphi();
  // tran_mode, n_s, n_grid,lognu_lowerbound, lognu_upperbound, beta are all for Y only now as they are not needed for X

  CondGBT(Mat< unsigned int > X, Mat< unsigned int> Y, int k_X, int k_Y, int p_X, int p_Y,
                   double rho0_X, int rho0_mode_X, double rho0_Y, int rho0_mode_Y, int tran_mode_Y,
                   double lognu_lowerbound_Y, double lognu_upperbound_Y, int n_grid_Y, int n_s_Y, double beta_Y);
  ~CondGBT();
  void clear();
  void add_data_to_subtree(INDEX_TYPE I, int level, int x_curr, int part_count, Col< unsigned int > obs_X, Col< unsigned int > obs_Y);
  void remove_data_from_subtree(INDEX_TYPE I, int level, int x_curr, int part_count, Col< unsigned int > obs_X, Col< unsigned int > obs_Y);
  int update_subtree_add_new_data(INDEX_TYPE I, int level, int x_curr, int part_count, Col< unsigned int > new_obs_X, Col< unsigned int > new_obs_Y);
  int update_subtree_remove_new_data(INDEX_TYPE I, int level, int x_curr, int part_count, Col< unsigned int > new_obs_X, Col< unsigned int > new_obs_Y);
  double get_add_prob(INDEX_TYPE& I,int i, int t, int level);
  void sample_subtree(INDEX_TYPE& I,int level,int s);
  void sample();

  void find_hmap(int print=0);
  void find_hmap_subtree(INDEX_TYPE& I, int level);
  pair< vector< vector< ushort > >, vector< double > > find_hmap_part();

  vector<double> compute_predictive_density(Mat< unsigned int >Xnew, Mat< unsigned int >Ynew);


  void init(Mat< unsigned int > X, Mat< unsigned int > Y);
  int update();
  int update_node(double *, int, INDEX_TYPE);
  GBT ** get_node_gbt_ptr(INDEX_TYPE & I, int level);

};

#endif
