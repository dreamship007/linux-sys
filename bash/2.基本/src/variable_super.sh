#!/bin/bash
a=23
# 简单的赋值
echo $a
b=$a
echo $b
# 现在让我们来点小变化(命令替换).
a=`echo Hello!`
# 把'echo'命令的结果传给变量'a'
echo $a
# 注意, 如果在一个#+的命令替换结构中包含一个(!)的话,
#+ 那么在命令行下将无法工作.
#+ 因为这触发了Bash的"历史机制."
# 但是, 在脚本中使用的话, 历史功能是被禁用的, 所以就能够正常的运行.
a=`ls -l`
echo $a
echo
echo "$a"
exit 0