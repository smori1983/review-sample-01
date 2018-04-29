# Re:VIEW サンプル


## 初期化

RE:VIEW の翻訳ファイルと設定ファイル類以外にもプロジェクトで管理するかもしれないので、
RE:VIEW 関係のファイルを `book_ja` 配下に作成した。

`review-init book_ja`

### 生成ファイル

`tree -a book_ja/`

```
book_ja/
├── Gemfile
├── Rakefile
├── book_ja.re
├── catalog.yml
├── config.yml
├── doc
│   ├── catalog.ja.md
│   ├── catalog.md
│   ├── ...
│   └── writing_vertical.md
├── images
│   └── cover.jpg
├── layouts
│   └── .gitkeep
├── lib
│   └── tasks
│       └── review.rake
├── sty
│   ├── jumoline.sty
│   └── reviewmacro.sty
└── style.css
```

`layouts` が空のディレクトリなので `.gitkeep` を追加。


## 翻訳ファイル構成

- `about.re`
- `preface.re`
- `ch01.re`
- `ch02.re`
- `ch03.re`


## PDF 生成

`cd book_ja`
`review-pdfmaker config.yml`

`book_ja/book.pdf` が生成される。
