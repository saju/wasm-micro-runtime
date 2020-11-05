/*
 * Copyright (C) 2019 Intel Corporation. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef _SIMD_SAT_INT_ARITH_H_
#define _SIMD_SAT_INT_ARITH_H_

#include "../aot_compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

bool
aot_compile_simd_i8x16_saturate(AOTCompContext *comp_ctx,
                                AOTFuncContext *func_ctx,
                                V128Arithmetic arith_op,
                                bool is_signed);

bool
aot_compile_simd_i16x8_saturate(AOTCompContext *comp_ctx,
                                AOTFuncContext *func_ctx,
                                V128Arithmetic arith_op,
                                bool is_signed);

bool
aot_compile_simd_i8x16_cmp(AOTCompContext *comp_ctx,
                           AOTFuncContext *func_ctx,
                           V128Arithmetic arith_op,
                           bool is_signed);

bool
aot_compile_simd_i16x8_cmp(AOTCompContext *comp_ctx,
                           AOTFuncContext *func_ctx,
                           V128Arithmetic arith_op,
                           bool is_signed);

bool
aot_compile_simd_i32x4_cmp(AOTCompContext *comp_ctx,
                           AOTFuncContext *func_ctx,
                           V128Arithmetic arith_op,
                           bool is_signed);

bool
aot_compile_simd_i8x16_abs(AOTCompContext *comp_ctx, AOTFuncContext *func_ctx);

bool
aot_compile_simd_i16x8_abs(AOTCompContext *comp_ctx, AOTFuncContext *func_ctx);

bool
aot_compile_simd_i32x4_abs(AOTCompContext *comp_ctx, AOTFuncContext *func_ctx);

bool
aot_compile_simd_i8x16_avgr_u(AOTCompContext *comp_ctx,
                              AOTFuncContext *func_ctx);

bool
aot_compile_simd_i16x8_avgr_u(AOTCompContext *comp_ctx,
                              AOTFuncContext *func_ctx);

#ifdef __cplusplus
} /* end of extern "C" */
#endif

#endif /* end of _SIMD_SAT_INT_ARITH_H_ */
