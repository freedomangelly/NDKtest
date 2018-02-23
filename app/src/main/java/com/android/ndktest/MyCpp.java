package com.android.ndktest;

/**
 * Created by freed on 2017/6/17.
 */

public class MyCpp {
    static{
        System.loadLibrary("hello-jni-c++");
    }

    public static native String hello();
}
