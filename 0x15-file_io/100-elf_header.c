#include "main.h"
/**
* r_magic - print 'ELF' magic ,
* @h_dr: the 'ELF' headr,
*/
void r_magic(Elf64_Ehdr h_dr)
{
	int q;

	printf("  Magic:   ");
	for (q = 0; q < EI_NIDENT; ++q)
		printf("%2.2x%s", h_dr.e_ident[q], q == EI_NIDENT - 1 ? "\n" : " ");
}
/**
* r_clss - print 'ELF' clss,
* @h_dr: the 'ELF' headr,
*/
void r_clss(Elf64_Ehdr h_dr)
{
	printf("  Class:                             ");
	switch (h_dr.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
* r_dt - print 'ELF' data,
* @h_dr: the 'ELF' headr,
*/
void r_dt(Elf64_Ehdr h_dr)
{
	printf("  Data:                              ");
	switch (h_dr.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
* r_vrs - print 'ELF' version,
* @h_dr: the 'ELF' headr,
*/
void r_vrs(Elf64_Ehdr h_dr)
{
	printf("  Version:                           %d", h_dr.e_ident[EI_VERSION]);
	if (h_dr.e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)");
	else if (h_dr.e_ident[EI_VERSION] == EV_NONE)
		printf("%s", "");
	printf("\n");
}
/**
* r_osb - print 'ELF' osabi,
* @h_dr: the 'ELF' headr,
*/
void r_osb(Elf64_Ehdr h_dr)
{
	printf("  OS/ABI:                            ");
	switch (h_dr.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		default:
			printf("<unknown: %x>", h_dr.e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
}
/**
* r_abi - print 'ELF' abi,
* @h_dr: the 'ELF' headr,
*/
void r_abi(Elf64_Ehdr h_dr)
{
	printf("  ABI Version:                       %d\n",
			h_dr.e_ident[EI_ABIVERSION]);
}
/**
* r_type - print 'ELF' type,
* @h_dr: the 'ELF' headr,
*/
void r_type(Elf64_Ehdr h_dr)
{
	char *g = (char *)&h_dr.e_type;
	int q = 0;

	printf("  Type:                              ");
	if (h_dr.e_ident[EI_DATA] == ELFDATA2MSB)
		q = 1;
	switch (g[q])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatabel)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknwon>: %x", g[q]);
			break;
	}
	printf("\n");
}
/**
* r_ent - print 'ELF' ent,
* @h_dr: the 'ELF' headr,
*/
void r_ent(Elf64_Ehdr h_dr)
{
	int q = 0, lnth = 0;
	unsigned char *t = (unsigned char *)&h_dr.e_entry;

	printf("  Entry point address:               0x");
	if (h_dr.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		q = (h_dr.e_ident[EI_CLASS] == ELFCLASS64) ? 7 : 3;
		while (!t[q])
			q--;
		printf("%x", t[q--]);
		for (; q >= 0; q--)
			printf("%02x", t[q]);
	}
	else
	{
		q = 0;
		lnth = (h_dr.e_ident[EI_CLASS] == ELFCLASS64) ? 7 : 3;
		while (!t[q])
			q++;
		printf("%x", t[q++]);
		for (; q <= lnth; q++)
			printf("%02x", t[q]);
	}
	printf("\n");
}

/**
 * main - the entry point
 * @argc: intgere nbr argument,
 * @argv: the pointer arr,
 * Return: always 0,
 */
int main(int argc, char *argv[])
{
	int f_d = open(argv[1], O_RDONLY);
	Elf64_Ehdr elf_h_dr;
	ssize_t b_rd;

	if (argc != 2)
		dprintf(2, "Usage: elf_header elf_filename\n"), exit(98);

	if (f_d == -1)
		dprintf(2, "Error: Could not open file %s\n", argv[1]), exit(98);

	b_rd = read(f_d, &elf_h_dr, sizeof(Elf64_Ehdr));

	if (b_rd < 1 || b_rd != sizeof(Elf64_Ehdr))
		dprintf(2, "Error: Could not read from file %s\n", argv[1]), exit(98);
	if (elf_h_dr.e_ident[0] == 0x7f && elf_h_dr.e_ident[1] == 'E' &&
			elf_h_dr.e_ident[2] == 'L' && elf_h_dr.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(2, "Error: Not an ELF file: %s\n", argv[1]), exit(98);

	r_magic(elf_h_dr);
	r_clss(elf_h_dr);
	r_dt(elf_h_dr);
	r_vrs(elf_h_dr);
	r_osb(elf_h_dr);
	r_abi(elf_h_dr);
	r_type(elf_h_dr);
	r_ent(elf_h_dr);

	if (close(f_d))
		dprintf(2, "Error closing file %d\n", f_d), exit(98);
	return (0);
}
