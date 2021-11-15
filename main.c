#include <stdio.h>
#include <stdlib.h>

int pcm_s16le_merge(const char* in_lfile, const char* in_rfile, const char* file);

int main(int argc, char *argv[])
{
	if (argc != 4)
	{	
		printf("Usage: %s in-channel-l.pcm in-channel-r.pcm out-channels-merge.pcm\n", argv[0]);
		return -1;
	}

	/* 注意：分离左右声道的前提是输入的PCM文件（数据）是双声道 */
	pcm_s16le_merge(argv[1], argv[2], argv[3]);

	return 0;
}

int pcm_s16le_merge(const char* in_lfile, const char* in_rfile, const char* out_file)
{
	FILE *fp1 = fopen(in_lfile, "rb+");
	if (fp1 == NULL) {
		printf("open %s failed\n", in_lfile);
		return -1;
	}

	FILE *fp2 = fopen(in_rfile, "rb+");
	if (fp2 == NULL) {
		printf("open %s failed\n", in_rfile);
		return -1;
	}

	FILE *fp = fopen(out_file, "wb+");
	if (fp == NULL) {
		printf("open %s failed\n", out_file);
		return -1;
	}

	char * sample = (char *)malloc(4);
	while(!feof(fp1) || !feof(fp2)) {
		// L
		fread(sample, 1, 2, fp1);
		// R
		fread(sample + 2, 1, 2, fp2);
		fwrite(sample, 1, 4, fp);
	}
	free(sample);

	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	return 0;
}

