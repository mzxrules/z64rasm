#ifndef MISC_H
#define MISC_H

#include <stdbool.h>
#include "z2.h"

union hash {
    union {
        u8 primary[0x04];
        u32 value;
    };
    u8 full[0x10];
};

// Magic number for misc_config: "MISC"
#define MISC_CONFIG_MAGIC 0x4D495343

struct misc_config {
    u32 magic;              /* 0x0000 */
    u32 version;            /* 0x0004 */
    union hash hash;        /* 0x0008 */
    union {
        struct {
            u32 draw_hash          : 1;
            u32 fast_push          : 1;
            u32 ocarina_underwater : 1;
            u32                    : 29;
        };
        u32 flags;          /* 0x0018 */
    };
};                          /* 0x001C */

bool misc_can_use_ocarina_underwater();
struct misc_config* misc_get_config();
f32 misc_get_push_block_speed(z2_actor_t *actor, z2_game_t *game);

#endif // MISC_H
