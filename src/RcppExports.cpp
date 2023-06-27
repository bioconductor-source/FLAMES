// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// match_cell_barcode
Rcpp::List match_cell_barcode(Rcpp::String fastq_dir, Rcpp::String stats_file, Rcpp::String out_fastq, Rcpp::String ref_csv, int MAX_DIST, int UMI_LEN, Rcpp::String left_seq, int min_length, bool reverse_complement, bool fixed_range);
RcppExport SEXP _FLAMES_match_cell_barcode(SEXP fastq_dirSEXP, SEXP stats_fileSEXP, SEXP out_fastqSEXP, SEXP ref_csvSEXP, SEXP MAX_DISTSEXP, SEXP UMI_LENSEXP, SEXP left_seqSEXP, SEXP min_lengthSEXP, SEXP reverse_complementSEXP, SEXP fixed_rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fastq_dir(fastq_dirSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type stats_file(stats_fileSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type out_fastq(out_fastqSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type ref_csv(ref_csvSEXP);
    Rcpp::traits::input_parameter< int >::type MAX_DIST(MAX_DISTSEXP);
    Rcpp::traits::input_parameter< int >::type UMI_LEN(UMI_LENSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type left_seq(left_seqSEXP);
    Rcpp::traits::input_parameter< int >::type min_length(min_lengthSEXP);
    Rcpp::traits::input_parameter< bool >::type reverse_complement(reverse_complementSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_range(fixed_rangeSEXP);
    rcpp_result_gen = Rcpp::wrap(match_cell_barcode(fastq_dir, stats_file, out_fastq, ref_csv, MAX_DIST, UMI_LEN, left_seq, min_length, reverse_complement, fixed_range));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FLAMES_match_cell_barcode", (DL_FUNC) &_FLAMES_match_cell_barcode, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_FLAMES(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
