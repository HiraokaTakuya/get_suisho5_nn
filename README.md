# get\_suisho5\_nn

[水匠5](https://drive.google.com/file/d/1T-Go2KImMfKD_4m_j4fQFXrEfaGgAcS_/)のソースコードに埋め込まれた評価関数テーブルをファイルに書き出します。

## Usage

```bash
(cd 水匠5; unrar e source.rar) && \
g++ -O2 get_suisho5_nn.cpp -o get_suisho5_nn && \
./get_suisho5_nn
```

suisho5_nn/nn.bin に書き出されます。

## License

GPL v3.
