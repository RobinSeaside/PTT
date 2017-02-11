// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fitPTTcpp
Rcpp::List fitPTTcpp(arma::mat X, arma::mat Xnew, arma::mat Omega, int k, double rho0, int rho0_mode, int tran_mode, double lognu_lowerbound, double lognu_upperbound, int n_grid, int n_s, double beta, int n_post_samples);
RcppExport SEXP PTT_fitPTTcpp(SEXP XSEXP, SEXP XnewSEXP, SEXP OmegaSEXP, SEXP kSEXP, SEXP rho0SEXP, SEXP rho0_modeSEXP, SEXP tran_modeSEXP, SEXP lognu_lowerboundSEXP, SEXP lognu_upperboundSEXP, SEXP n_gridSEXP, SEXP n_sSEXP, SEXP betaSEXP, SEXP n_post_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xnew(XnewSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type rho0(rho0SEXP);
    Rcpp::traits::input_parameter< int >::type rho0_mode(rho0_modeSEXP);
    Rcpp::traits::input_parameter< int >::type tran_mode(tran_modeSEXP);
    Rcpp::traits::input_parameter< double >::type lognu_lowerbound(lognu_lowerboundSEXP);
    Rcpp::traits::input_parameter< double >::type lognu_upperbound(lognu_upperboundSEXP);
    Rcpp::traits::input_parameter< int >::type n_grid(n_gridSEXP);
    Rcpp::traits::input_parameter< int >::type n_s(n_sSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< int >::type n_post_samples(n_post_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(fitPTTcpp(X, Xnew, Omega, k, rho0, rho0_mode, tran_mode, lognu_lowerbound, lognu_upperbound, n_grid, n_s, beta, n_post_samples));
    return rcpp_result_gen;
END_RCPP
}