# NDKtest
MyNdktest
我的NDK demo

1.首先下载android studio 配置sdk
2.下载NDK
在Tools->Android->SDK Manager->SDK Tools->NDK 将此下载
3.配置external tools
在File->Setting->Tools->External Tools中添加

Name:javah
Description:javah exe
Program:javah
Parmeters:-v -jni -d $ModuleFileDir$\src\main\jni $FileClass$
Working directory:$SourcepathEntry$

Name:ndk-build
Description:ndk-build
Program:D:\Android\sdk\ndk-bundle\ndk-build.cmd
Parmeters:
Working directory:$ProjectFileDir$\app\src\main

Name:ndk-build-clean
Description:ndk-build-clean
Program:D:\Android\sdk\ndk-bundle\ndk-build.cmd
Parmeters:-clean
Working directory:$ProjectFileDir$\app\src\main

Name:ndk build NDK_DEBUG=1
Description:ndk build NDK_DEBUG=1
Program:D:\Android\sdk\ndk-bundle\ndk-build.cmd
Parmeters:NDK_DEBUG=1
Working directory:$ProjectFileDir$\app\src\main

javah 命令是将java接口的class文件转换成C语言的.h文件
ndk-build 命令是生成.so文件
ndk-build-clean 命令是反编译.so文件
NDK_DEBUG 命令是进入ndk的调试模式
