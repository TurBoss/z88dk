
        SECTION code_fp_dai32

        PUBLIC  l_f32_le
        EXTERN  l_f32_yes
        EXTERN  l_f32_no
        EXTERN  ___dai32_setup_comparison

; Stack <= registers
l_f32_le:
        call    ___dai32_setup_comparison
;       Flags:  cy=1,S=0,Z=1 -> both numbers 0
;               cy=0,S=0,Z=1 -> both numbers identical
;               cy=0,S=0,Z=0 -> MACC > (hl)  (jp P,)
;               cy=0,S=1,Z=0 -> MACC < (hl)  (jp M,)
        jp      z, l_f32_yes
        jp      m, l_f32_yes
        jp      l_f32_no
