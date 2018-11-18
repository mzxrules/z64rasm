#ifndef ITEM_TABLE_H
#define ITEM_TABLE_H

#include "z64.h"

typedef uint16_t (*upgrade_fn)(z64_file_t *save, uint16_t item_id);
typedef void (*effect_fn)(z64_file_t *save, int16_t arg1, int16_t arg2);

typedef struct {
    int8_t      base_item_id;
    uint8_t     action_id;
    uint16_t    text_id;

    uint16_t    object_id;
    char        pad_;
    int8_t      graphic_id;

    upgrade_fn  upgrade;

    effect_fn   effect;
    int16_t     effect_arg1;
    int16_t     effect_arg2;
} item_row_t;

uint16_t resolve_item_id(uint16_t item_id);
item_row_t *get_item_row(uint16_t item_id);

#endif