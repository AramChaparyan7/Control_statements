extern printf
extern scanf

section .data
	print db "%d ",10,0
	scan db "%d",0
section .bss
	num resd 1
section .text
global main:
main:
	push rbp
	mov rbp,rsp
	mov rdi,scan
	mov rsi,num
	call scanf
	mov ebx,1
label:
	mov rdi,print
	mov rsi,rbx
	call printf
	inc ebx
	cmp ebx,dword[num]
	jle label
	mov rsp,rbp
	pop rbp
	ret
