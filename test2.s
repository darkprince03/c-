	.file	"test2.c"
	.section	.rodata
.LC0:
	.string	"%d"
.LC1:
	.string	"\n%d %d"
.LC2:
	.string	"\n%d"
.LC3:
	.string	"Good Morning\n"
.LC4:
	.string	"Hello"
.LC5:
	.string	"%cn"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%edi
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x7,0x2,0x75,0x7c
	subl	$96, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	leal	-48(%ebp), %edx
	movl	$0, %eax
	movl	$9, %ecx
	movl	%edx, %edi
	rep stosl
	movl	$1, -48(%ebp)
	movl	$2, -44(%ebp)
	movl	$3, -40(%ebp)
	movl	$4, -36(%ebp)
	movl	$5, -32(%ebp)
	movl	$6, -28(%ebp)
	movl	$0, -100(%ebp)
	jmp	.L2
.L5:
	movl	$0, -96(%ebp)
	jmp	.L3
.L4:
	movl	-96(%ebp), %edx
	movl	%edx, %eax
	addl	%eax, %eax
	addl	%edx, %eax
	movl	-100(%ebp), %edx
	addl	%edx, %eax
	movl	-48(%ebp,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	addl	$1, -96(%ebp)
.L3:
	cmpl	$2, -96(%ebp)
	jle	.L4
	addl	$1, -100(%ebp)
.L2:
	cmpl	$2, -100(%ebp)
	jle	.L5
	movl	$2, -92(%ebp)
	movl	$3, -88(%ebp)
	movl	-92(%ebp), %eax
	addl	%eax, -88(%ebp)
	movl	-88(%ebp), %eax
	addl	%eax, -92(%ebp)
	movl	-92(%ebp), %eax
	addl	%eax, -88(%ebp)
	movl	-88(%ebp), %eax
	addl	%eax, -92(%ebp)
	subl	$4, %esp
	pushl	-92(%ebp)
	pushl	-88(%ebp)
	pushl	$.LC1
	call	printf
	addl	$16, %esp
	movl	$0, %ecx
	movl	$32, %eax
	andl	$-4, %eax
	movl	%eax, %edx
	movl	$0, %eax
.L6:
	movl	%ecx, -80(%ebp,%eax)
	addl	$4, %eax
	cmpl	%edx, %eax
	jb	.L6
	movl	$1, -80(%ebp)
	movl	$2, -76(%ebp)
	movl	$3, -72(%ebp)
	movl	$4, -68(%ebp)
	movl	$5, -64(%ebp)
	movl	$6, -60(%ebp)
	leal	-80(%ebp), %eax
	addl	$20, %eax
	movl	(%eax), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	movl	$.LC3+5, %eax
	subl	$12, %esp
	pushl	%eax
	call	printf
	addl	$16, %esp
	movl	$.LC4, -84(%ebp)
	movl	-84(%ebp), %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC5
	call	printf
	addl	$16, %esp
	nop
	movl	-12(%ebp), %eax
	xorl	%gs:20, %eax
	je	.L8
	call	__stack_chk_fail
.L8:
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
