// SPDX-License-Identifier: BSD-3-Clause
/* Copyright 2017-2020, Intel Corporation */

#define flush noflush
#define EXPORTED_SYMBOL memmove_movnt_sse2_noflush
#define maybe_barrier barrier_after_ntstores
#include "memcpy_nt_sse2.h"