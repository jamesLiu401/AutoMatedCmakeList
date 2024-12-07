# simple-CMakelist
一个简单的工具，用于将一堆 C/CPP 文件添加到单个项目中的独立可执行文件中
这是一个适合初学者（至少适合我）的编辑 CmakeLists 文件的简单工具，因为我自己就是个新手
我发现互联网上没有其他工具可以解决这个问题，而且这玩意对我挺有用，因为我在 leetcode/蓝桥 上写了好些题，而且我不想为每个题都创建一个项目，而这就导致了一个项目里面有数百个源文件，每个都有个主函数。
它只是简单地按照这样的顺序组织你的 CmakeList，例如：
```code
cmake_minimum_required(VERSION 3.29)


project(NBUOJ C)


set(CMAKE_C_STANDARD 23)


add_executable(1 "1.c")
add_executable(15real "15real.c")
add_executable(JEP07-17 "JEP07-17.c")
add_executable(main "main.c")
add_executable(Narcistics "Narcistics.c")
add_executable(new_coder_list "new_coder_list.c")
add_executable(new_coder_stackAndQueue "new_coder_stackAndQueue.c")
add_executable(runoob-test "runoob-test (1).c")
add_executable(struct_ListNode0_signle_with_no_head "struct_ListNode0_signle_with_no_head.c")
add_executable(struct_ListNode_data1 double "struct_ListNode_data1 double.c")
add_executable(struct_ListNode_data2with_head "struct_ListNode_data2with_head.c")
add_executable(syntax_check "syntax_check.c")
```

注意：
该项目目前只是把源文件后面的.c/.cpp删掉作为add_ecxeutable前面的东西，因此不要添加空格或不合法的字符。
这个项目目前只支持使用没有文件夹且只有.c/cpp文件的文件夹（实际上我没试过会咋样，毕竟dirent.h都是为了这个项目现看的）
该项目目前仅支持一次只一种语言c/cpp
这个项目我挺满意，所以我目前没有计划改进其中任何一个（也许将来有可能）


A simple tool to add a bunch of C/CPP files in to seperate executables in a single project
This is a simple tool to edit CmakeLists file for beginner, because I'm quite a freshman my self
It dose nothing other than simply organize your CmakeList in such order for example:
I found that there is no other tools for this in the internet and It's preety convenient for me to have this as I'm writting a whole lot of questions on leetcode and I don't wants to creat a project for each question and it means a project with hundreds of .c/.cpp file with main func in every file.


```code
cmake_minimum_required(VERSION 3.29)


project(NBUOJ C)


set(CMAKE_C_STANDARD 23)


add_executable(1 "1.c")
add_executable(15real "15real.c")
add_executable(autoCmake "autoCmake.c")
add_executable(global "global.h")
add_executable(JEP07-17 "JEP07-17.c")
add_executable(main "main.c")
add_executable(Narcistics "Narcistics.c")
add_executable(new_coder_list "new_coder_list.c")
add_executable(new_coder_stackAndQueue "new_coder_stackAndQueue.c")
add_executable(runoob-test (1) "runoob-test (1).c")
add_executable(struct_ListNode0_signle_with_no_head "struct_ListNode0_signle_with_no_head.c")
add_executable(struct_ListNode_data1 double "struct_ListNode_data1 double.c")
add_executable(struct_ListNode_data2with_head "struct_ListNode_data2with_head.c")
add_executable(syntax_check "syntax_check.c")
```
note that:
this project currently are just cutting .c/.cpp suffix from their names so if you want to use this do not add spaces or invalid charaters.
this project currently only support using a folder with no folder and only .c/cpp files in it (actually I didn't try)
This project currently only support one language at a time c/cpp
This project meets my needs so I currently have no plans to improve any of this (maybe in the future)
