#ifndef _COMMON_H_
#define _COMMON_H_

#include "ultra64.h"
#include "gbi_custom.h"
#include "types.h" // IWYU pragma: export
#include "common_structs.h" // IWYU pragma: export
#include "functions.h" // IWYU pragma: export
#ifndef NO_EXTERN_VARIABLES
#include "variables.h"
#endif
#include "macros.h"
#include "enums.h"
#include "evt.h"
#include "messages.h"
#include "message_ids.h"
#include "battle/battle_names.h"
#include "battle/stage_names.h"
#include "battle/actor_types.h"

#ifdef PERMUTER
extern int TEXEL0, TEXEL1, PRIMITIVE, PRIMITIVE_ALPHA;
#endif

#endif
