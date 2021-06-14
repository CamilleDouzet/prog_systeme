

	.text
	jump	$4000

$4000:	add
	bne


2 PROCESSUS
	t1			jump $4000		pc
	t2			jump $4000

	faire cohabiter 2 programmes dans la mémoire, y a conflit

	1) PIC Position Independent Code		jump $4000 absolu	jump_relatif $4000

	2) Mémoire virtuelle


