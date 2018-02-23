package com.android.ndktest;

/**
 * Created by freed on 2017/6/15.
 */

public class MyLog {
    static {
        System.loadLibrary("hello-log");
    }

    public static native void HelloLog();
}
