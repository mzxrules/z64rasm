.n64
.relativeinclude on

.create "../roms/patched.z64", 0
.incbin "../roms/base.z64"

;==================================================================================================
; Base game editing region
;==================================================================================================

.include "hacks.asm"

;==================================================================================================
; New code region
;==================================================================================================

.headersize (0x80400000 - 0x03480000)

.org 0x80401000
.area 0x1000, 0
.include "config.asm"
.endarea

.org 0x80402000
.area 0x1000, 0
.include "constants.asm"
.include "state.asm"
.include "item_data.asm"
.include "items.asm"
.include "every_frame.asm"
.include "menu.asm"
.include "fixes.asm"
.endarea

.close
