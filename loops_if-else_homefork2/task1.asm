extern printf
extern scanf
section .data
	pfmt db "answer is %d",10,0
	sfmt db "%d",0
	num1 dd 0
	num2 dd 1
section .bss
	n resd 1
section .text
	global main:
l1:
	mov rdi,pfmt
	movsx rsi,dword[n]
	jmp end
main:
	push rbp
	mov rbp,rsp
	mov rdi,sfmt 
	mov rsi,n
	call scanf
	cmp dword[n],2
	jl l1
	movsx rcx,dword[n]
	dec rcx
label:
	mov ebx,dword[num2]
	mov eax,dword[num1]
	add eax,dword[num2]
	mov dword[num2],eax
	mov dword[num1],ebx
	loop label
	mov rdi,pfmt
	movsx rsi,dword[num2]
end:
	call printf
	mov rsp,rbp
	pop rbp
	ret
