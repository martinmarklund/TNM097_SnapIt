/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef SUM_H
#define SUM_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "omp.h"
#include "Version7_corrRot_types.h"

/* Function Declarations */
extern double b_sum(const emxArray_real_T *x);
extern void c_sum(const emxArray_real_T *x, emxArray_real_T *y);
extern void d_sum(const emxArray_real_T *x, double y_data[], int y_size[3]);
extern void sum(const emxArray_real_T *x, emxArray_real_T *y);

#endif

/* End of code generation (sum.h) */
