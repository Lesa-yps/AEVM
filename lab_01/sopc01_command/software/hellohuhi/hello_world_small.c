#include"sys/alt_stdio.h"
#include"system.h"
#include"altera_avalon_sysid_qsys.h"
#include"altera_avalon_sysid_qsys_regs.h"

int main()
{ 
	char ch;
	alt_putstr("Hello from System on Chip\n");
	alt_putstr("Send any character\n");
	alt_printf("%x", IORD_ALTERA_AVALON_SYSID_QSYS_ID(SYSID_QSYS_0_BASE));
	/* Event loop never exits. */
	while (1)
	{
		ch=alt_getchar();
		alt_putchar(ch);
	}
	return 0;
}
