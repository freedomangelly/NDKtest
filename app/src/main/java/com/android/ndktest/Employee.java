package com.android.ndktest;

/**
 * Created by freed on 2017/6/11.
 */

public class Employee {

    static {
        System.loadLibrary("hello-employee");
    }

    private String name;
    private double salary;

    public Employee(String name,double s){
        this.name=name;
        salary=s;
    }

    public native void raiseSalary(double byPercent);

    public String print(){
        StringBuffer sb=new StringBuffer();
        sb.append(name);
        sb.append(" ");
        sb.append(salary);
        return sb.toString();
    }
}
