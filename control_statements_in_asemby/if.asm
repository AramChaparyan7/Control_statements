extern printf
extern scanf

section .data
	txt1 db "negative",10,0
	txt2 db "positive",10,0
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
	cmp dword[num],0
	jg g
	mov rdi,txt1
	call printf
	jmp end
g:
	mov rdi,txt2
	call printf
end:
	mov rsp,rbp
	pop rbp
	ret
