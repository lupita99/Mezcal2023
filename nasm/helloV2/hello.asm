section .data
	msg db "Hola Mundo!", 0xD, 0xA
	len equ $ - msg

section .text
	global _start

_start:
	mov eax, 4
	; eax = 4
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	int 0x80

	mov eax, 1
	int 0x80

