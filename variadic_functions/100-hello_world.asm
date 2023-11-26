section.text
	global _start

_start:
	mov edx,length
	mov ecx,text
	mov ebx,1
	mov eax,4
	syscall

	mov eax,1
	syscall

section.data
	text db "Hello, World", 0xa
	len equ $ - text
