#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <elf.h>

#define BUFFER_SIZE 1024

void print_elf_header_info(const Elf64_Ehdr *h_dr)
{
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n", h_dr->e_ident[EI_MAG0], h_dr->e_ident[EI_MAG1], h_dr->e_ident[EI_MAG2], h_dr->e_ident[EI_MAG3]);
	printf("  Class:                             %s\n", h_dr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", h_dr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", h_dr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", h_dr->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", h_dr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", h_dr->e_type);
	printf("  Entry point address:               %#lx\n", h_dr->e_entry);
}


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
