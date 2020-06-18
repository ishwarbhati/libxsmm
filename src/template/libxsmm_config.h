#ifndef LIBXSMM_CONFIG_H
#define LIBXSMM_CONFIG_H

#if !defined(LIBXSMM_DEFAULT_CONFIG) && (defined(_WIN32) || (defined(LIBXSMM_SOURCE_H) && !defined(LIBXSMM_CONFIGURED)))
#  define LIBXSMM_DEFAULT_CONFIG
#endif

#if !defined(LIBXSMM_DEFAULT_CONFIG) && (!defined(LIBXSMM_SOURCE_H) || defined(LIBXSMM_CONFIGURED))
#  include "libxsmm_version.h"
$LIBXSMM_OFFLOAD_BUILD
$MNK_PREPROCESSOR_LIST
#else
#  define LIBXSMM_CONFIG_VERSION ""
#  define LIBXSMM_CONFIG_BRANCH ""
#  define LIBXSMM_CONFIG_VERSION_MAJOR INT_MAX
#  define LIBXSMM_CONFIG_VERSION_MINOR INT_MAX
#  define LIBXSMM_CONFIG_VERSION_UPDATE INT_MAX
#  define LIBXSMM_CONFIG_VERSION_PATCH INT_MAX
#  define LIBXSMM_CONFIG_BUILD_DATE INT_MAX
#endif

#define LIBXSMM_CONFIG_CACHELINE $CACHELINE
#define LIBXSMM_CONFIG_ALIGNMENT $CACHELINE
#define LIBXSMM_CONFIG_MALLOC $MALLOC
#define LIBXSMM_CONFIG_ILP64 $ILP64
#define LIBXSMM_CONFIG_SYNC $SYNC
#define LIBXSMM_CONFIG_JIT $JIT
#define LIBXSMM_CONFIG_TRY 0

#define LIBXSMM_CONFIG_PREFETCH $PREFETCH
#define LIBXSMM_CONFIG_MAX_MNK $MAX_MNK
#define LIBXSMM_CONFIG_MAX_DIM $MAX_DIM
#define LIBXSMM_CONFIG_AVG_DIM $AVG_DIM
#define LIBXSMM_CONFIG_MAX_M $MAX_M
#define LIBXSMM_CONFIG_MAX_N $MAX_N
#define LIBXSMM_CONFIG_MAX_K $MAX_K
#define LIBXSMM_CONFIG_FLAGS $FLAGS
#define LIBXSMM_CONFIG_ALPHA $ALPHA
#define LIBXSMM_CONFIG_BETA $BETA
#define LIBXSMM_CONFIG_WRAP $WRAP

#endif
