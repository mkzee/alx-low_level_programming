	global _start

	section .data
hello:	
	db "Hello, Holberton", 10

	section .text
_start:	
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, 17
	syscall
	mov rax, 60
	xor rdi, rdi
	syscall
