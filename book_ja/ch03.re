={ch03} ソースコード記述例


=={ch03.1} プリプロセッサ

別のファイルにソースコードを記述しておき、プリプロセッサ命令を実行することで、
@<tt>$#@mapfile(ファイル名)$ から @<tt>$#@end$ の間に別ファイルの内容を取り込む。

プリプロセッサを使用する場合は、下記の順番でコマンドを実行する。

//emlist{
review-preproc --replace *.re
review-pdfmaker config.yml
//}

@<tt>{*.re} ファイルが書き換えられるので、外部ファイルを取り込んで一旦コミットしていないと、翻訳ファイルに差分が発生する。

=={ch03.2} リスト番号をつける場合

==={ch03.2.1} 行番号あり

@<tt>$//listnum[ID][キャプション][言語]$

で記述。

//listnum[ch03_01_01][caption][php]{
#@mapfile(code/ch03_01_02.php)
<?php
class Foo
{
    public function bar()
    {
        // ...
    }
}
#@end
//}

==={ch03.2.2} 行番号なし

@<tt>$//list[ID][キャプション][言語]$

で記述。

//list[ch03_01_02][caption][php]{
#@mapfile(code/ch03_01_02.php)
<?php
class Foo
{
    public function bar()
    {
        // ...
    }
}
#@end
//}


=={ch03.3} リスト番号をつけない場合

==={ch03.3.1} 行番号あり

@<tt>$//emlistnum[キャプション（省略可）][言語]$

で記述。

//emlistnum[][php]{
#@mapfile(code/ch03_01_02.php)
<?php
class Foo
{
    public function bar()
    {
        // ...
    }
}
#@end
//}

==={ch03.3.2} 行番号なし

@<tt>$//emlist[キャプション（省略可）][言語]$

で記述。

//emlist[][php]{
#@mapfile(code/ch03_01_02.php)
<?php
class Foo
{
    public function bar()
    {
        // ...
    }
}
#@end
//}
