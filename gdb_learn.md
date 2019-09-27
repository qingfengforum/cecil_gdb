# GDB
--------

> GDB ： the GNU Project Debuger

### compile with GDB info
```json
{
    "add_flag" : "-g" //-g选项告诉gcc在编译程序时加入调试信息
}
"g++ -g -o test test.c -std=c++11"
```

### run with GDB
```
gdb <test>
gdb -q <test> // without GDB info
----
// 先进入gdb模式，再加载文件
$ gdb -q
(gdb) file test 
Reading symbols from test...done.
(gdb) 
----
(gdb) list // 显示代码，默认10行
(gdb) show listsize
(gdb) set listsize <count>
(gdb) list 5,10 // show code from line 5 to line 10
(gdb) list <func> // show function <func>
(gdb)      // 回车，重复上一命令
----
(gdb) search <string> // search string
(gdb) reverse-search <string> // reverse search
---
// GDB 也支持linux命令
(gdb) shell clear // clear 清屏
---
// 设置断点
(gdb) break 6 // set break point at line 6
(gdb) break 7 if n==6 // 条件设置断点
(gdb) break <func_name> // 在指定函数处设置断点
(gdb) info breakpoints // show break points infomation
(gdb) disable 1 // 失效断点1
(gdb) enable 1 // 生效断点1
(gdb) clear <line_num> // 删除line 1 处的断点
(gdb) clear <func_name> // 删除函数名 func_name 处的断点
(gdb) delete 1 // 删除断点1
(gdb) delete 1 2 5 // 删除断点 1 2 5
(gdb) delete  // 删除所有断点

----
// 执行
(gdb) run
(gdb) continue
(gdb) next //继续执行下一条语句，只执行一条 (不进入函数内部)
(gdb) step //继续执行下一条语句，只执行一条 (进入函数内部)
(gdb) print <var_expression> // 打印变量值
(gdb) whatis <var_expression> // 显示类型
(gdb) quit // 退出gdb调试

(gdb) kill // 杀死当前运行的程序
```