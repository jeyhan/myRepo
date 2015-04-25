	.section .data
data_items:
	.long 36,2222,55,12,222,45,75,54,32,34,22,11,66,0
	.section .text
	.globl	_start
_start:
	movl $0, %edi
	movl data_items(,%edi,4),%eax
	movl %eax, %ebx

start_loop:
	cmpl $0, %eax		#check to see if hited the end of numbers
	je loop_exit		#if so, end loop
	incl %edi		#edi is index, so increase the edi
	movl data_items(,%edi,4),%eax	#load the value by edi
	cmpl %ebx, %eax		#check if %eax is bigger?
	jle start_loop		#%eax is not bigger,continue the loop
	movl %eax, %ebx		#%eax is bigger,actully
	jmp start_loop		#continue the loop
loop_exit:
	movl $1, %eax
	int $0x80
				#as max.s -o max.o
				#ld max.o -o max
				#./max
				#echo $?


#A format of executable file:ELF
#including:
	#object		#Section Header Table
	#Executable	#Program && Section Header Table
	#shared object	#Section && Program Header Table
#One "Segment" contains some "Sections"
	#"Program Table" describes Segments Information
	#Use for loader
	#"Section Table" describes Sections Information
	#Use for linker
#linker didn't modified the address of jmps,but memory accesses.
#linker modified memory accesses address by refer .rel.text
