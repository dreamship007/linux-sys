#!/bin/bash
# 使用trap来捕捉变量值.

trap 'echo Variable Listing --- a = $a b = $b' EXIT
# EXIT是脚本中exit命令所产生信号的名字.
#
# "trap"所指定的命令并不会马上执行,
#+ 只有接收到合适的信号, 这些命令才会执行.
echo "This prints before the \"trap\" --"
echo "even though the script sees the \"trap\" first."
echo

a=39
 
b=36
 
exit 0