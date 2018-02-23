//
// Created by freed on 2017/6/17.
//
#include <jni.h>
#include <iostream>
#include <string.h>
#include "com_android_ndktest_MyCpp.h"
#include "MyLogH.h"

using namespace std;

JNIEXPORT jstring JNICALL Java_com_android_ndktest_MyCpp_hello
  (JNIEnv *env, jclass cla){
    LOGI("function begins");
    string ret;
    LOGI("ok");
    char s[]="Golden global View,disk * desk";
    const char *d=" ,*";
    LOGI("next step is define char *p=NULL");
    char *p=NULL;
    LOGI("every thing is ok");
    p=strtok(s,d);
    int i=0;
    LOGI("previous step is ok");
    while(p){
    ret+=p;
    ret+=" ";
    p=strtok(NULL,d);
    }
    return env->NewStringUTF(ret.c_str());
  }
