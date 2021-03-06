={ch04} コラムや囲み記事の記述例


=={ch04.1} コラム

 * @<tt>{[column]} は、見出しのオプションなので、@<tt>{config.yml} の @<tt>{toclevel} の値によって、コラムが目次に含まれるかどうかが変わってくる。
 * 終了行の記述（ @<tt>{==[/column]} など）の前には空白行を入れる。

===[column]{ch04.1.1} 見出しレベル3のコラムのタイトル

これは見出しレベル3のコラムなので、目次に含まれる。

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

===[/column]

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

====[column]{ch04.1.1.1} 見出しレベル4のコラムのタイトル

これは見出しレベル4のコラムなので、目次に含まれない。

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

====[/column]


=={ch04.2} 囲み記事

 * いずれも @<tt>{[キャプション]} は省略可能。
 * キャプションを入れたところ、どの囲み記事タイプを使っても、先頭に「メモ:」と表示された。


==={ch04.2.1} ノート

記法: @<tt>$//note[キャプション]{ ... //}$

//note[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.2} メモ

記法: @<tt>$//memo[キャプション]{ ... //}$

//memo[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.3} Tips

記法: @<tt>$//tip[キャプション]{ ... //}$

//tip[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.4} 情報

記法: @<tt>$//info[キャプション]{ ... //}$

//info[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.5} 注意

記法: @<tt>$//warning[キャプション]{ ... //}$

//warning[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.6} 重要

記法: @<tt>$//important[キャプション]{ ... //}$

//important[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.7} 警告

記法: @<tt>$//caution[キャプション]{ ... //}$

//caution[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}


==={ch04.2.8} 注意

記法: @<tt>$//notice[キャプション]{ ... //}$

//notice[キャプション]{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}
