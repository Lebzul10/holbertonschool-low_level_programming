section.text
	global _start

_start:
	mov edx,length
	mov ecx,text
	mov ebx,1
	mov eax,4
	int 0x80

	mov eax,1
	int 0x80

section.data
	text db "Hello, World", 0xa
	len equ $ - text
