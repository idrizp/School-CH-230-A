	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 1
	.section	__TEXT,__literal16,16byte_literals
	.p2align	4                               ; -- Begin function main
lCPI0_0:
	.quad	0x3ff0000000000000              ; double 1
	.quad	0x4000000000000000              ; double 2
lCPI0_1:
	.quad	0x4008000000000000              ; double 3
	.quad	0x4010000000000000              ; double 4
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	2
_main:                                  ; @main
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
; %bb.0:
	sub	sp, sp, #176                    ; =176
	stp	x20, x19, [sp, #144]            ; 16-byte Folded Spill
	stp	x29, x30, [sp, #160]            ; 16-byte Folded Spill
	add	x29, sp, #160                   ; =160
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	sub	x0, x29, #40                    ; =40
	bl	__ZN6VectorC1Ev
Ltmp0:
	mov	w0, #16
	bl	__Znam
Ltmp1:
; %bb.1:
	mov	x2, x0
Lloh0:
	adrp	x8, lCPI0_0@PAGE
Lloh1:
	ldr	q0, [x8, lCPI0_0@PAGEOFF]
	str	q0, [x0]
Ltmp2:
	sub	x0, x29, #56                    ; =56
	mov	w1, #2
	bl	__ZN6VectorC1EiPd
Ltmp3:
; %bb.2:
Ltmp5:
	sub	x0, x29, #72                    ; =72
	sub	x1, x29, #56                    ; =56
	bl	__ZN6VectorC1ERKS_
Ltmp6:
; %bb.3:
Ltmp8:
	mov	w0, #16
	bl	__Znam
Ltmp9:
; %bb.4:
	mov	x2, x0
Lloh2:
	adrp	x8, lCPI0_1@PAGE
Lloh3:
	ldr	q0, [x8, lCPI0_1@PAGEOFF]
	str	q0, [x0]
Ltmp10:
	add	x0, sp, #72                     ; =72
	mov	w1, #2
	bl	__ZN6VectorC1EiPd
Ltmp11:
; %bb.5:
Ltmp13:
Lloh4:
	adrp	x0, __ZNSt3__14coutE@GOTPAGE
Lloh5:
	ldr	x0, [x0, __ZNSt3__14coutE@GOTPAGEOFF]
Lloh6:
	adrp	x1, l_.str@PAGE
Lloh7:
	add	x1, x1, l_.str@PAGEOFF
	mov	w2, #4
	bl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp14:
; %bb.6:
	mov	x19, x0
Ltmp15:
	sub	x0, x29, #56                    ; =56
	bl	__ZN6Vector4normEv
Ltmp16:
; %bb.7:
Ltmp17:
	mov	x0, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
Ltmp18:
; %bb.8:
	mov	x19, x0
	ldr	x8, [x0]
	ldur	x8, [x8, #-24]
	add	x0, x0, x8
Ltmp19:
	add	x8, sp, #56                     ; =56
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp20:
; %bb.9:
Ltmp21:
Lloh8:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh9:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #56                     ; =56
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp22:
; %bb.10:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp23:
	mov	w1, #10
	blr	x8
Ltmp24:
; %bb.11:
	mov	x20, x0
	add	x0, sp, #56                     ; =56
	bl	__ZNSt3__16localeD1Ev
Ltmp26:
	mov	x0, x19
	mov	x1, x20
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
Ltmp27:
; %bb.12:
Ltmp28:
	mov	x0, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
Ltmp29:
; %bb.13:
Ltmp30:
Lloh10:
	adrp	x0, __ZNSt3__14coutE@GOTPAGE
Lloh11:
	ldr	x0, [x0, __ZNSt3__14coutE@GOTPAGEOFF]
Lloh12:
	adrp	x1, l_.str.1@PAGE
Lloh13:
	add	x1, x1, l_.str.1@PAGEOFF
	mov	w2, #9
	bl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp31:
; %bb.14:
	mov	x19, x0
Ltmp33:
	add	x0, sp, #40                     ; =40
	add	x1, sp, #72                     ; =72
	bl	__ZN6VectorC1ERKS_
Ltmp34:
; %bb.15:
Ltmp36:
	add	x8, sp, #56                     ; =56
	sub	x0, x29, #56                    ; =56
	add	x1, sp, #40                     ; =40
	bl	__ZNK6Vector14scalarMultiplyES_
Ltmp37:
; %bb.16:
Ltmp39:
	add	x0, sp, #56                     ; =56
	bl	__ZN6Vector4normEv
Ltmp40:
; %bb.17:
Ltmp41:
	mov	x0, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEd
Ltmp42:
; %bb.18:
	mov	x19, x0
	ldr	x8, [x0]
	ldur	x8, [x8, #-24]
	add	x0, x0, x8
Ltmp43:
	sub	x8, x29, #24                    ; =24
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp44:
; %bb.19:
Ltmp45:
Lloh14:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh15:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	sub	x0, x29, #24                    ; =24
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp46:
; %bb.20:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp47:
	mov	w1, #10
	blr	x8
Ltmp48:
; %bb.21:
	mov	x20, x0
	sub	x0, x29, #24                    ; =24
	bl	__ZNSt3__16localeD1Ev
Ltmp50:
	mov	x0, x19
	mov	x1, x20
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
Ltmp51:
; %bb.22:
Ltmp52:
	mov	x0, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
Ltmp53:
; %bb.23:
	add	x0, sp, #56                     ; =56
	bl	__ZN6VectorD1Ev
	add	x0, sp, #40                     ; =40
	bl	__ZN6VectorD1Ev
Ltmp55:
	add	x0, sp, #24                     ; =24
	add	x1, sp, #72                     ; =72
	bl	__ZN6VectorC1ERKS_
Ltmp56:
; %bb.24:
Ltmp58:
	add	x8, sp, #56                     ; =56
	sub	x0, x29, #56                    ; =56
	add	x1, sp, #24                     ; =24
	bl	__ZNK6Vector3addES_
Ltmp59:
; %bb.25:
Ltmp61:
	add	x0, sp, #56                     ; =56
	bl	__ZN6Vector11printVectorEv
Ltmp62:
; %bb.26:
	add	x0, sp, #56                     ; =56
	bl	__ZN6VectorD1Ev
	add	x0, sp, #24                     ; =24
	bl	__ZN6VectorD1Ev
Ltmp64:
	add	x0, sp, #8                      ; =8
	add	x1, sp, #72                     ; =72
	bl	__ZN6VectorC1ERKS_
Ltmp65:
; %bb.27:
Ltmp67:
	add	x8, sp, #56                     ; =56
	sub	x0, x29, #56                    ; =56
	add	x1, sp, #8                      ; =8
	bl	__ZNK6Vector10differenceES_
Ltmp68:
; %bb.28:
Ltmp70:
	add	x0, sp, #56                     ; =56
	bl	__ZN6Vector11printVectorEv
Ltmp71:
; %bb.29:
	add	x0, sp, #56                     ; =56
	bl	__ZN6VectorD1Ev
	add	x0, sp, #8                      ; =8
	bl	__ZN6VectorD1Ev
	add	x0, sp, #72                     ; =72
	bl	__ZN6VectorD1Ev
	sub	x0, x29, #72                    ; =72
	bl	__ZN6VectorD1Ev
	sub	x0, x29, #56                    ; =56
	bl	__ZN6VectorD1Ev
	sub	x0, x29, #40                    ; =40
	bl	__ZN6VectorD1Ev
	mov	w0, #0
	ldp	x29, x30, [sp, #160]            ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #144]            ; 16-byte Folded Reload
	add	sp, sp, #176                    ; =176
	ret
LBB0_30:
Ltmp72:
	mov	x19, x0
	add	x0, sp, #56                     ; =56
	bl	__ZN6VectorD1Ev
	b	LBB0_32
LBB0_31:
Ltmp69:
	mov	x19, x0
LBB0_32:
	add	x0, sp, #8                      ; =8
	b	LBB0_47
LBB0_33:
Ltmp66:
	b	LBB0_49
LBB0_34:
Ltmp63:
	mov	x19, x0
	add	x0, sp, #56                     ; =56
	bl	__ZN6VectorD1Ev
	add	x0, sp, #24                     ; =24
	b	LBB0_47
LBB0_35:
Ltmp60:
	mov	x19, x0
	add	x0, sp, #24                     ; =24
	b	LBB0_47
LBB0_36:
Ltmp57:
	b	LBB0_49
LBB0_37:
Ltmp38:
	mov	x19, x0
	b	LBB0_46
LBB0_38:
Ltmp35:
	b	LBB0_49
LBB0_39:
Ltmp7:
	mov	x19, x0
	b	LBB0_52
LBB0_40:
Ltmp49:
	mov	x19, x0
	sub	x0, x29, #24                    ; =24
	bl	__ZNSt3__16localeD1Ev
	b	LBB0_45
LBB0_41:
Ltmp25:
	mov	x19, x0
	add	x0, sp, #56                     ; =56
	bl	__ZNSt3__16localeD1Ev
	b	LBB0_50
LBB0_42:
Ltmp12:
	mov	x19, x0
	b	LBB0_51
LBB0_43:
Ltmp4:
	mov	x19, x0
	b	LBB0_53
LBB0_44:
Ltmp54:
	mov	x19, x0
LBB0_45:
	add	x0, sp, #56                     ; =56
	bl	__ZN6VectorD1Ev
LBB0_46:
	add	x0, sp, #40                     ; =40
LBB0_47:
	bl	__ZN6VectorD1Ev
	b	LBB0_50
LBB0_48:
Ltmp32:
LBB0_49:
	mov	x19, x0
LBB0_50:
	add	x0, sp, #72                     ; =72
	bl	__ZN6VectorD1Ev
LBB0_51:
	sub	x0, x29, #72                    ; =72
	bl	__ZN6VectorD1Ev
LBB0_52:
	sub	x0, x29, #56                    ; =56
	bl	__ZN6VectorD1Ev
LBB0_53:
	sub	x0, x29, #40                    ; =40
	bl	__ZN6VectorD1Ev
	mov	x0, x19
	bl	__Unwind_Resume
	.loh AdrpLdr	Lloh0, Lloh1
	.loh AdrpLdr	Lloh2, Lloh3
	.loh AdrpAdd	Lloh6, Lloh7
	.loh AdrpLdrGot	Lloh4, Lloh5
	.loh AdrpLdrGot	Lloh8, Lloh9
	.loh AdrpAdd	Lloh12, Lloh13
	.loh AdrpLdrGot	Lloh10, Lloh11
	.loh AdrpLdrGot	Lloh14, Lloh15
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table0:
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
	.uleb128 Ltmp3-Ltmp0                    ;   Call between Ltmp0 and Ltmp3
	.uleb128 Ltmp4-Lfunc_begin0             ;     jumps to Ltmp4
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp5-Lfunc_begin0             ; >> Call Site 3 <<
	.uleb128 Ltmp6-Ltmp5                    ;   Call between Ltmp5 and Ltmp6
	.uleb128 Ltmp7-Lfunc_begin0             ;     jumps to Ltmp7
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp8-Lfunc_begin0             ; >> Call Site 4 <<
	.uleb128 Ltmp11-Ltmp8                   ;   Call between Ltmp8 and Ltmp11
	.uleb128 Ltmp12-Lfunc_begin0            ;     jumps to Ltmp12
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp13-Lfunc_begin0            ; >> Call Site 5 <<
	.uleb128 Ltmp20-Ltmp13                  ;   Call between Ltmp13 and Ltmp20
	.uleb128 Ltmp32-Lfunc_begin0            ;     jumps to Ltmp32
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp21-Lfunc_begin0            ; >> Call Site 6 <<
	.uleb128 Ltmp24-Ltmp21                  ;   Call between Ltmp21 and Ltmp24
	.uleb128 Ltmp25-Lfunc_begin0            ;     jumps to Ltmp25
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp26-Lfunc_begin0            ; >> Call Site 7 <<
	.uleb128 Ltmp31-Ltmp26                  ;   Call between Ltmp26 and Ltmp31
	.uleb128 Ltmp32-Lfunc_begin0            ;     jumps to Ltmp32
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp33-Lfunc_begin0            ; >> Call Site 8 <<
	.uleb128 Ltmp34-Ltmp33                  ;   Call between Ltmp33 and Ltmp34
	.uleb128 Ltmp35-Lfunc_begin0            ;     jumps to Ltmp35
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp36-Lfunc_begin0            ; >> Call Site 9 <<
	.uleb128 Ltmp37-Ltmp36                  ;   Call between Ltmp36 and Ltmp37
	.uleb128 Ltmp38-Lfunc_begin0            ;     jumps to Ltmp38
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp39-Lfunc_begin0            ; >> Call Site 10 <<
	.uleb128 Ltmp44-Ltmp39                  ;   Call between Ltmp39 and Ltmp44
	.uleb128 Ltmp54-Lfunc_begin0            ;     jumps to Ltmp54
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp45-Lfunc_begin0            ; >> Call Site 11 <<
	.uleb128 Ltmp48-Ltmp45                  ;   Call between Ltmp45 and Ltmp48
	.uleb128 Ltmp49-Lfunc_begin0            ;     jumps to Ltmp49
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp50-Lfunc_begin0            ; >> Call Site 12 <<
	.uleb128 Ltmp53-Ltmp50                  ;   Call between Ltmp50 and Ltmp53
	.uleb128 Ltmp54-Lfunc_begin0            ;     jumps to Ltmp54
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp55-Lfunc_begin0            ; >> Call Site 13 <<
	.uleb128 Ltmp56-Ltmp55                  ;   Call between Ltmp55 and Ltmp56
	.uleb128 Ltmp57-Lfunc_begin0            ;     jumps to Ltmp57
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp58-Lfunc_begin0            ; >> Call Site 14 <<
	.uleb128 Ltmp59-Ltmp58                  ;   Call between Ltmp58 and Ltmp59
	.uleb128 Ltmp60-Lfunc_begin0            ;     jumps to Ltmp60
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp61-Lfunc_begin0            ; >> Call Site 15 <<
	.uleb128 Ltmp62-Ltmp61                  ;   Call between Ltmp61 and Ltmp62
	.uleb128 Ltmp63-Lfunc_begin0            ;     jumps to Ltmp63
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp64-Lfunc_begin0            ; >> Call Site 16 <<
	.uleb128 Ltmp65-Ltmp64                  ;   Call between Ltmp64 and Ltmp65
	.uleb128 Ltmp66-Lfunc_begin0            ;     jumps to Ltmp66
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp67-Lfunc_begin0            ; >> Call Site 17 <<
	.uleb128 Ltmp68-Ltmp67                  ;   Call between Ltmp67 and Ltmp68
	.uleb128 Ltmp69-Lfunc_begin0            ;     jumps to Ltmp69
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp70-Lfunc_begin0            ; >> Call Site 18 <<
	.uleb128 Ltmp71-Ltmp70                  ;   Call between Ltmp70 and Ltmp71
	.uleb128 Ltmp72-Lfunc_begin0            ;     jumps to Ltmp72
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp71-Lfunc_begin0            ; >> Call Site 19 <<
	.uleb128 Lfunc_end0-Ltmp71              ;   Call between Ltmp71 and Lfunc_end0
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end0:
	.p2align	2
                                        ; -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ; -- Begin function _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_def_can_be_hidden	__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	2
__ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ; @_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
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
Ltmp73:
	add	x0, sp, #8                      ; =8
	mov	x1, x19
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp74:
; %bb.1:
	ldrb	w8, [sp, #8]
	cbz	w8, LBB1_10
; %bb.2:
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x22, x19, x8
	ldr	x23, [x22, #40]
	ldr	w25, [x22, #8]
	ldr	w24, [x22, #144]
	cmn	w24, #1                         ; =1
	b.ne	LBB1_7
; %bb.3:
Ltmp76:
	add	x8, sp, #24                     ; =24
	mov	x0, x22
	bl	__ZNKSt3__18ios_base6getlocEv
Ltmp77:
; %bb.4:
Ltmp78:
Lloh16:
	adrp	x1, __ZNSt3__15ctypeIcE2idE@GOTPAGE
Lloh17:
	ldr	x1, [x1, __ZNSt3__15ctypeIcE2idE@GOTPAGEOFF]
	add	x0, sp, #24                     ; =24
	bl	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp79:
; %bb.5:
	ldr	x8, [x0]
	ldr	x8, [x8, #56]
Ltmp80:
	mov	w1, #32
	blr	x8
Ltmp81:
; %bb.6:
	mov	x24, x0
	add	x0, sp, #24                     ; =24
	bl	__ZNSt3__16localeD1Ev
	str	w24, [x22, #144]
LBB1_7:
	add	x3, x20, x21
	mov	w8, #176
	and	w8, w25, w8
	cmp	w8, #32                         ; =32
	csel	x2, x3, x20, eq
Ltmp83:
	sxtb	w5, w24
	mov	x0, x23
	mov	x1, x20
	mov	x4, x22
	bl	__ZNSt3__116__pad_and_outputIcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp84:
; %bb.8:
	cbnz	x0, LBB1_10
; %bb.9:
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x0, x19, x8
	ldr	w8, [x0, #32]
	mov	w9, #5
	orr	w1, w8, w9
Ltmp86:
	bl	__ZNSt3__18ios_base5clearEj
Ltmp87:
LBB1_10:
	add	x0, sp, #8                      ; =8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
LBB1_11:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #112                    ; =112
	ret
LBB1_12:
Ltmp88:
	b	LBB1_15
LBB1_13:
Ltmp82:
	mov	x20, x0
	add	x0, sp, #24                     ; =24
	bl	__ZNSt3__16localeD1Ev
	b	LBB1_16
LBB1_14:
Ltmp85:
LBB1_15:
	mov	x20, x0
LBB1_16:
	add	x0, sp, #8                      ; =8
	bl	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
	b	LBB1_18
LBB1_17:
Ltmp75:
	mov	x20, x0
LBB1_18:
	mov	x0, x20
	bl	___cxa_begin_catch
	ldr	x8, [x19]
	ldur	x8, [x8, #-24]
	add	x0, x19, x8
Ltmp89:
	bl	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp90:
; %bb.19:
	bl	___cxa_end_catch
	b	LBB1_11
LBB1_20:
Ltmp91:
	mov	x19, x0
Ltmp92:
	bl	___cxa_end_catch
Ltmp93:
; %bb.21:
	mov	x0, x19
	bl	__Unwind_Resume
LBB1_22:
Ltmp94:
	bl	___clang_call_terminate
	.loh AdrpLdrGot	Lloh16, Lloh17
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table1:
Lexception1:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	155                             ; @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Ltmp73-Lfunc_begin1            ; >> Call Site 1 <<
	.uleb128 Ltmp74-Ltmp73                  ;   Call between Ltmp73 and Ltmp74
	.uleb128 Ltmp75-Lfunc_begin1            ;     jumps to Ltmp75
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp76-Lfunc_begin1            ; >> Call Site 2 <<
	.uleb128 Ltmp77-Ltmp76                  ;   Call between Ltmp76 and Ltmp77
	.uleb128 Ltmp85-Lfunc_begin1            ;     jumps to Ltmp85
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp78-Lfunc_begin1            ; >> Call Site 3 <<
	.uleb128 Ltmp81-Ltmp78                  ;   Call between Ltmp78 and Ltmp81
	.uleb128 Ltmp82-Lfunc_begin1            ;     jumps to Ltmp82
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp83-Lfunc_begin1            ; >> Call Site 4 <<
	.uleb128 Ltmp84-Ltmp83                  ;   Call between Ltmp83 and Ltmp84
	.uleb128 Ltmp85-Lfunc_begin1            ;     jumps to Ltmp85
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp86-Lfunc_begin1            ; >> Call Site 5 <<
	.uleb128 Ltmp87-Ltmp86                  ;   Call between Ltmp86 and Ltmp87
	.uleb128 Ltmp88-Lfunc_begin1            ;     jumps to Ltmp88
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp87-Lfunc_begin1            ; >> Call Site 6 <<
	.uleb128 Ltmp89-Ltmp87                  ;   Call between Ltmp87 and Ltmp89
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp89-Lfunc_begin1            ; >> Call Site 7 <<
	.uleb128 Ltmp90-Ltmp89                  ;   Call between Ltmp89 and Ltmp90
	.uleb128 Ltmp91-Lfunc_begin1            ;     jumps to Ltmp91
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp90-Lfunc_begin1            ; >> Call Site 8 <<
	.uleb128 Ltmp92-Ltmp90                  ;   Call between Ltmp90 and Ltmp92
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp92-Lfunc_begin1            ; >> Call Site 9 <<
	.uleb128 Ltmp93-Ltmp92                  ;   Call between Ltmp92 and Ltmp93
	.uleb128 Ltmp94-Lfunc_begin1            ;     jumps to Ltmp94
	.byte	1                               ;   On action: 1
	.uleb128 Ltmp93-Lfunc_begin1            ; >> Call Site 10 <<
	.uleb128 Lfunc_end1-Ltmp93              ;   Call between Ltmp93 and Lfunc_end1
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end1:
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
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
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
	cbz	x0, LBB2_15
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
	b.lt	LBB2_3
; %bb.2:
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
	mov	x0, x19
	mov	x2, x25
	blr	x8
	cmp	x0, x25
	b.ne	LBB2_14
LBB2_3:
	cmp	x23, #1                         ; =1
	b.lt	LBB2_11
; %bb.4:
	cmp	x23, #23                        ; =23
	b.hs	LBB2_6
; %bb.5:
	add	x26, sp, #8                     ; =8
	strb	w23, [sp, #31]
	add	x25, sp, #8                     ; =8
	b	LBB2_7
LBB2_6:
	add	x8, x23, #16                    ; =16
	and	x26, x8, #0xfffffffffffffff0
	mov	x0, x26
	bl	__Znwm
	mov	x25, x0
	orr	x8, x26, #0x8000000000000000
	stp	x23, x8, [sp, #16]
	str	x0, [sp, #8]
	add	x26, sp, #8                     ; =8
LBB2_7:
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
Ltmp95:
	mov	x0, x19
	mov	x2, x23
	blr	x8
Ltmp96:
; %bb.8:
	mov	x24, x0
	ldrsb	w8, [x26, #23]
	tbnz	w8, #31, LBB2_10
; %bb.9:
	cmp	x24, x23
	b.ne	LBB2_14
	b	LBB2_11
LBB2_10:
	ldr	x0, [sp, #8]
	bl	__ZdlPv
	cmp	x24, x23
	b.ne	LBB2_14
LBB2_11:
	sub	x22, x22, x21
	cmp	x22, #1                         ; =1
	b.lt	LBB2_13
; %bb.12:
	ldr	x8, [x19]
	ldr	x8, [x8, #96]
	mov	x0, x19
	mov	x1, x21
	mov	x2, x22
	blr	x8
	cmp	x0, x22
	b.ne	LBB2_14
LBB2_13:
	str	xzr, [x20, #24]
	b	LBB2_15
LBB2_14:
	mov	x19, #0
LBB2_15:
	mov	x0, x19
	ldp	x29, x30, [sp, #96]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #80]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #64]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #48]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #112                    ; =112
	ret
LBB2_16:
Ltmp97:
	mov	x19, x0
	ldrsb	w8, [x26, #23]
	tbz	w8, #31, LBB2_18
; %bb.17:
	ldr	x0, [sp, #8]
	bl	__ZdlPv
LBB2_18:
	mov	x0, x19
	bl	__Unwind_Resume
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table2:
Lexception2:
	.byte	255                             ; @LPStart Encoding = omit
	.byte	255                             ; @TType Encoding = omit
	.byte	1                               ; Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Lfunc_begin2-Lfunc_begin2      ; >> Call Site 1 <<
	.uleb128 Ltmp95-Lfunc_begin2            ;   Call between Lfunc_begin2 and Ltmp95
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp95-Lfunc_begin2            ; >> Call Site 2 <<
	.uleb128 Ltmp96-Ltmp95                  ;   Call between Ltmp95 and Ltmp96
	.uleb128 Ltmp97-Lfunc_begin2            ;     jumps to Ltmp97
	.byte	0                               ;   On action: cleanup
	.uleb128 Ltmp96-Lfunc_begin2            ; >> Call Site 3 <<
	.uleb128 Lfunc_end2-Ltmp96              ;   Call between Ltmp96 and Lfunc_end2
	.byte	0                               ;     has no landing pad
	.byte	0                               ;   On action: cleanup
Lcst_end2:
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
	.asciz	"v2: "

l_.str.1:                               ; @.str.1
	.asciz	"v2 * v4: "

.subsections_via_symbols
