; 32bit
; awesome a$$embly

str msg = "Hello, World!"

section .text = _start()
_start():
	mov eax, 4
	mov ebx, 1
	mov ecx, msg
	int 0x80
