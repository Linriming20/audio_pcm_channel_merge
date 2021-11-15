
### 1. 编译

```bash
$ make 	# or `make CC=your-corosscompile-gcc`
```

### 2. 使用

注意：合并左右声道成为双声道。

```bash
$ ./pcm_channel_merge test_44100_16_1-l.pcm test_44100_16_1-r.pcm test_44100_16_2.pcm
```

例如：

```bash
$ ./pcm_channel_merge ./pcm_file/test_44100_16_1-l.pcm ./pcm_file/test_44100_16_1-r.pcm test_44100_16_2.pcm
```

