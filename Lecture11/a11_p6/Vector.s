	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 1
	.globl	__ZN6VectorC2Ev                 ; -- Begin function _ZN6VectorC2Ev
	.p2align	2
__ZN6VectorC2Ev:                        ; @_ZN6VectorC2Ev
	.cfi_startproc
; %bb.0:
	stp	x20, x19, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	mov	x19, x0
	mov	w8, #2
	str	w8, [x0]
	mov	w0, #16
	bl	__Znam
	str	x0, [x19, #8]
	mov	x0, x19
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorC1Ev                 ; -- Begin function _ZN6VectorC1Ev
	.p2align	2
__ZN6VectorC1Ev:                        ; @_ZN6VectorC1Ev
	.cfi_startproc
; %bb.0:
	stp	x20, x19, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	mov	x19, x0
	mov	w8, #2
	str	w8, [x0]
	mov	w0, #16
	bl	__Znam
	str	x0, [x19, #8]
	mov	x0, x19
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorC2EiPd               ; -- Begin function _ZN6VectorC2EiPd
	.p2align	2
__ZN6VectorC2EiPd:                      ; @_ZN6VectorC2EiPd
	.cfi_startproc
; %bb.0:
	str	w1, [x0]
	str	x2, [x0, #8]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorC1EiPd               ; -- Begin function _ZN6VectorC1EiPd
	.p2align	2
__ZN6VectorC1EiPd:                      ; @_ZN6VectorC1EiPd
	.cfi_startproc
; %bb.0:
	str	w1, [x0]
	str	x2, [x0, #8]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorC2ERKS_              ; -- Begin function _ZN6VectorC2ERKS_
	.p2align	2
__ZN6VectorC2ERKS_:                     ; @_ZN6VectorC2ERKS_
	.cfi_startproc
; %bb.0:
	stp	x22, x21, [sp, #-48]!           ; 16-byte Folded Spill
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	mov	x20, x1
	mov	x19, x0
	ldrsw	x21, [x1]
	str	w21, [x0]
	lsl	x8, x21, #3
	cmp	xzr, x21, lsr #61
	csinv	x0, x8, xzr, eq
	bl	__Znam
	str	x0, [x19, #8]
	cmp	w21, #1                         ; =1
	b.lt	LBB4_9
; %bb.1:
	and	x8, x21, #0xffffffff
	ldr	x9, [x20, #8]
	cmp	w8, #8                          ; =8
	b.lo	LBB4_6
; %bb.2:
	lsl	x10, x8, #3
	add	x11, x0, x10
	add	x10, x9, x10
	cmp	x0, x10
	ccmp	x11, x9, #0, lo
	b.hi	LBB4_6
; %bb.3:
	and	x10, x8, #0xfffffff8
	add	x11, x0, #32                    ; =32
	add	x12, x9, #32                    ; =32
	mov	x13, x10
LBB4_4:                                 ; =>This Inner Loop Header: Depth=1
	ldp	q0, q1, [x12, #-32]
	ldp	q2, q3, [x12], #64
	stp	q0, q1, [x11, #-32]
	stp	q2, q3, [x11], #64
	subs	x13, x13, #8                    ; =8
	b.ne	LBB4_4
; %bb.5:
	cmp	x10, x8
	b.ne	LBB4_7
	b	LBB4_9
LBB4_6:
	mov	x10, #0
LBB4_7:
	lsl	x12, x10, #3
	add	x11, x0, x12
	add	x9, x9, x12
	sub	x8, x8, x10
LBB4_8:                                 ; =>This Inner Loop Header: Depth=1
	ldr	d0, [x9], #8
	str	d0, [x11], #8
	subs	x8, x8, #1                      ; =1
	b.ne	LBB4_8
LBB4_9:
	mov	x0, x19
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp], #48             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorC1ERKS_              ; -- Begin function _ZN6VectorC1ERKS_
	.p2align	2
__ZN6VectorC1ERKS_:                     ; @_ZN6VectorC1ERKS_
	.cfi_startproc
; %bb.0:
	stp	x22, x21, [sp, #-48]!           ; 16-byte Folded Spill
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	mov	x20, x1
	mov	x19, x0
	ldrsw	x21, [x1]
	str	w21, [x0]
	lsl	x8, x21, #3
	cmp	xzr, x21, lsr #61
	csinv	x0, x8, xzr, eq
	bl	__Znam
	str	x0, [x19, #8]
	cmp	w21, #1                         ; =1
	b.lt	LBB5_9
; %bb.1:
	and	x9, x21, #0xffffffff
	ldr	x8, [x20, #8]
	cmp	w9, #8                          ; =8
	b.lo	LBB5_6
; %bb.2:
	lsl	x10, x9, #3
	add	x11, x0, x10
	add	x10, x8, x10
	cmp	x0, x10
	ccmp	x11, x8, #0, lo
	b.hi	LBB5_6
; %bb.3:
	and	x10, x9, #0xfffffff8
	add	x11, x0, #32                    ; =32
	add	x12, x8, #32                    ; =32
	mov	x13, x10
LBB5_4:                                 ; =>This Inner Loop Header: Depth=1
	ldp	q0, q1, [x12, #-32]
	ldp	q2, q3, [x12], #64
	stp	q0, q1, [x11, #-32]
	stp	q2, q3, [x11], #64
	subs	x13, x13, #8                    ; =8
	b.ne	LBB5_4
; %bb.5:
	cmp	x10, x9
	b.ne	LBB5_7
	b	LBB5_9
LBB5_6:
	mov	x10, #0
LBB5_7:
	sub	x9, x9, x10
	lsl	x11, x10, #3
	add	x10, x0, x11
	add	x8, x8, x11
LBB5_8:                                 ; =>This Inner Loop Header: Depth=1
	ldr	d0, [x8], #8
	str	d0, [x10], #8
	subs	x9, x9, #1                      ; =1
	b.ne	LBB5_8
LBB5_9:
	mov	x0, x19
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp], #48             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorD2Ev                 ; -- Begin function _ZN6VectorD2Ev
	.p2align	2
__ZN6VectorD2Ev:                        ; @_ZN6VectorD2Ev
	.cfi_startproc
; %bb.0:
	stp	x20, x19, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	mov	x19, x0
	ldr	x0, [x0, #8]
	cbz	x0, LBB6_2
; %bb.1:
	bl	__ZdaPv
LBB6_2:
	mov	x0, x19
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6VectorD1Ev                 ; -- Begin function _ZN6VectorD1Ev
	.p2align	2
__ZN6VectorD1Ev:                        ; @_ZN6VectorD1Ev
	.cfi_startproc
; %bb.0:
	stp	x20, x19, [sp, #-32]!           ; 16-byte Folded Spill
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	mov	x19, x0
	ldr	x0, [x0, #8]
	cbz	x0, LBB7_2
; %bb.1:
	bl	__ZdaPv
LBB7_2:
	mov	x0, x19
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp], #32             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNK6Vector13getComponentsEv   ; -- Begin function _ZNK6Vector13getComponentsEv
	.p2align	2
__ZNK6Vector13getComponentsEv:          ; @_ZNK6Vector13getComponentsEv
	.cfi_startproc
; %bb.0:
	ldr	x0, [x0, #8]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNK6Vector7getSizeEv          ; -- Begin function _ZNK6Vector7getSizeEv
	.p2align	2
__ZNK6Vector7getSizeEv:                 ; @_ZNK6Vector7getSizeEv
	.cfi_startproc
; %bb.0:
	ldr	w0, [x0]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6Vector13setComponentsEPd   ; -- Begin function _ZN6Vector13setComponentsEPd
	.p2align	2
__ZN6Vector13setComponentsEPd:          ; @_ZN6Vector13setComponentsEPd
	.cfi_startproc
; %bb.0:
	str	x1, [x0, #8]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6Vector7setSizeEi           ; -- Begin function _ZN6Vector7setSizeEi
	.p2align	2
__ZN6Vector7setSizeEi:                  ; @_ZN6Vector7setSizeEi
	.cfi_startproc
; %bb.0:
	str	w1, [x0]
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZN6Vector4normEv              ; -- Begin function _ZN6Vector4normEv
	.p2align	2
__ZN6Vector4normEv:                     ; @_ZN6Vector4normEv
	.cfi_startproc
; %bb.0:
	ldr	w8, [x0]
	cmp	w8, #1                          ; =1
	b.lt	LBB12_4
; %bb.1:
	ldr	x9, [x0, #8]
	movi.2d	v0, #0000000000000000
LBB12_2:                                ; =>This Inner Loop Header: Depth=1
	ldr	d1, [x9], #8
	fmul	d1, d1, d1
	fadd	d0, d0, d1
	subs	x8, x8, #1                      ; =1
	b.ne	LBB12_2
; %bb.3:
	fsqrt	d0, d0
	ret
LBB12_4:
	movi.2d	v0, #0000000000000000
	fsqrt	d0, d0
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__ZNK6Vector3addES_             ; -- Begin function _ZNK6Vector3addES_
	.p2align	2
__ZNK6Vector3addES_:                    ; @_ZNK6Vector3addES_
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
; %bb.0:
	stp	x24, x23, [sp, #-64]!           ; 16-byte Folded Spill
	stp	x22, x21, [sp, #16]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #32]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	mov	x19, x1
	mov	x20, x0
	mov	x21, x8
	mov	w8, #2
	str	w8, [x21]
	mov	w0, #16
	bl	__Znam
	mov	x22, x0
	str	x0, [x21, #8]
	ldrsw	x23, [x20]
	str	w23, [x21]
	lsl	x8, x23, #3
	cmp	xzr, x23, lsr #61
	csinv	x0, x8, xzr, eq
Ltmp0:
	bl	__Znam
Ltmp1:
; %bb.1:
	and	x8, x23, #0xffffffff
	str	x0, [x21, #8]
	cmp	w8, #1                          ; =1
	b.lt	LBB13_11
; %bb.2:
	ldr	x9, [x20, #8]
	ldr	x10, [x19, #8]
	cmp	w8, #8                          ; =8
	b.hs	LBB13_4
; %bb.3:
	mov	x11, #0
	b	LBB13_9
LBB13_4:
	mov	x11, #0
	lsl	x12, x8, #3
	add	x13, x9, x12
	cmp	x0, x13
	cset	w13, lo
	add	x14, x0, x12
	cmp	x14, x9
	cset	w15, hi
	and	w15, w13, w15
	add	x12, x10, x12
	cmp	x0, x12
	cset	w12, lo
	cmp	x14, x10
	cset	w13, hi
	tbnz	w15, #0, LBB13_9
; %bb.5:
	and	w12, w12, w13
	tbnz	w12, #0, LBB13_9
; %bb.6:
	and	x11, x8, #0xfffffff8
	add	x12, x0, #32                    ; =32
	add	x13, x9, #32                    ; =32
	add	x14, x10, #32                   ; =32
	mov	x15, x11
LBB13_7:                                ; =>This Inner Loop Header: Depth=1
	ldp	q0, q1, [x13, #-32]
	ldp	q2, q3, [x13], #64
	ldp	q4, q5, [x14, #-32]
	ldp	q6, q7, [x14], #64
	fadd.2d	v0, v0, v4
	fadd.2d	v1, v1, v5
	fadd.2d	v2, v2, v6
	fadd.2d	v3, v3, v7
	stp	q0, q1, [x12, #-32]
	stp	q2, q3, [x12], #64
	subs	x15, x15, #8                    ; =8
	b.ne	LBB13_7
; %bb.8:
	cmp	x11, x8
	b.eq	LBB13_11
LBB13_9:
	lsl	x13, x11, #3
	add	x12, x0, x13
	add	x10, x10, x13
	add	x9, x9, x13
	sub	x8, x8, x11
LBB13_10:                               ; =>This Inner Loop Header: Depth=1
	ldr	d0, [x9], #8
	ldr	d1, [x10], #8
	fadd	d0, d0, d1
	str	d0, [x12], #8
	subs	x8, x8, #1                      ; =1
	b.ne	LBB13_10
LBB13_11:
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #32]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #16]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp], #64             ; 16-byte Folded Reload
	ret
LBB13_12:
Ltmp2:
	mov	x19, x0
	mov	x0, x22
	bl	__ZdaPv
	mov	x0, x19
	bl	__Unwind_Resume
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table13:
Lexception0:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end0-Lcst_begin0
Lcst_begin0:
	.uleb128 Lfunc_begin0-Lfunc_begin0      ; >> Call Site 1 <<
	.uleb128 Ltmp0-Lfunc_begin0             ;   Call between Lfunc_begin0 and Ltmp0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp0-Lfunc_begin0             ; >> Call Site 2 <<
	.uleb128 Ltmp1-Ltmp0                    ;   Call between Ltmp0 and Ltmp1
	.uleb128 Ltmp2-Lfunc_begin0             ;     jumps to Ltmp2
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp1-Lfunc_begin0             ; >> Call Site 3 <<
	.uleb128 Lfunc_end0-Ltmp1               ;   Call between Ltmp1 and Lfunc_end0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end0:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNK6Vector10differenceES_     ; -- Begin function _ZNK6Vector10differenceES_
	.p2align	2
__ZNK6Vector10differenceES_:            ; @_ZNK6Vector10differenceES_
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
; %bb.0:
	stp	x24, x23, [sp, #-64]!           ; 16-byte Folded Spill
	stp	x22, x21, [sp, #16]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #32]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	mov	x19, x1
	mov	x20, x0
	mov	x21, x8
	mov	w8, #2
	str	w8, [x21]
	mov	w0, #16
	bl	__Znam
	mov	x22, x0
	str	x0, [x21, #8]
	ldrsw	x23, [x20]
	str	w23, [x21]
	lsl	x8, x23, #3
	cmp	xzr, x23, lsr #61
	csinv	x0, x8, xzr, eq
Ltmp3:
	bl	__Znam
Ltmp4:
; %bb.1:
	and	x8, x23, #0xffffffff
	str	x0, [x21, #8]
	cmp	w8, #1                          ; =1
	b.lt	LBB14_11
; %bb.2:
	ldr	x9, [x20, #8]
	ldr	x10, [x19, #8]
	cmp	w8, #8                          ; =8
	b.hs	LBB14_4
; %bb.3:
	mov	x11, #0
	b	LBB14_9
LBB14_4:
	mov	x11, #0
	lsl	x12, x8, #3
	add	x13, x9, x12
	cmp	x0, x13
	cset	w13, lo
	add	x14, x0, x12
	cmp	x14, x9
	cset	w15, hi
	and	w15, w13, w15
	add	x12, x10, x12
	cmp	x0, x12
	cset	w12, lo
	cmp	x14, x10
	cset	w13, hi
	tbnz	w15, #0, LBB14_9
; %bb.5:
	and	w12, w12, w13
	tbnz	w12, #0, LBB14_9
; %bb.6:
	and	x11, x8, #0xfffffff8
	add	x12, x0, #32                    ; =32
	add	x13, x9, #32                    ; =32
	add	x14, x10, #32                   ; =32
	mov	x15, x11
LBB14_7:                                ; =>This Inner Loop Header: Depth=1
	ldp	q0, q1, [x13, #-32]
	ldp	q2, q3, [x13], #64
	ldp	q4, q5, [x14, #-32]
	ldp	q6, q7, [x14], #64
	fsub.2d	v0, v0, v4
	fsub.2d	v1, v1, v5
	fsub.2d	v2, v2, v6
	fsub.2d	v3, v3, v7
	stp	q0, q1, [x12, #-32]
	stp	q2, q3, [x12], #64
	subs	x15, x15, #8                    ; =8
	b.ne	LBB14_7
; %bb.8:
	cmp	x11, x8
	b.eq	LBB14_11
LBB14_9:
	lsl	x13, x11, #3
	add	x12, x0, x13
	add	x10, x10, x13
	add	x9, x9, x13
	sub	x8, x8, x11
LBB14_10:                               ; =>This Inner Loop Header: Depth=1
	ldr	d0, [x9], #8
	ldr	d1, [x10], #8
	fsub	d0, d0, d1
	str	d0, [x12], #8
	subs	x8, x8, #1                      ; =1
	b.ne	LBB14_10
LBB14_11:
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #32]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #16]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp], #64             ; 16-byte Folded Reload
	ret
LBB14_12:
Ltmp5:
	mov	x19, x0
	mov	x0, x22
	bl	__ZdaPv
	mov	x0, x19
	bl	__Unwind_Resume
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table14:
Lexception1:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Lfunc_begin1-Lfunc_begin1      ; >> Call Site 1 <<
	.uleb128 Ltmp3-Lfunc_begin1             ;   Call between Lfunc_begin1 and Ltmp3
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp3-Lfunc_begin1             ; >> Call Site 2 <<
	.uleb128 Ltmp4-Ltmp3                    ;   Call between Ltmp3 and Ltmp4
	.uleb128 Ltmp5-Lfunc_begin1             ;     jumps to Ltmp5
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp4-Lfunc_begin1             ; >> Call Site 3 <<
	.uleb128 Lfunc_end1-Ltmp4               ;   Call between Ltmp4 and Lfunc_end1
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end1:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNK6Vector14scalarMultiplyES_ ; -- Begin function _ZNK6Vector14scalarMultiplyES_
	.p2align	2
__ZNK6Vector14scalarMultiplyES_:        ; @_ZNK6Vector14scalarMultiplyES_
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
; %bb.0:
	stp	x24, x23, [sp, #-64]!           ; 16-byte Folded Spill
	stp	x22, x21, [sp, #16]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #32]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	mov	x19, x1
	mov	x20, x0
	mov	x21, x8
	mov	w8, #2
	str	w8, [x21]
	mov	w0, #16
	bl	__Znam
	mov	x22, x0
	str	x0, [x21, #8]
	ldrsw	x23, [x20]
	str	w23, [x21]
	lsl	x8, x23, #3
	cmp	xzr, x23, lsr #61
	csinv	x0, x8, xzr, eq
Ltmp6:
	bl	__Znam
Ltmp7:
; %bb.1:
	and	x8, x23, #0xffffffff
	str	x0, [x21, #8]
	cmp	w8, #1                          ; =1
	b.lt	LBB15_11
; %bb.2:
	ldr	x9, [x20, #8]
	ldr	x10, [x19, #8]
	cmp	w8, #8                          ; =8
	b.hs	LBB15_4
; %bb.3:
	mov	x11, #0
	b	LBB15_9
LBB15_4:
	mov	x11, #0
	lsl	x12, x8, #3
	add	x13, x9, x12
	cmp	x0, x13
	cset	w13, lo
	add	x14, x0, x12
	cmp	x14, x9
	cset	w15, hi
	and	w15, w13, w15
	add	x12, x10, x12
	cmp	x0, x12
	cset	w12, lo
	cmp	x14, x10
	cset	w13, hi
	tbnz	w15, #0, LBB15_9
; %bb.5:
	and	w12, w12, w13
	tbnz	w12, #0, LBB15_9
; %bb.6:
	and	x11, x8, #0xfffffff8
	add	x12, x0, #32                    ; =32
	add	x13, x9, #32                    ; =32
	add	x14, x10, #32                   ; =32
	mov	x15, x11
LBB15_7:                                ; =>This Inner Loop Header: Depth=1
	ldp	q0, q1, [x13, #-32]
	ldp	q2, q3, [x13], #64
	ldp	q4, q5, [x14, #-32]
	ldp	q6, q7, [x14], #64
	fmul.2d	v0, v0, v4
	fmul.2d	v1, v1, v5
	fmul.2d	v2, v2, v6
	fmul.2d	v3, v3, v7
	stp	q0, q1, [x12, #-32]
	stp	q2, q3, [x12], #64
	subs	x15, x15, #8                    ; =8
	b.ne	LBB15_7
; %bb.8:
	cmp	x11, x8
	b.eq	LBB15_11
LBB15_9:
	lsl	x13, x11, #3
	add	x12, x0, x13
	add	x10, x10, x13
	add	x9, x9, x13
	sub	x8, x8, x11
LBB15_10:                               ; =>This Inner Loop Header: Depth=1
	ldr	d0, [x9], #8
	ldr	d1, [x10], #8
	fmul	d0, d0, d1
	str	d0, [x12], #8
	subs	x8, x8, #1                      ; =1
	b.ne	LBB15_10
LBB15_11:
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #32]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #16]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp], #64             ; 16-byte Folded Reload
	ret
LBB15_12:
Ltmp8:
	mov	x19, x0
	mov	x0, x22
	bl	__ZdaPv
	mov	x0, x19
	bl	__Unwind_Resume
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table15:
Lexception2:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Lfunc_begin2-Lfunc_begin2      ; >> Call Site 1 <<
	.uleb128 Ltmp6-Lfunc_begin2             ;   Call between Lfunc_begin2 and Ltmp6
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp6-Lfunc_begin2             ; >> Call Site 2 <<
	.uleb128 Ltmp7-Ltmp6                    ;   Call between Ltmp6 and Ltmp7
	.uleb128 Ltmp8-Lfunc_begin2             ;     jumps to Ltmp8
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp7-Lfunc_begin2             ; >> Call Site 3 <<
	.uleb128 Lfunc_end2-Ltmp7               ;   Call between Ltmp7 and Lfunc_end2
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end2:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZN6Vector11printVectorEv      ; -- Begin function _ZN6Vector11printVectorEv
	.p2align	2
__ZN6Vector11printVectorEv:             ; @_ZN6Vector11printVectorEv
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x22, x21, [sp, #16]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #32]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	ldr	w8, [x0]
	cmp	w8, #1                          ; =1
	b.lt	LBB16_3
; %bb.1:
	mov	x19, x0
	mov	x22, #0
Lloh0:
	adrp	x20, __ZNSt3__14coutE@GOTPAGE
Lloh1:
	ldr	x20, [x20, __ZNSt3__14coutE@GOTPAGEOFF]
Lloh2:
	adrp	x21, l_.str@PAGE
Lloh3:
	add	x21, x21, l_.str@PAGEOFF
LBB16_2:                                ; =>This Inner Loop Header: Depth=1
	ldr	x8, [x19, #8]
	ldr	d0, [x8, x22, lsl #3]
	mov	x0, x20
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
	mov	x1, x21
	mov	w2, #1
	bl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	add	x22, x22, #1                    ; =1
	ldrsw	x8, [x19]
	cmp	x22, x8
	b.lt	LBB16_2
LBB16_3:
Lloh4:
	adrp	x8, __ZNSt3__14coutE@GOTPAGE
Lloh5:
	ldr	x8, [x8, __ZNSt3__14coutE@GOTPAGEOFF]
	ldr	x9, [x8]
	ldur	x9, [x9, #-24]
	add	x0, x8, x9
	add	x8, sp, #8                      ; =8
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp9:
Lloh6:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh7:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #8                      ; =8
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp10:
; %bb.4:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp11:
	mov	w1, #10
	blr	x8
Ltmp12:
; %bb.5:
	mov	x19, x0
	add	x0, sp, #8                      ; =8
	bl	__ZNSt3__16localeD1Ev
Lloh8:
	adrp	x20, __ZNSt3__14coutE@GOTPAGE
Lloh9:
	ldr	x20, [x20, __ZNSt3__14coutE@GOTPAGEOFF]
	mov	x0, x20
	mov	x1, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
	mov	x0, x20
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #32]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
LBB16_6:
Ltmp13:
	mov	x19, x0
	add	x0, sp, #8                      ; =8
	bl	__ZNSt3__16localeD1Ev
	mov	x0, x19
	bl	__Unwind_Resume
	.loh AdrpAdd	Lloh2, Lloh3
	.loh AdrpLdrGot	Lloh0, Lloh1
	.loh AdrpLdrGot	Lloh6, Lloh7
	.loh AdrpLdrGot	Lloh4, Lloh5
	.loh AdrpLdrGot	Lloh8, Lloh9
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table16:
Lexception3:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end3-Lcst_begin3
Lcst_begin3:
	.uleb128 Lfunc_begin3-Lfunc_begin3      ; >> Call Site 1 <<
	.uleb128 Ltmp9-Lfunc_begin3             ;   Call between Lfunc_begin3 and Ltmp9
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp9-Lfunc_begin3             ; >> Call Site 2 <<
	.uleb128 Ltmp12-Ltmp9                   ;   Call between Ltmp9 and Ltmp12
	.uleb128 Ltmp13-Lfunc_begin3            ;     jumps to Ltmp13
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp12-Lfunc_begin3            ; >> Call Site 3 <<
	.uleb128 Lfunc_end3-Ltmp12              ;   Call between Ltmp12 and Lfunc_end3
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end3:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ; -- Begin function _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_def_can_be_hidden	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	2
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ; @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin4:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception4
; %bb.0:
	sub	sp, sp, #112                    ; =112
	stp	x26, x25, [sp, #32]             ; 16-byte Folded Spill
	stp	x24, x23, [sp, #48]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #64]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #80]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96                    ; =96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	mov	x21, x2
	mov	x20, x1
	mov	x19, x0
Ltmp14:
	add	x0, sp, #8                      ; =8
	mov	x1, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp15:
; %bb.1:
	ldrb	w8, [sp, #8]
	cbz	w8, LBB17_10
; %bb.2:
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x22, x19, x8
	ldr	x23, [x22, #40]
	ldr	w25, [x22, #8]
	ldr	w24, [x22, #144]
	cmn	w24, #1                         ; =1
	b.ne	LBB17_7
; %bb.3:
Ltmp17:
	add	x8, sp, #24                     ; =24
	mov	x0, x22
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp18:
; %bb.4:
Ltmp19:
Lloh10:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh11:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #24                     ; =24
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp20:
; %bb.5:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp21:
	mov	w1, #32
	blr	x8
Ltmp22:
; %bb.6:
	mov	x24, x0
	add	x0, sp, #24                     ; =24
	bl	__ZNSt3__16localeD1Ev
	str	w24, [x22, #144]
LBB17_7:
	add	x3, x20, x21
	mov	w8, #176
	and	w8, w25, w8
	cmp	w8, #32                         ; =32
	csel	x2, x3, x20, eq
Ltmp24:
	sxtb	w5, w24
	mov	x0, x23
	mov	x1, x20
	mov	x4, x22
	bl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp25:
; %bb.8:
	cbnz	x0, LBB17_10
; %bb.9:
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x0, x19, x8
	ldr	w8, [x0, #32]
	mov	w9, #5
	orr	w1, w8, w9
Ltmp27:
	bl	__ZNSt3__18ios_base5clearEj
Ltmp28:
LBB17_10:
	add	x0, sp, #8                      ; =8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
LBB17_11:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #112                    ; =112
	ret
LBB17_12:
Ltmp29:
	b	LBB17_15
LBB17_13:
Ltmp23:
	mov	x20, x0
	add	x0, sp, #24                     ; =24
	bl	__ZNSt3__16localeD1Ev
	b	LBB17_16
LBB17_14:
Ltmp26:
LBB17_15:
	mov	x20, x0
LBB17_16:
	add	x0, sp, #8                      ; =8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
	b	LBB17_18
LBB17_17:
Ltmp16:
	mov	x20, x0
LBB17_18:
	mov	x0, x20
	bl	___cxa_begin_catch
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x0, x19, x8
Ltmp30:
	bl	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp31:
; %bb.19:
	bl	___cxa_end_catch
	b	LBB17_11
LBB17_20:
Ltmp32:
	mov	x19, x0
Ltmp33:
	bl	___cxa_end_catch
Ltmp34:
; %bb.21:
	mov	x0, x19
	bl	__Unwind_Resume
LBB17_22:
Ltmp35:
	bl	___clang_call_terminate
	.loh AdrpLdrGot	Lloh10, Lloh11
Lfunc_end4:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table17:
Lexception4:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end4-Lcst_begin4
Lcst_begin4:
	.uleb128 Ltmp14-Lfunc_begin4            ; >> Call Site 1 <<
	.uleb128 Ltmp15-Ltmp14                  ;   Call between Ltmp14 and Ltmp15
	.uleb128 Ltmp16-Lfunc_begin4            ;     jumps to Ltmp16
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp17-Lfunc_begin4            ; >> Call Site 2 <<
	.uleb128 Ltmp18-Ltmp17                  ;   Call between Ltmp17 and Ltmp18
	.uleb128 Ltmp26-Lfunc_begin4            ;     jumps to Ltmp26
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp19-Lfunc_begin4            ; >> Call Site 3 <<
	.uleb128 Ltmp22-Ltmp19                  ;   Call between Ltmp19 and Ltmp22
	.uleb128 Ltmp23-Lfunc_begin4            ;     jumps to Ltmp23
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp24-Lfunc_begin4            ; >> Call Site 4 <<
	.uleb128 Ltmp25-Ltmp24                  ;   Call between Ltmp24 and Ltmp25
	.uleb128 Ltmp26-Lfunc_begin4            ;     jumps to Ltmp26
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp27-Lfunc_begin4            ; >> Call Site 5 <<
	.uleb128 Ltmp28-Ltmp27                  ;   Call between Ltmp27 and Ltmp28
	.uleb128 Ltmp29-Lfunc_begin4            ;     jumps to Ltmp29
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp28-Lfunc_begin4            ; >> Call Site 6 <<
	.uleb128 Ltmp30-Ltmp28                  ;   Call between Ltmp28 and Ltmp30
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp30-Lfunc_begin4            ; >> Call Site 7 <<
	.uleb128 Ltmp31-Ltmp30                  ;   Call between Ltmp30 and Ltmp31
	.uleb128 Ltmp32-Lfunc_begin4            ;     jumps to Ltmp32
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp31-Lfunc_begin4            ; >> Call Site 8 <<
	.uleb128 Ltmp33-Ltmp31                  ;   Call between Ltmp31 and Ltmp33
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp33-Lfunc_begin4            ; >> Call Site 9 <<
	.uleb128 Ltmp34-Ltmp33                  ;   Call between Ltmp33 and Ltmp34
	.uleb128 Ltmp35-Lfunc_begin4            ;     jumps to Ltmp35
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp34-Lfunc_begin4            ; >> Call Site 10 <<
	.uleb128 Lfunc_end4-Ltmp34              ;   Call between Ltmp34 and Lfunc_end4
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end4:
	.byte	1                               ; >> Action Record 1 <<
                                        ;   Catch TypeInfo 1
	.byte	0                               ;   No further actions
	.p2align	2
                                        ; >> Catch TypeInfos <<
	.long	0                               ; TypeInfo 1
Lttbase0:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_ ; -- Begin function _ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_def_can_be_hidden	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	2
__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ; @_ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin5:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception5
; %bb.0:
	sub	sp, sp, #112                    ; =112
	stp	x26, x25, [sp, #32]             ; 16-byte Folded Spill
	stp	x24, x23, [sp, #48]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #64]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #80]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #96]             ; 16-byte Folded Spill
	add	x29, sp, #96                    ; =96
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
	mov	x19, x0
	cbz	x0, LBB18_15
; %bb.1:
	mov	x24, x5
	mov	x20, x4
	mov	x22, x3
	mov	x21, x2
	ldr	x8, [x4, #24]
	sub	x9, x3, x1
	subs	x8, x8, x9
	csel	x23, x8, xzr, gt
	sub	x25, x2, x1
	cmp	x25, #1                         ; =1
	b.lt	LBB18_3
; %bb.2:
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
	mov	x0, x19
	mov	x2, x25
	blr	x8
	cmp	x0, x25
	b.ne	LBB18_14
LBB18_3:
	cmp	x23, #1                         ; =1
	b.lt	LBB18_11
; %bb.4:
	cmp	x23, #23                        ; =23
	b.hs	LBB18_6
; %bb.5:
	add	x26, sp, #8                     ; =8
	strb	w23, [sp, #31]
	add	x25, sp, #8                     ; =8
	b	LBB18_7
LBB18_6:
	add	x8, x23, #16                    ; =16
	and	x26, x8, #0xfffffffffffffff0
	mov	x0, x26
	bl	__Znwm
	mov	x25, x0
	orr	x8, x26, #0x8000000000000000
	stp	x23, x8, [sp, #16]
	str	x0, [sp, #8]
	add	x26, sp, #8                     ; =8
LBB18_7:
	mov	x0, x25
	mov	x1, x24
	mov	x2, x23
	bl	_memset
	strb	wzr, [x25, x23]
	ldrsb	w8, [x26, #23]
	ldr	x9, [sp, #8]
	cmp	w8, #0                          ; =0
	add	x8, sp, #8                      ; =8
	csel	x1, x9, x8, lt
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
Ltmp36:
	mov	x0, x19
	mov	x2, x23
	blr	x8
Ltmp37:
; %bb.8:
	mov	x24, x0
	ldrsb	w8, [x26, #23]
	tbnz	w8, #31, LBB18_10
; %bb.9:
	cmp	x24, x23
	b.ne	LBB18_14
	b	LBB18_11
LBB18_10:
	ldr	x0, [sp, #8]
	bl	__ZdlPv
	cmp	x24, x23
	b.ne	LBB18_14
LBB18_11:
	sub	x22, x22, x21
	cmp	x22, #1                         ; =1
	b.lt	LBB18_13
; %bb.12:
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
	mov	x0, x19
	mov	x1, x21
	mov	x2, x22
	blr	x8
	cmp	x0, x22
	b.ne	LBB18_14
LBB18_13:
	str	xzr, [x20, #24]
	b	LBB18_15
LBB18_14:
	mov	x19, #0
LBB18_15:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #112                    ; =112
	ret
LBB18_16:
Ltmp38:
	mov	x19, x0
	ldrsb	w8, [x26, #23]
	tbz	w8, #31, LBB18_18
; %bb.17:
	ldr	x0, [sp, #8]
	bl	__ZdlPv
LBB18_18:
	mov	x0, x19
	bl	__Unwind_Resume
Lfunc_end5:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table18:
Lexception5:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end5-Lcst_begin5
Lcst_begin5:
	.uleb128 Lfunc_begin5-Lfunc_begin5      ; >> Call Site 1 <<
	.uleb128 Ltmp36-Lfunc_begin5            ;   Call between Lfunc_begin5 and Ltmp36
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp36-Lfunc_begin5            ; >> Call Site 2 <<
	.uleb128 Ltmp37-Ltmp36                  ;   Call between Ltmp36 and Ltmp37
	.uleb128 Ltmp38-Lfunc_begin5            ;     jumps to Ltmp38
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp37-Lfunc_begin5            ; >> Call Site 3 <<
	.uleb128 Lfunc_end5-Ltmp37              ;   Call between Ltmp37 and Lfunc_end5
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end5:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	___clang_call_terminate ; -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_def_can_be_hidden	___clang_call_terminate
	.p2align	2
___clang_call_terminate:                ; @__clang_call_terminate
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	bl	___cxa_begin_catch
	bl	__ZSt9terminatev
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	" "

.subsections_via_symbols
