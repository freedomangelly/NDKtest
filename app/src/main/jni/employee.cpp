//
// Created by freed on 2017/6/11.
//

#include <jni.h>
#include <stdlib.h>
#include <stdio.h>
#include "com_android_ndktest_Employee.h"

JNIEXPORT void JNICALL Java_com_android_ndktest_Employee_raiseSalary
  (JNIEnv *env, jobject obj, jdouble byPercent){
    jclass class_Employee=env->GetObjectClass(obj);
    jfieldID id_salary=env->GetFieldID(class_Employee,"salary","D");
    jdouble salary=env->GetDoubleField(obj,id_salary);
    salary *=1+byPercent/100;
    env->SetDoubleField(obj,id_salary,salary);
  }
