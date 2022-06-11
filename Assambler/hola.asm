global _main
section .data
	msg db "Hola!",10
section .text
	
	_main:

		mov rax,4
		mov rbx,1
		mov rcx,msg
		mov rcx,msg
		mov rdx,6
		int 80h
		
		mov rax,1
		mov rbx,0
		int 80h


