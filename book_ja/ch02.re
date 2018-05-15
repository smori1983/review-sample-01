={ch02} 図と表の挿入例


== 図の挿入

=== 記法

 * 番号をつける図: @<tt>$//image[識別子][キャプション]{ ...(非表示のメモ) //}$
 * 番号をつけない図: @<tt>$//indepimage[識別子][キャプション（省略化）]{ ...(非表示のメモ) //}$

識別子は、ファイル名から拡張子を除いたもの。

=== 挿入例

==== 番号をつける図

//image[figure_2_1][Figure 2-1 のタイトル][scale=0.5]{
    倍率指定。
    紙幅に対する比率。
//}

==== 番号をつけない図 タイトル表示

//indepimage[figure_2_2][Figure 2-2 のタイトル][scale=0.5]{
    図の説明を書く。
    図の説明を書く。
//}

==== 番号をつけない図 タイトル省略

//indepimage[figure_2_3][][scale=0.5]{
    図の説明を書く。
    図の説明を書く。
//}

=== 本文中で画像を参照する

本文中で画像を参照する場合、@<tt>$@<img>{識別子}$ と書く → @<img>{figure_2_1} のように番号が自動で挿入される@<fn>{1}。

//footnote[1][脚注2-1の文章。脚注2-1の文章。脚注2-1の文章。]


== 表の挿入

=== 記法

 * 番号あり・キャプションあり: @<tt>$//table[識別子][キャプション]{ ... //}$
 * 番号なし・キャプションあり: @<tt>$//emtable[キャプション]{ ... //}$
 * 番号なし・キャプションなし: @<tt>$//table{ ... //}$

=== 挿入例

==== 番号あり・キャプションあり

//table[table_2_1][テーブルのキャプション]{
項目	値
--------------------------------------------
郵便番号	111-2222
都道府県	大阪府
市区町村	大阪市XXX
値省略	.
.	項目省略
//}

==== 番号なし・キャプションあり

//emtable[テーブルのキャプション]{
項目	値
--------------------------------------------
郵便番号	111-2222
都道府県	大阪府
市区町村	大阪市XXX
値省略	.
.	項目省略
//}

==== 番号なし・キャプションなし

//table{
項目	値
--------------------------------------------
郵便番号	111-2222
都道府県	大阪府
市区町村	大阪市XXX
値省略	.
.	項目省略
//}

==== 改行あり

表内での改行には @<tt>$@<br>{}$ を使用する。@<tt>${}$ の中は何も記述しない。

//table{
項目	値1	値2
--------------------------------------------
項目1	Lorem ipsum dolor sit amet.@<br>{}consectetur adipiscing elit, sed do eiusmod.	Lorem ipsum dolor sit amet.@<br>{}consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
項目2	Lorem ipsum dolor sit amet, consectetur.@<br>{}adipiscing elit, sed do eiusmod tempor.	Lorem ipsum dolor adipiscing elit.@<br>{}sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
項目3	Lorem ipsum dolor sit adipiscing elit.@<br>{}sed do eiusmod.@<br>{}tempor incididunt dolore magna aliqua.	Lorem ipsum sit amet, ut labore et dolore magna aliqua.
//}

==== 長めの文章（改行なし）

//table{
項目	値1	値2
--------------------------------------------
項目1	Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.	Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
項目2	Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.	Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
項目3	Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.	Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
//}

==== 表内リスト表示

無理っぽい。

=== 本文中で表を参照する
