package com.android.ndktest;

/**
 * Created by freed on 2017/6/11.
 */

public class MyNDK {
    static {
        System.loadLibrary("hello-jni");
    }

    public static native String Hello();


    public static native int HelloIntegerAdd(int a, int b);

    public static native int HelloIntegerSubtract(int a, int b);

    public static native int HelloIntegerMultiply(int a, int b);

    public static native int HelloIntegerDivide(int a, int b);


    public static native double HelloDoubleAdd(double a, double b);

    public static native double HelloDoubleSubtract(double a, double b);

    public static native double HelloDoubleMultiply(double a, double b);

    public static native double HelloDoubleDivide(double a, double b);


    public static native boolean HelloBoolean(boolean b);


    public static native String HelloStringSprint(String format,double x);

    public native double[] HelloDoubleArray(double[] arr);

    public String print(double[] arr){
        StringBuffer sb=new StringBuffer();

        for(double dou:arr){
            sb.append(dou);
            sb.append(" ");
        }
        return sb.toString();
    }
}
