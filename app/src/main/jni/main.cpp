//
// Created by freed on 2017/6/11.
//
#include <jni.h>
#include <stdlib.h>
#include <stdio.h>
#include "com_android_ndktest_MyNDK.h"

JNIEXPORT jstring JNICALL Java_com_android_ndktest_MyNDK_Hello
        (JNIEnv *env, jclass cla) {
    return env->NewStringUTF("new Hello JNI");
}

/*
 * Class:     com_android_ndktest_MyNDK
 * Method:    HelloIntegerAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_android_ndktest_MyNDK_HelloIntegerAdd
  (JNIEnv *env, jclass cla, jint a, jint b){
  jint c;
  c=a-b;
  return c;
  }

/*
 * Class:     com_android_ndktest_MyNDK
 * Method:    HelloIntegerSubtract
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_android_ndktest_MyNDK_HelloIntegerSubtract
  (JNIEnv *env, jclass cal, jint a, jint b){
  return a+b;
  }

/*
 * Class:     com_android_ndktest_MyNDK
 * Method:    HelloIntegerMultiply
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_android_ndktest_MyNDK_HelloIntegerMultiply
  (JNIEnv *env, jclass cal, jint a , jint b){
    return a*b;
  }

/*
 * Class:     com_android_ndktest_MyNDK
 * Method:    HelloIntegerDivide
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_android_ndktest_MyNDK_HelloIntegerDivide
  (JNIEnv *env, jclass cla, jint a, jint b){
  return a/b;
  }

  /*
   * Class:     com_android_ndktest_MyNDK
   * Method:    HelloDoubleAdd
   * Signature: (DD)I
   */
  JNIEXPORT jdouble JNICALL Java_com_android_ndktest_MyNDK_HelloDoubleAdd
    (JNIEnv *env, jclass cla, jdouble a, jdouble b){
    return a+b;
    }

  /*
   * Class:     com_android_ndktest_MyNDK
   * Method:    HelloDoubleSubtract
   * Signature: (DD)I
   */
  JNIEXPORT jdouble JNICALL Java_com_android_ndktest_MyNDK_HelloDoubleSubtract
    (JNIEnv *env, jclass cla, jdouble a, jdouble b){
    return a-b;
    }

  /*
   * Class:     com_android_ndktest_MyNDK
   * Method:    HelloDoubleMultiply
   * Signature: (DD)I
   */
  JNIEXPORT jdouble JNICALL Java_com_android_ndktest_MyNDK_HelloDoubleMultiply
    (JNIEnv *env, jclass cla, jdouble a, jdouble b){
    return a*b;
    }

  /*
   * Class:     com_android_ndktest_MyNDK
   * Method:    HelloDoubleDivide
   * Signature: (DD)I
   */
  JNIEXPORT jdouble JNICALL Java_com_android_ndktest_MyNDK_HelloDoubleDivide
    (JNIEnv *env, jclass cla, jdouble a, jdouble b){
    return a/b;
    }

    /*
     * Class:     com_android_ndktest_MyNDK
     * Method:    HelloBoolean
     * Signature: (Z)Z
     */
    JNIEXPORT jboolean JNICALL Java_com_android_ndktest_MyNDK_HelloBoolean
      (JNIEnv *env, jclass cla, jboolean bol){
        jboolean res=JNI_FALSE;

        if(bol==JNI_TRUE){
        res=JNI_TRUE;
        }else{
        res=JNI_FALSE;
        }
        return res;
      }

      /*
       * Class:     com_android_ndktest_MyNDK
       * Method:    HelloStringSprint
       * Signature: (Ljava/lang/String;D)Ljava/lang/String;
       */
      JNIEXPORT jstring JNICALL Java_com_android_ndktest_MyNDK_HelloStringSprint
        (JNIEnv *env, jclass cla, jstring format, jdouble x){
            const char* cformat;
            jstring ret;
            cformat =env->GetStringUTFChars(format,NULL);
            char *cret;
                cret = (char*)malloc(strlen(cformat)+8);
                sprintf(cret, cformat, x);
                ret = env->NewStringUTF(cret);
                free(cret);
                env->ReleaseStringUTFChars(format, cformat);
            return ret;
        }


JNIEXPORT jdoubleArray JNICALL Java_com_android_ndktest_MyNDK_HelloDoubleArray
  (JNIEnv *env, jobject obj, jdoubleArray dou){
    jsize leng=env->GetArrayLength(dou);

    jdoubleArray arr=env->NewDoubleArray(leng);

    double *a =env->GetDoubleArrayElements(arr,NULL);

    double *d =env->GetDoubleArrayElements(dou,NULL);

    for(int i=0;i<leng;i++){
    a[i]=d[i]*2;
    }
    env->ReleaseDoubleArrayElements(dou, d , NULL);
    env->ReleaseDoubleArrayElements(arr, a , NULL);
    return arr;
  }