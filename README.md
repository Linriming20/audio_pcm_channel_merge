
### 1. 编译

```bash
$ make 	# or `make CC=your-corosscompile-gcc`
```

### 2. 使用

合并两个声道成为双声道，例如：

```bash
$ ./pcm_channel_merge ./audio/test_22050_16_1-l.pcm ./audio/test_22050_16_1-r.pcm out_44100_16_2.pcm
$ ./pcm_channel_merge ./audio/test_44100_16_1-l.pcm ./audio/test_44100_16_1-r.pcm out_44100_16_2.pcm
```

### 附录（demo目录架构）

```bash
.
├── audio
│   ├── test_22050_16_1-l.pcm
│   ├── test_22050_16_1-r.pcm
│   ├── test_22050_16_2.pcm
│   ├── test_44100_16_1-l.pcm
│   ├── test_44100_16_1-r.pcm
│   └── test_44100_16_2.pcm
├── docs
│   └── PCM音频数据 - 简书.mhtml
├── main.c
├── Makefile
└── README.md
```

