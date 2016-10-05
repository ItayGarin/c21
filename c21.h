#ifndef C21_H
#define C21_H

#include <stdbool.h>
#include <inttypes.h>

typedef int8_t   i8;
typedef uint8_t  u8;
typedef int16_t  i16;
typedef uint16_t u16;
typedef int32_t  i32;
typedef uint32_t u32;
typedef int64_t  i64;
typedef uint64_t u64;

#define _Merge(x, y) x##y
#define _Anyname(x) _Merge(_Anyname_, x)
#define _ _Anyname(__COUNTER__)

#define var __auto_type
#define let __auto_type const

#define care __attribute__((warn_unused_result))
#define defer(x) __attribute__((cleanup(x)))

#define RET_IF_TRUE(exper, retval)              \
  if((exper)) {                                 \
    return retval;                              \
  }

#define RET_IF_FALSE(exper, retval)             \
  if(!(exper)) {                                \
    return retval;                              \
  }

#define RET_IF_NULL(exper, retval)              \
  if((exper) == NULL) {                         \
    return retval;                              \
  }

#define GOTO_IF_TRUE(exper, label)              \
  if((exper)) {                                 \
    goto label;                                 \
  }

#define GOTO_IF_FALSE(exper, label)             \
  if(!(exper)) {                                \
    goto label;                                 \
  }

#define GOTO_IF_NULL(exper, label)              \
  if((exper) == NULL) {                         \
    goto label;                                 \
  }

#define forcount(index, count)                                \
  for(size_t index = 0, size = count; index < size; ++index)

#define foruntil(index, end, array)                     \
  for(size_t index = 0; (array)[index] != end; ++index)

#define forrange(index, start, end)                             \
  for(size_t index = start, stop = end; index != stop; ++index)

#endif /* C21_H */
