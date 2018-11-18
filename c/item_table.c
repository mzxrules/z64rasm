#include "item_table.h"

#include "item_effects.h"
#include "item_upgrades.h"
#include "z64.h"

enum dungeon {
    DEKU_ID    = 0,
    DODONGO_ID = 1,
    JABU_ID    = 2,
    FOREST_ID  = 3,
    FIRE_ID    = 4,
    WATER_ID   = 5,
    SPIRIT_ID  = 6,
    SHADOW_ID  = 7,
    BOTW_ID    = 8,
    ICE_ID     = 9,
    TOWER_ID   = 10,
    GTG_ID     = 11,
    FORT_ID    = 12,
    CASTLE_ID  = 13,
};

#define ITEM_ROW( \
        base_item_id_, action_id_,  text_id_, object_id_, graphic_id_, \
        upgrade_, effect_, effect_arg1_, effect_arg2_) \
    { .base_item_id = base_item_id_, .action_id = action_id_, .text_id = text_id_, \
      .object_id = object_id_, .graphic_id = graphic_id_, \
      .upgrade = upgrade_, .effect = effect_, \
      .effect_arg1 = effect_arg1_, .effect_arg2 = effect_arg2_ }

// The "base item" mostly controls the sound effect made when you receive the item. It should be
// set to something that doesn't break NPCs.

// Action ID 0x41 (give kokiri tunic) is used to indicate no action.

item_row_t item_table[] = {
    [0x01] = ITEM_ROW(0x01, 0x8E, 0x32, 0x00CE, 0xE0, no_upgrade, no_effect, -1, -1), //
    [0x02] = ITEM_ROW(0x02, 0x8C, 0x34, 0x00BB, 0xEE, no_upgrade, no_effect, -1, -1), //
    [0x03] = ITEM_ROW(0x03, 0x09, 0x33, 0x00D9, 0xD8, no_upgrade, no_effect, -1, -1), //
    [0x04] = ITEM_ROW(0x04, 0x03, 0x31, 0x00E9, 0x35, no_upgrade, no_effect, -1, -1), //
    [0x05] = ITEM_ROW(0x05, 0x06, 0x30, 0x00E7, 0x33, no_upgrade, no_effect, -1, -1), //
    [0x06] = ITEM_ROW(0x06, 0x0E, 0x35, 0x00E8, 0x34, no_upgrade, no_effect, -1, -1), //
    [0x07] = ITEM_ROW(0x07, 0x00, 0x37, 0x00C7, 0xE5, no_upgrade, no_effect, -1, -1), //
    [0x08] = ITEM_ROW(0x08, 0x0A, 0x36, 0x00DD, 0x2D, no_upgrade, no_effect, -1, -1), //
    [0x09] = ITEM_ROW(0x09, 0x0B, 0x4F, 0x00DD, 0x2E, no_upgrade, no_effect, -1, -1), //
    [0x0A] = ITEM_ROW(0x0A, 0x0F, 0x39, 0x00EA, 0x36, no_upgrade, no_effect, -1, -1), //
    [0x0B] = ITEM_ROW(0x0B, 0x23, 0x69, 0x00EF, 0x3B, no_upgrade, no_effect, -1, -1), //
    [0x0C] = ITEM_ROW(0x0C, 0x08, 0x3A, 0x00DE, 0x2F, no_upgrade, no_effect, -1, -1), //
    [0x0D] = ITEM_ROW(0x0D, 0x11, 0x38, 0x00F6, 0x41, no_upgrade, no_effect, -1, -1), //
    [0x0E] = ITEM_ROW(0x0E, 0x2F, 0x02, 0x0109, 0x5E, no_upgrade, no_effect, -1, -1), //
    [0x0F] = ITEM_ROW(0x0F, 0x14, 0x42, 0x00C6, 0x01, no_upgrade, no_effect, -1, -1), //
    [0x10] = ITEM_ROW(0x10, 0x15, 0x43, 0x00EB, 0x38, no_upgrade, no_effect, -1, -1), //
    [0x11] = ITEM_ROW(0x11, 0x16, 0x44, 0x00EB, 0x37, no_upgrade, no_effect, -1, -1), //
    [0x12] = ITEM_ROW(0x12, 0x17, 0x45, 0x00EB, 0x39, no_upgrade, no_effect, -1, -1), //
    [0x13] = ITEM_ROW(0x13, 0x18, 0x46, 0x00C6, 0x01, no_upgrade, no_effect, -1, -1), //
    [0x14] = ITEM_ROW(0x14, 0x1A, 0x98, 0x00DF, 0x30, no_upgrade, no_effect, -1, -1), //
    [0x15] = ITEM_ROW(0x15, 0x1B, 0x99, 0x010B, 0x45, no_upgrade, no_effect, -1, -1), //
    [0x16] = ITEM_ROW(0x16, 0x10, 0x48, 0x00F3, 0xC2, no_upgrade, no_effect, -1, -1), //
    [0x17] = ITEM_ROW(0x17, 0x25, 0x10, 0x0136, 0x4F, no_upgrade, no_effect, -1, -1), //
    [0x18] = ITEM_ROW(0x18, 0x26, 0x11, 0x0135, 0x32, no_upgrade, no_effect, -1, -1), //
    [0x19] = ITEM_ROW(0x19, 0x22, 0x48, 0x0109, 0x44, no_upgrade, no_effect, -1, -1), //
    [0x1A] = ITEM_ROW(0x1A, 0x24, 0x12, 0x0134, 0x31, no_upgrade, no_effect, -1, -1), //
    [0x1B] = ITEM_ROW(0x1B, 0x27, 0x13, 0x0137, 0x50, no_upgrade, no_effect, -1, -1), //
    [0x1C] = ITEM_ROW(0x1C, 0x2B, 0x17, 0x0138, 0x51, no_upgrade, no_effect, -1, -1), //
    [0x1D] = ITEM_ROW(0x1D, 0x2D, 0x01, 0x00DA, 0x29, no_upgrade, no_effect, -1, -1), //
    [0x1E] = ITEM_ROW(0x1E, 0x2E, 0x48, 0x0109, 0x44, no_upgrade, no_effect, -1, -1), //
    [0x1F] = ITEM_ROW(0x1F, 0x30, 0x03, 0x0141, 0x54, no_upgrade, no_effect, -1, -1), //
    [0x20] = ITEM_ROW(0x20, 0x31, 0x04, 0x0140, 0x53, no_upgrade, no_effect, -1, -1), //
    [0x21] = ITEM_ROW(0x21, 0x32, 0x05, 0x00F5, 0x40, no_upgrade, no_effect, -1, -1), //
    [0x22] = ITEM_ROW(0x22, 0x33, 0x08, 0x0143, 0x56, no_upgrade, no_effect, -1, -1), //
    [0x23] = ITEM_ROW(0x23, 0x34, 0x09, 0x0146, 0x57, no_upgrade, no_effect, -1, -1), //
    [0x24] = ITEM_ROW(0x24, 0x35, 0x0D, 0x0149, 0x5A, no_upgrade, no_effect, -1, -1), //
    [0x25] = ITEM_ROW(0x25, 0x36, 0x0E, 0x013F, 0x52, no_upgrade, no_effect, -1, -1), //
    [0x26] = ITEM_ROW(0x26, 0x37, 0x0A, 0x0142, 0x55, no_upgrade, no_effect, -1, -1), //
    [0x27] = ITEM_ROW(0x27, 0x3B, 0xA4, 0x018D, 0x74, no_upgrade, no_effect, -1, -1), //
    [0x28] = ITEM_ROW(0x28, 0x3D, 0x4B, 0x00F8, 0x43, no_upgrade, no_effect, -1, -1), //
    [0x29] = ITEM_ROW(0x29, 0x3E, 0x4C, 0x00CB, 0xE3, no_upgrade, no_effect, -1, -1), //
    [0x2A] = ITEM_ROW(0x2A, 0x3F, 0x4D, 0x00DC, 0xD4, no_upgrade, no_effect, -1, -1), //
    [0x2B] = ITEM_ROW(0x2B, 0x40, 0x4E, 0x00EE, 0x3A, no_upgrade, no_effect, -1, -1), //
    [0x2C] = ITEM_ROW(0x2C, 0x42, 0x50, 0x00F2, 0x3C, no_upgrade, no_effect, -1, -1), //
    [0x2D] = ITEM_ROW(0x2D, 0x43, 0x51, 0x00F2, 0x3D, no_upgrade, no_effect, -1, -1), //
    [0x2E] = ITEM_ROW(0x2E, 0x45, 0x53, 0x0118, 0x47, no_upgrade, no_effect, -1, -1), //
    [0x2F] = ITEM_ROW(0x2F, 0x46, 0x54, 0x0157, 0x5F, no_upgrade, no_effect, -1, -1), //
    [0x30] = ITEM_ROW(0x30, 0x4B, 0x56, 0x00BE, 0x16, no_upgrade, no_effect, -1, -1), //
    [0x31] = ITEM_ROW(0x31, 0x4C, 0x57, 0x00BE, 0x17, no_upgrade, no_effect, -1, -1), //
    [0x32] = ITEM_ROW(0x32, 0x4D, 0x58, 0x00BF, 0x18, no_upgrade, no_effect, -1, -1), //
    [0x33] = ITEM_ROW(0x33, 0x4E, 0x59, 0x00BF, 0x19, no_upgrade, no_effect, -1, -1), //
    [0x34] = ITEM_ROW(0x34, 0x4F, 0x5A, 0x00BF, 0x1A, no_upgrade, no_effect, -1, -1), //
    [0x35] = ITEM_ROW(0x35, 0x51, 0x5B, 0x012D, 0x49, no_upgrade, no_effect, -1, -1), //
    [0x36] = ITEM_ROW(0x36, 0x52, 0x5C, 0x012D, 0x4A, no_upgrade, no_effect, -1, -1), //
    [0x37] = ITEM_ROW(0x37, 0x53, 0xCD, 0x00DB, 0x2A, no_upgrade, no_effect, -1, -1), //
    [0x38] = ITEM_ROW(0x38, 0x54, 0xCE, 0x00DB, 0x2B, no_upgrade, no_effect, -1, -1), //
    [0x39] = ITEM_ROW(0x39, 0x6F, 0x68, 0x00C8, 0x21, no_upgrade, no_effect, -1, -1), //
    [0x3A] = ITEM_ROW(0x3A, 0x70, 0x7B, 0x00D7, 0x24, no_upgrade, no_effect, -1, -1), //
    [0x3B] = ITEM_ROW(0x3B, 0x07, 0x3A, 0x010E, 0x46, no_upgrade, no_effect, -1, -1), //
    [0x3C] = ITEM_ROW(0x3C, 0x58, 0xDC, 0x0119, 0xB8, no_upgrade, no_effect, -1, -1), //
    [0x3D] = ITEM_ROW(0x3D, 0x72, 0xC6, 0x00BD, 0x13, no_upgrade, no_effect, -1, -1), //
    [0x3E] = ITEM_ROW(0x3E, 0x7A, 0xC2, 0x00BD, 0x14, no_upgrade, no_effect, -1, -1), //
    [0x3F] = ITEM_ROW(0x3F, 0x74, 0xC7, 0x00B9, 0x0A, no_upgrade, no_effect, -1, -1), //
    [0x40] = ITEM_ROW(0x40, 0x75, 0x67, 0x00B8, 0x0B, no_upgrade, no_effect, -1, -1), //
    [0x41] = ITEM_ROW(0x41, 0x76, 0x66, 0x00C8, 0x1C, no_upgrade, no_effect, -1, -1), //
    [0x42] = ITEM_ROW(0x42, 0x77, 0x60, 0x00AA, 0xFE, no_upgrade, no_effect, -1, -1), //
    [0x43] = ITEM_ROW(0x43, 0x78, 0x52, 0x00CD, 0xE2, no_upgrade, no_effect, -1, -1), //
    [0x44] = ITEM_ROW(0x44, 0x79, 0x52, 0x00CD, 0xE1, no_upgrade, no_effect, -1, -1), //
    [0x45] = ITEM_ROW(0x45, 0x56, 0x5E, 0x00D1, 0x22, no_upgrade, no_effect, -1, -1), //
    [0x46] = ITEM_ROW(0x46, 0x57, 0x5F, 0x00D1, 0x23, no_upgrade, no_effect, -1, -1), //
    [0x47] = ITEM_ROW(0x47, 0x21, 0x9A, 0x00DA, 0x29, no_upgrade, no_effect, -1, -1), //
    [0x48] = ITEM_ROW(0x48, 0x83, 0x55, 0x00B7, 0x09, no_upgrade, no_effect, -1, -1), //
    [0x49] = ITEM_ROW(0x49, 0x92, 0xE6, 0x00D8, 0xDB, no_upgrade, no_effect, -1, -1), //
    [0x4A] = ITEM_ROW(0x4A, 0x93, 0xE6, 0x00D8, 0xDA, no_upgrade, no_effect, -1, -1), //
    [0x4B] = ITEM_ROW(0x4B, 0x94, 0xE6, 0x00D8, 0xD9, no_upgrade, no_effect, -1, -1), //
    [0x4C] = ITEM_ROW(0x4C, 0x84, 0x6F, 0x017F, 0x93, no_upgrade, no_effect, -1, -1), //
    [0x4D] = ITEM_ROW(0x4D, 0x85, 0xCC, 0x017F, 0x92, no_upgrade, no_effect, -1, -1), //
    [0x4E] = ITEM_ROW(0x4E, 0x86, 0xF0, 0x017F, 0x91, no_upgrade, no_effect, -1, -1), //
    [0x4F] = ITEM_ROW(0x4F, 0x72, 0xC6, 0x00BD, 0x13, no_upgrade, no_effect, -1, -1), //
    [0x50] = ITEM_ROW(0x50, 0x82, 0x98, 0x00DF, 0x30, no_upgrade, no_effect, -1, -1), //
    [0x51] = ITEM_ROW(0x51, 0x28, 0x14, 0x0150, 0x5B, no_upgrade, no_effect, -1, -1), //
    [0x52] = ITEM_ROW(0x52, 0x29, 0x15, 0x0151, 0x5C, no_upgrade, no_effect, -1, -1), //
    [0x53] = ITEM_ROW(0x53, 0x2A, 0x16, 0x0152, 0x5D, no_upgrade, no_effect, -1, -1), //
    [0x54] = ITEM_ROW(0x54, 0x50, 0x79, 0x0147, 0x58, no_upgrade, no_effect, -1, -1), //
    [0x55] = ITEM_ROW(0x55, 0x87, 0xF1, 0x017F, 0x8F, no_upgrade, no_effect, -1, -1), //
    [0x56] = ITEM_ROW(0x56, 0x88, 0xF2, 0x017F, 0x8E, no_upgrade, no_effect, -1, -1), //
    [0x57] = ITEM_ROW(0x57, 0x3D, 0x0C, 0x00F8, 0x43, no_upgrade, no_effect, -1, -1), //
    [0x58] = ITEM_ROW(0x58, 0x04, 0x70, 0x0158, 0x60, no_upgrade, no_effect, -1, -1), //
    [0x59] = ITEM_ROW(0x59, 0x0C, 0x71, 0x0158, 0x61, no_upgrade, no_effect, -1, -1), //
    [0x5A] = ITEM_ROW(0x5A, 0x12, 0x72, 0x0158, 0x62, no_upgrade, no_effect, -1, -1), //
    [0x5B] = ITEM_ROW(0x5B, 0x71, 0xB4, 0x015C, 0x9D, no_upgrade, no_effect, -1, -1), //
    [0x5C] = ITEM_ROW(0x5C, 0x05, 0xAD, 0x015D, 0x64, no_upgrade, no_effect, -1, -1), //
    [0x5D] = ITEM_ROW(0x5D, 0x0D, 0xAE, 0x015D, 0x65, no_upgrade, no_effect, -1, -1), //
    [0x5E] = ITEM_ROW(0x5E, 0x13, 0xAF, 0x015D, 0x66, no_upgrade, no_effect, -1, -1), //
    [0x5F] = ITEM_ROW(0x5F, 0x47, 0x07, 0x017B, 0x6C, no_upgrade, no_effect, -1, -1), //
    [0x60] = ITEM_ROW(0x60, 0x48, 0x07, 0x017B, 0x6C, no_upgrade, no_effect, -1, -1), //
    [0x61] = ITEM_ROW(0x61, 0x8A, 0x37, 0x00C7, 0xE5, no_upgrade, no_effect, -1, -1), //
    [0x62] = ITEM_ROW(0x62, 0x8B, 0x37, 0x00C7, 0xE5, no_upgrade, no_effect, -1, -1), //
    [0x63] = ITEM_ROW(0x63, 0x8C, 0x34, 0x00BB, 0xEE, no_upgrade, no_effect, -1, -1), //
    [0x64] = ITEM_ROW(0x64, 0x8D, 0x34, 0x00BB, 0xEE, no_upgrade, no_effect, -1, -1), //
    [0x65] = ITEM_ROW(0x65, 0x02, 0x32, 0x00CE, 0xE0, no_upgrade, no_effect, -1, -1), //
    [0x66] = ITEM_ROW(0x66, 0x8F, 0x32, 0x00CE, 0xE0, no_upgrade, no_effect, -1, -1), //
    [0x67] = ITEM_ROW(0x67, 0x90, 0x32, 0x00CE, 0xE0, no_upgrade, no_effect, -1, -1), //
    [0x68] = ITEM_ROW(0x68, 0x91, 0x32, 0x00CE, 0xE0, no_upgrade, no_effect, -1, -1), //
    [0x69] = ITEM_ROW(0x69, 0x95, 0xDC, 0x0119, 0xB8, no_upgrade, no_effect, -1, -1), //
    [0x6A] = ITEM_ROW(0x6A, 0x96, 0x33, 0x00D9, 0xD8, no_upgrade, no_effect, -1, -1), //
    [0x6B] = ITEM_ROW(0x6B, 0x97, 0x33, 0x00D9, 0xD8, no_upgrade, no_effect, -1, -1), //
    [0x6C] = ITEM_ROW(0x6C, 0x19, 0x47, 0x00F4, 0x3F, no_upgrade, no_effect, -1, -1), //
    [0x6D] = ITEM_ROW(0x6D, 0x1D, 0x7A, 0x0174, 0x68, no_upgrade, no_effect, -1, -1), //
    [0x6E] = ITEM_ROW(0x6E, 0x1C, 0x5D, 0x0173, 0x67, no_upgrade, no_effect, -1, -1), //
    [0x6F] = ITEM_ROW(0x6F, 0x20, 0x97, 0x0176, 0x6A, no_upgrade, no_effect, -1, -1), //
    [0x70] = ITEM_ROW(0x70, 0x1E, 0xF9, 0x0176, 0x70, no_upgrade, no_effect, -1, -1), //
    [0x71] = ITEM_ROW(0x71, 0x77, 0xF3, 0x00AA, 0xFE, no_upgrade, no_effect, -1, -1), //
    [0x72] = ITEM_ROW(0x72, 0x84, 0xF4, 0x017F, 0x93, no_upgrade, no_effect, -1, -1), //
    [0x73] = ITEM_ROW(0x73, 0x85, 0xF5, 0x017F, 0x92, no_upgrade, no_effect, -1, -1), //
    [0x74] = ITEM_ROW(0x74, 0x86, 0xF6, 0x017F, 0x91, no_upgrade, no_effect, -1, -1), //
    [0x75] = ITEM_ROW(0x75, 0x87, 0xF7, 0x017F, 0x8F, no_upgrade, no_effect, -1, -1), //
    [0x76] = ITEM_ROW(0x76, 0x7A, 0xFA, 0x00BD, 0x14, no_upgrade, no_effect, -1, -1), //
    [0x77] = ITEM_ROW(0x77, 0x98, 0x90, 0x00C7, 0xE5, no_upgrade, no_effect, -1, -1), //
    [0x78] = ITEM_ROW(0x78, 0x99, 0x91, 0x00C7, 0xE5, no_upgrade, no_effect, -1, -1), //
    [0x79] = ITEM_ROW(0x79, 0x9A, 0xA7, 0x00BB, 0xEE, no_upgrade, no_effect, -1, -1), //
    [0x7A] = ITEM_ROW(0x7A, 0x9B, 0xA8, 0x00BB, 0xEE, no_upgrade, no_effect, -1, -1), //
    [0x7B] = ITEM_ROW(0x7B, 0x49, 0x6C, 0x017B, 0x73, no_upgrade, no_effect, -1, -1), //

    [0x80] = ITEM_ROW(-1, -1, -1, -1, -1, hookshot_upgrade,  no_effect, -1, -1), // Progressive Hookshot
    [0x81] = ITEM_ROW(-1, -1, -1, -1, -1, strength_upgrade,  no_effect, -1, -1), // Progressive Strength
    [0x82] = ITEM_ROW(-1, -1, -1, -1, -1, bomb_bag_upgrade,  no_effect, -1, -1), // Progressive Bomb Bag
    [0x83] = ITEM_ROW(-1, -1, -1, -1, -1, bow_upgrade,       no_effect, -1, -1), // Progressive Bow
    [0x84] = ITEM_ROW(-1, -1, -1, -1, -1, slingshot_upgrade, no_effect, -1, -1), // Progressive Slingshot
    [0x85] = ITEM_ROW(-1, -1, -1, -1, -1, wallet_upgrade,    no_effect, -1, -1), // Progressive Wallet
    [0x86] = ITEM_ROW(-1, -1, -1, -1, -1, scale_upgrade,     no_effect, -1, -1), // Progressive Scale
    [0x87] = ITEM_ROW(-1, -1, -1, -1, -1, nut_upgrade,       no_effect, -1, -1), // Progressive Nut Capacity
    [0x88] = ITEM_ROW(-1, -1, -1, -1, -1, stick_upgrade,     no_effect, -1, -1), // Progressive Stick Capacity
    [0xC2] = ITEM_ROW(-1, -1, -1, -1, -1, bombchu_upgrade,   no_effect, -1, -1), // Progressive Bombchus
    [0xE0] = ITEM_ROW(-1, -1, -1, -1, -1, magic_upgrade,     no_effect, -1, -1), // Progressive Magic Meter
    [0xC3] = ITEM_ROW(-1, -1, -1, -1, -1, ocarina_upgrade,   no_effect, -1, -1), // Progressive Ocarina

    [0x89] = ITEM_ROW(0x53, 0x41, 0x43, 0x00EB, 0x38, no_upgrade, give_bottle, 0x15, -1), // Bottle with Red Potion
    [0x8A] = ITEM_ROW(0x53, 0x41, 0x44, 0x00EB, 0x37, no_upgrade, give_bottle, 0x16, -1), // Bottle with Green Potion
    [0x8B] = ITEM_ROW(0x53, 0x41, 0x45, 0x00EB, 0x39, no_upgrade, give_bottle, 0x17, -1), // Bottle with Blue Potion
    [0x8C] = ITEM_ROW(0x53, 0x41, 0x46, 0x0177, 0x6B, no_upgrade, give_bottle, 0x18, -1), // Bottle with Fairy
    [0x8D] = ITEM_ROW(0x53, 0x41, 0x47, 0x00F4, 0x3F, no_upgrade, give_bottle, 0x19, -1), // Bottle with Fish
    [0x8E] = ITEM_ROW(0x53, 0x41, 0x5D, 0x0173, 0x67, no_upgrade, give_bottle, 0x1C, -1), // Bottle with Blue Fire
    [0x8F] = ITEM_ROW(0x53, 0x41, 0x7A, 0x0174, 0x68, no_upgrade, give_bottle, 0x1D, -1), // Bottle with Bugs
    [0x90] = ITEM_ROW(0x53, 0x41, 0xF9, 0x0176, 0x70, no_upgrade, give_bottle, 0x1E, -1), // Bottle with Big Poe
    [0x91] = ITEM_ROW(0x53, 0x41, 0x97, 0x0176, 0x6A, no_upgrade, give_bottle, 0x20, -1), // Bottle with Poe

    [0x92] = ITEM_ROW(0x53, 0x41, 0x06, 0x00B9, 0x0A, no_upgrade, give_dungeon_item, 0x01, FOREST_ID ), // Forest Temple Boss Key
    [0x93] = ITEM_ROW(0x53, 0x41, 0x1C, 0x00B9, 0x0A, no_upgrade, give_dungeon_item, 0x01, FIRE_ID   ), // Fire Temple Boss Key
    [0x94] = ITEM_ROW(0x53, 0x41, 0x1D, 0x00B9, 0x0A, no_upgrade, give_dungeon_item, 0x01, WATER_ID  ), // Water Temple Boss Key
    [0x95] = ITEM_ROW(0x53, 0x41, 0x1E, 0x00B9, 0x0A, no_upgrade, give_dungeon_item, 0x01, SPIRIT_ID ), // Spirit Temple Boss Key
    [0x96] = ITEM_ROW(0x53, 0x41, 0x2A, 0x00B9, 0x0A, no_upgrade, give_dungeon_item, 0x01, SHADOW_ID ), // Shadow Temple Boss Key
    [0x97] = ITEM_ROW(0x53, 0x41, 0x61, 0x00B9, 0x0A, no_upgrade, give_dungeon_item, 0x01, TOWER_ID  ), // Ganon's Castle Boss Key

    [0x98] = ITEM_ROW(0x4D, 0x41, 0x62, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, DEKU_ID   ), // Deku Tree Compass
    [0x99] = ITEM_ROW(0x4D, 0x41, 0x63, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, DODONGO_ID), // Dodongo's Cavern Compass
    [0x9A] = ITEM_ROW(0x4D, 0x41, 0x64, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, JABU_ID   ), // Jabu Jabu Compass
    [0x9B] = ITEM_ROW(0x4D, 0x41, 0x65, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, FOREST_ID ), // Forest Temple Compass
    [0x9C] = ITEM_ROW(0x4D, 0x41, 0x7C, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, FIRE_ID   ), // Fire Temple Compass
    [0x9D] = ITEM_ROW(0x4D, 0x41, 0x7D, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, WATER_ID  ), // Water Temple Compass
    [0x9E] = ITEM_ROW(0x4D, 0x41, 0x7E, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, SPIRIT_ID ), // Spirit Temple Compass
    [0x9F] = ITEM_ROW(0x4D, 0x41, 0x7F, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, SHADOW_ID ), // Shadow Temple Compass
    [0xA0] = ITEM_ROW(0x4D, 0x41, 0xA2, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, BOTW_ID   ), // Bottom of the Well Compass
    [0xA1] = ITEM_ROW(0x4D, 0x41, 0x87, 0x00B8, 0xF5, no_upgrade, give_dungeon_item, 0x02, ICE_ID    ), // Ice Cavern Compass

    [0xA2] = ITEM_ROW(0x4D, 0x41, 0x88, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, DEKU_ID   ), // Deku Tree Map
    [0xA3] = ITEM_ROW(0x4D, 0x41, 0x89, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, DODONGO_ID), // Dodongo's Cavern Map
    [0xA4] = ITEM_ROW(0x4D, 0x41, 0x8A, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, JABU_ID   ), // Jabu Jabu Map
    [0xA5] = ITEM_ROW(0x4D, 0x41, 0x8B, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, FOREST_ID ), // Forest Temple Map
    [0xA6] = ITEM_ROW(0x4D, 0x41, 0x8C, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, FIRE_ID   ), // Fire Temple Map
    [0xA7] = ITEM_ROW(0x4D, 0x41, 0x8E, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, WATER_ID  ), // Water Temple Map
    [0xA8] = ITEM_ROW(0x4D, 0x41, 0x8F, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, SPIRIT_ID ), // Spirit Temple Map
    [0xA9] = ITEM_ROW(0x4D, 0x41, 0xA3, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, SHADOW_ID ), // Shadow Temple Map
    [0xAA] = ITEM_ROW(0x4D, 0x41, 0xA5, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, BOTW_ID   ), // Bottom of the Well Map
    [0xAB] = ITEM_ROW(0x4D, 0x41, 0x92, 0x00C8, 0xE4, no_upgrade, give_dungeon_item, 0x04, ICE_ID    ), // Ice Cavern Map

    [0xAC] = ITEM_ROW(0x53, 0x41, 0x93, 0x00AA, 0x02, no_upgrade, give_small_key, FOREST_ID, -1), // Forest Temple Small Key
    [0xAD] = ITEM_ROW(0x53, 0x41, 0x94, 0x00AA, 0x02, no_upgrade, give_small_key, FIRE_ID,   -1), // Fire Temple Small Key
    [0xAE] = ITEM_ROW(0x53, 0x41, 0x95, 0x00AA, 0x02, no_upgrade, give_small_key, WATER_ID,  -1), // Water Temple Small Key
    [0xAF] = ITEM_ROW(0x53, 0x41, 0xA6, 0x00AA, 0x02, no_upgrade, give_small_key, SPIRIT_ID, -1), // Spirit Temple Small Key
    [0xB0] = ITEM_ROW(0x53, 0x41, 0xA9, 0x00AA, 0x02, no_upgrade, give_small_key, SHADOW_ID, -1), // Shadow Temple Small Key
    [0xB1] = ITEM_ROW(0x53, 0x41, 0x9B, 0x00AA, 0x02, no_upgrade, give_small_key, BOTW_ID,   -1), // Bottom of the Well Small Key
    [0xB2] = ITEM_ROW(0x53, 0x41, 0x9F, 0x00AA, 0x02, no_upgrade, give_small_key, GTG_ID,    -1), // Gerudo Training Small Key
    [0xB3] = ITEM_ROW(0x53, 0x41, 0xA0, 0x00AA, 0x02, no_upgrade, give_small_key, FORT_ID,   -1), // Gerudo Fortress Small Key
    [0xB4] = ITEM_ROW(0x53, 0x41, 0xA1, 0x00AA, 0x02, no_upgrade, give_small_key, CASTLE_ID, -1), // Ganon's Castle Small Key

    [0xB5] = ITEM_ROW(0x53, 0x3D, 0x0C, 0x00F8, 0x43, no_upgrade, give_biggoron_sword, -1, -1), // Biggoron Sword

    [0xB6] = ITEM_ROW(0x4D, 0x83, 0x55, 0x00B7, 0xF7, no_upgrade,      no_effect, -1, -1), // Recovery Heart
    [0xB7] = ITEM_ROW(0x4D, 0x92, 0xE6, 0x00D8, 0xDB, arrows_to_rupee, no_effect, -1, -1), // Arrows (5),
    [0xB8] = ITEM_ROW(0x4D, 0x93, 0xE6, 0x00D8, 0xDA, arrows_to_rupee, no_effect, -1, -1), // Arrows (10),
    [0xB9] = ITEM_ROW(0x4D, 0x94, 0xE6, 0x00D8, 0xD9, arrows_to_rupee, no_effect, -1, -1), // Arrows (30),
    [0xBA] = ITEM_ROW(0x4D, 0x8E, 0x32, 0x00CE, 0xE0, bombs_to_rupee,  no_effect, -1, -1), // Bombs (5),
    [0xBB] = ITEM_ROW(0x4D, 0x8F, 0x32, 0x00CE, 0xE0, bombs_to_rupee,  no_effect, -1, -1), // Bombs (10),
    [0xBC] = ITEM_ROW(0x4D, 0x90, 0x32, 0x00CE, 0xE0, bombs_to_rupee,  no_effect, -1, -1), // Bombs (20),
    [0xBD] = ITEM_ROW(0x4D, 0x8C, 0x34, 0x00BB, 0xEE, no_upgrade,      no_effect, -1, -1), // Deku Nuts (5),
    [0xBE] = ITEM_ROW(0x4D, 0x8D, 0x34, 0x00BB, 0xEE, no_upgrade,      no_effect, -1, -1), // Deku Nuts (10),

    [0xBF] = ITEM_ROW(0x53, 0x41, 0xE9, 0x00BD, 0x13, no_upgrade, give_defense,      -1, -1), // Double Defense
    [0xC0] = ITEM_ROW(0x53, 0x41, 0xE4, 0x00CD, 0x1E, no_upgrade, give_magic,        -1, -1), // Magic Meter
    [0xC1] = ITEM_ROW(0x53, 0x41, 0xE8, 0x00CD, 0x1F, no_upgrade, give_double_magic, -1, -1), // Double Magic

    [0xC4] = ITEM_ROW(0x53, 0x41, 0xB0, 0x00B6, 0x03, no_upgrade, give_song, 6, -1 ), // Minuet of Forest
    [0xC5] = ITEM_ROW(0x53, 0x41, 0xB1, 0x00B6, 0x04, no_upgrade, give_song, 7, -1 ), // Bolero of Fire
    [0xC6] = ITEM_ROW(0x53, 0x41, 0xB2, 0x00B6, 0x05, no_upgrade, give_song, 8, -1 ), // Serenade of Water
    [0xC7] = ITEM_ROW(0x53, 0x41, 0xB3, 0x00B6, 0x06, no_upgrade, give_song, 9, -1 ), // Requiem of Spirit
    [0xC8] = ITEM_ROW(0x53, 0x41, 0xB6, 0x00B6, 0x07, no_upgrade, give_song, 10, -1), // Nocturn of Shadow
    [0xC9] = ITEM_ROW(0x53, 0x41, 0xB7, 0x00B6, 0x08, no_upgrade, give_song, 11, -1), // Prelude of Light

    [0xCA] = ITEM_ROW(0x53, 0x41, 0xB8, 0x00B6, 0x04, no_upgrade, give_song, 12, -1), // Zelda's Lullaby
    [0xCB] = ITEM_ROW(0x53, 0x41, 0xB9, 0x00B6, 0x06, no_upgrade, give_song, 13, -1), // Epona's Song
    [0xCC] = ITEM_ROW(0x53, 0x41, 0xBA, 0x00B6, 0x03, no_upgrade, give_song, 14, -1), // Saria's Song
    [0xCD] = ITEM_ROW(0x53, 0x41, 0xBB, 0x00B6, 0x08, no_upgrade, give_song, 15, -1), // Sun's Song
    [0xCE] = ITEM_ROW(0x53, 0x41, 0xBC, 0x00B6, 0x05, no_upgrade, give_song, 16, -1), // Song of Time
    [0xCF] = ITEM_ROW(0x53, 0x41, 0xBD, 0x00B6, 0x07, no_upgrade, give_song, 17, -1), // Song of Storms

    [0xD0] = ITEM_ROW(0x4D, 0x00, 0x37, 0x00C7, 0xE5, no_upgrade,     no_effect, -1, -1), // Deku Sticks (1),
    [0xD1] = ITEM_ROW(0x4D, 0x95, 0xDC, 0x0119, 0xB8, seeds_to_rupee, no_effect, -1, -1), // Deku Seeds (30),

    [0xD2] = ITEM_ROW(0x77, 0x3E, 0x4C, 0x00CB, 0xE3, no_upgrade, no_effect, -1, -1), // Deku Shield
    [0xD3] = ITEM_ROW(0x77, 0x3F, 0x4D, 0x00DC, 0xD4, no_upgrade, no_effect, -1, -1), // Hylian Shield

    [0x85] = ITEM_ROW(0x53, 0x41, 0x00D1, 0x23, 0xF8, wallet_upgrade, give_tycoon_wallet, -1, -1), // Tycoon's Wallet
};

item_row_t *get_item_row(uint16_t item_id) {
    if (item_id >= array_size(item_table)) {
        return NULL;
    }
    item_row_t *item_row = &(item_table[item_id]);
    if (item_row->base_item_id == 0) {
        return NULL;
    }
    return item_row;
}

uint16_t resolve_upgrades(uint16_t item_id) {
    for (;;) {
        item_row_t *item_row = get_item_row(item_id);
        uint16_t new_item_id = item_row->upgrade(&z64_file, item_id);
        if (new_item_id == item_id) {
            return item_id;
        }
        item_id = new_item_id;
    }
}

void call_effect_function(item_row_t *item_row) {
    item_row->effect(&z64_file, item_row->effect_arg1, item_row->effect_arg2);
}