
## 字节序(字节顺序)  

**字节顺序**又称**端序**或**尾序** (英语:**Endianness**)(在计算机科学领域中，指在数据通信链路中，组成多字节的字的字节的排序顺序。  

在几乎所有的机器上，多字节对象都被储存为连续的字节序列。例如在C语言中，一个4字节的int类型变量a，其储存的起始地址为0xffff4000,0xffff4001,0xffff4002,0xffff4003的位置。所以，a的最低有效为可以存储在最前面，也可以存储杂最后面，就有两种不同的存储顺序。  

字节序分为两类 : Big-Endiian 和 little-Endian，应用标准的Big-Endian 和
little-Endian的定义如下:  
+ Little-Endian : 就是低位字节排放在内存的低地址端，高位字节派放在内存的高地址端。  
+ Big-Endian : 就是高位字节排放在内存的低地址端，低位字节派放在内存的高地址端。   
+ 网络字节序 : TCP/IP各层协议将字节序定义为Big-Endian(这与主机序相反),因此TCP/IP协议中使用的字节序通常称之为网络字节序。  
  
CPU内存中的存放方式(假设从地址0x4000开始存放为：  
32bit宽的数0x12345678在Little-Endian模式  
Little-Endian   
| 内存地址 | 存放内容 |
| ---------| -------- |
| 0x4000 |0x78|
| 0x4001 |0x56|
| 0x4002 |0x34|
| 0x4003 |0x12|

```C
#include<stdio.h>


int main()
{
				int a = 0x12345678;
				char *b = (char *)&a;
				int i = 0;
				for(;i < 4;i++)
				{
						printf("%02x\n",b[i]);
				}

				return 0;

}  
````  
显示结果如下   
| 78     |
|--------|
| **56** |
| **34** |
| **12** |
通过readelf -h endian 查看  

>readelf -h endian  
```
ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00 
  Class:                             ELF64
  Data:                              2's complement, little endian
  Version:                           1 (current)
  OS/ABI:                            UNIX - System V
  ABI Version:                       0
  Type:                              DYN (Shared object file)
  Machine:                           Advanced Micro Devices X86-64
  Version:                           0x1
````
观察运行结果，可以发现  
+  little-Endian a 低位的0x78储存在低地址，而高位的12存储在高地址。  

并非原创多是来自公众号**编程珠玑**
如有侵权请联系删除<ybsun.nathan.gmail.com>谢谢






















