={ch08} 引用記述例

== 記法

@<tt>$//quote{ ... //}$


== 文例1

最初と最後は普通の文章。真ん中が引用。

括弧とカンマおよびページは自分で記述。

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

//quote{
Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. (@<bib>{yamada_2000}, p.123)
//}

Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.


== 文例2

引用中に強調文があるパターン。

//quote{
We are uncovering better ways of developing software by doing it and helping others do it. Through this work we have come to value:

@<em>{Individuals and interactions} over processes and tools

@<em>{Working software} over comprehensive documentation

@<em>{Customer collaboration} over contract negotiation

@<em>{Responding to change} over following a plan

That is, while there is value in the items on the right, we value the items on the left mode. (@<bib>{beck_et_al_2001})
//}
