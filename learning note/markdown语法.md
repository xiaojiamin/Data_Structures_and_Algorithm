#Markdown基本语法


#一级标题	
##二级标题
###三级标题 
(`Ctrl+1`, `Ctrl+2`, `Ctrl+3`)
####四级标题
#####五级标题

> 引用(`Ctrl+Q`)

**加粗** (`Ctrl+B`)

*斜体*(`Ctrl+I`)
​    
    代码(`Ctrl+K`)
    #include<stdio.h>
    void main()
    {
    	printf();
    
    }

- 列表(`Ctrl+U`)
- 列表
- 列表
- 列表
- 无序号列表

1. 有序号列表
2. 列表
3. 列表
4. 列表


----------
画横线分割(`Ctrl+R`)

----------

插入当前时间
2016/12/28/周三 13:23:12 (`Ctrl+T`)

[http://baidu.com](http://baidu.com "超链接")(`Ctrl+L`)




```flow
st=>start: Start
e=>end: End
op1=>operation: My Operation
sub1=>subroutine: My Subroutine
cond=>condition: Yes or No?
io=>inputoutput: catch something...
st->op1->cond
cond(yes)->io->e
cond(no)->sub1(right)->op1
```
![](1.jpg)