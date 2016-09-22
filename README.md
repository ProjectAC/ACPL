# ACPL基本设定
---------------------------

### 当前版本
2.0.0.1 （概念版）

### 数据类型

__基本数据类型__   
字符 char （8位）  
布尔 bool （8位）
整数 int （64位，相当于C的long long）  
定点 real  （64位，其中32位整数有符号）   
浮点 float （64位，相当于C的double）  
标号 handle （相当于C的指针，但是并不能直接操作内存，只是虚拟机中的标号，无符号）   
无号 unsigned （无符号类型，与上面的类型配合使用）

__自定义数据类型__
类 class （第1版不可用，第2版中相当于C的struct，第3版中相当于class）

__关键字__  
分支 if(条件){内容}  
计数循环 repeat(变量名,初值,终值,步长){内容}  
条件循环 while(条件){内容}  
跳出 break （与C相同，下同）   
继续 continue  
返回 return  
新建 new （声明一个对象，与C++相同，下同）  
删除 delete  
_说明：ACPL不提供goto！！！！_

### 虚拟机指令

000 待定  
001 ADD 加法  
002 SUB 减法  
003 MUL 乘法  
004 DIV 除法  
005 MOD 取余  
006 AND 与  
007 OR 或  
008 NOT 非  
009 BAND 按位与  
010 BOR 按位或  
011 BNOT 按位非  
012 POW 幂  
013 READ 读（提供参数：输入输出流的handle，默认0即标准I/O，下同）   
014 WRITE 写 