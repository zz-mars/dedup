#ifndef __DEDUP_H
#define __DEDUP_H

typedef unsigned int block_id_t;
#define BLOCK_SZ		4096
#define MAX_PATH_LEN	255
#define BLOCK_ID_SZ		sizeof(block_id_t)

/* package header */
typedef struct package_header {
	unsigned int block_sz;
	unsigned int block_nr;
	unsigned int blockid_sz;
	unsigned int magic_nr;
	unsigned int file_nr;
	unsigned long long meta_offset;
} package_header;

int pack_file(char * srcFile,char * dstFile);

int unpack_file(char * srcFile,char * dstFile);

#endif

