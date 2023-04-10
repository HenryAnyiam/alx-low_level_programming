#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
  *check_arg - checks correct number of arguments
  *@arg: number of arguments
  */
void check_arg(int arg)
{
	if (arg != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
}

/**
  *close_file - close an open file
  *@fd: file descriptor
  */
void close_file(int fd)
{
	int i = close(fd);

	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
  *read_status - checks if file can be read
  *@f: file table return
  *@fd: file descriptor
  *@elf: header struct
  *@file: file name
  */
void read_status(int f, int fd, Elf64_Ehdr *elf, char *file)
{
	if (elf == NULL)
	{
		close_file(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	if (f < 0)
	{
		free(elf);
		close_file(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
}

/**
  *check_file - checks if file is an ELF file
  *@elf: array of ELF magic numbers
  *@elf_h: header struct
  *@fd: file descriptor
  *@file: file name
  */
void check_file(unsigned char *elf, Elf64_Ehdr *elf_h, int fd, char *file)
{
	int i;

	for (i = 0; i <= 3; i++)
	{
		if ((elf[i] != 127) && (elf[i] != 'E')
			&& (elf[i] != 'L') && (elf[i] != 'F'))
		{
			free(elf_h);
			close_file(fd);
			dprintf(STDERR_FILENO, "Error: %s Not an ELF file\n", file);
			exit(98);
		}
	}
}

/**
  *magic - prints magic numbers
  *@elf: array of ELF magic numbers
  */
void magic(unsigned char *elf)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf[i]);
		if (i != (EI_NIDENT - 1))
			printf(" ");
	}
	printf("\n");
}

/**
  *class - plints class
  *@elf: array containing elf class
  */
void class(unsigned char *elf)
{
	printf("  Class:%29s", " ");
	switch (elf[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", elf[EI_CLASS]);
	}
}

void data(unsigned char *elf)
{
	printf("   Data:%30s", " ");
	switch (elf[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", elf[EI_CLASS]);
	}
}

void version(unsigned char *elf)
{
	printf("  Version:%27s%d", " ", elf[EI_VERSION]);
	switch (elf[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

void os_abi(unsigned char *elf)
{
	printf("  OS/ABI:%28s", " ");
	switch (elf[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", elf[EI_OSABI]);
	}
}

void abi(unsigned char *elf)
{
	printf("  ABI Version:%23s%d\n", " ", elf[EI_ABIVERSION]);
}

void type(unsigned int e_type, unsigned char *elf)
{
	if (elf[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("  Type:%30s", " ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

void entry(unsigned long int e_entry, unsigned char *elf)
{
	printf("  Entry point address:%15s", " ");
	if (elf[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (elf[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

int main(int argc, char **argv)
{
	int fd, check;
	Elf64_Ehdr *elf_header = malloc(sizeof(Elf64_Ehdr));

	check_arg(argc);
	fd = open(argv[1], O_RDONLY);
	read_status(fd, fd, elf_header, argv[1]);
	check = read(fd, elf_header, sizeof(Elf64_Ehdr));
	read_status(check, fd, elf_header, argv[1]);
	check_file(elf_header->e_ident, elf_header, fd, argv[1]);
	printf("ELF Header:\n");
	magic(elf_header->e_ident);
	class(elf_header->e_ident);
	data(elf_header->e_ident);
	version(elf_header->e_ident);
	os_abi(elf_header->e_ident);
	abi(elf_header->e_ident);
	type(elf_header->e_type, elf_header->e_ident);
	entry(elf_header->e_entry, elf_header->e_ident);
	free(elf_header);
	close_file(fd);
	return (0);
}
