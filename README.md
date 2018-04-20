<br> #WC项目使用说明<br>
##1.项目的简介<br>
本项目通过规定的输入指定命令，形如wc.exe -c file.txt（wc.exe [参数] [文件名]），寻找相关.txt纯英文文本中，包括字符、单词、句子、行、注释、空行等各项数目。<br> 
##2.项目相关的用法<br>  
1. 打开项目的.exe文件，路径为D:\C++\WENZI\v2.1。<br> 
2. 输入指定命令，其中命令对应的结果为：<br> 
  1）"wc.exe -c file.txt"——字符数;<br> 
  2）."wc.exe -w file.txt"——单词数；<br> 
  3）."wc.exe -l file.txt"——句子数；<br> 
  4）."wc.exe -h file.txt"——行数；<br> 
  5）."wc.exe -z file.txt"——注释数；<br> 
  6）."wc.exe -k file.txt"——空行数。<br> 
注意，若输入非规定指令，则需重新输入。<br> 
##3.文件列表及其相关说明<br>  
1. basic fun v1.cpp为基本功能代码，即具有计算字符、单词、句子数的功能；<br> 
2. extend fun v2.cpp为扩展功能代码，即具有计算行、注释、空行数的功能；<br> 
3. 233.txt为测试文本。<br> 
##4.各版本修正说明<br> 
###V2.0<br> 
1. V1-V2为新加扩展三项功能,即"wc.exe -h file.txt"、"wc.exe -z file.txt"、"wc.exe -k file.txt"三项；<br> 
###V2.1<br> 
1. 计算空行数时，解决第一行为空行的计数错误问题；<br> 
2. 解决单词计数时，多出回车数的问题，予以修正；<br> 
3. 解决计算空行数时，最后一行为空行时，空行数目多一的问题，用flag实现。<br> 
###V2.2<br> 
1. 当输入其他非规定字符时出现退出现象，此处修正，当再出现同种情况时，使用户重新输入，即增加while与break语句。<br> 

 
 
