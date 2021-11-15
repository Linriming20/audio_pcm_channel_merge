all: pcm_channel_merge

CC := gcc
CFLAG := 

OUTPUT := pcm_channel_merge

$(OUTPUT) : main.c
	$(CC) $^ $(CFLAG) -o $@

clean : 
	rm -rf $(OUTPUT)
.PHONY := clean

