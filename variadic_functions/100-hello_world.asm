section.text:
	global main

main:
	mov edx,length
	mov ecx,text
	mov ebx,1
	mov eax,4
	int 0x80

	mov eax,1
	mov ebx,0
	int 0x80

section.data:
	text db "Hello, World", 0xa
	length equ $ - text
