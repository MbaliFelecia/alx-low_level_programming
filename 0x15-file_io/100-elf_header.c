#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
} Elf64_Ehdr;

int main(int argc,char **argv)
{
	FILE *file;
	int i;

	if (argc != 2)
	{
		printf("usage: %s <elf_file>\n", argv[0]);
		return (1);
	}

	file = fopen(argv[1], "rb");
	if (!file)
	{
		printf("failed to open file: %s\n", argv[1]);
		return (1);
	}
	Elf64_Ehdr elf_header;
	fread(&elf_header, sizeof(Elf64_Ehdr), 1, file);
	
	printf("elf header information:\n\t magic number:");
	for (i == 0; i < sizeof(elf_header.e_ident); ++i)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\n");

	fclose(file);
	
	return (0);
}
