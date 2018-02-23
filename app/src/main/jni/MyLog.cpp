//
// Created by freed on 2017/6/15.
//

#include <jni.h>
#include "com_android_ndktest_MyLog.h"
#include "MyLogH.h"
#include <android/log.h>

JNIEXPORT void JNICALL Java_com_android_ndktest_MyLog_HelloLog
  (JNIEnv *, jclass cla){
 LOGV("hello verbose");
 LOGD("hello debug");
 LOGI("hello info");
 LOGW("hello warn");
 LOGE("hello error");
  }

  static JNINativeMethod gMethods[]=   {
  {
    "HelloLog","()V",com_android_ndktest_MyLog_HelloLog
  }
  }

  static int registerNativeMethods(  JNIEnv* env,const char * className){
  jclass clazz;
  clazz=(*env)->FindClass(env,className)
  }