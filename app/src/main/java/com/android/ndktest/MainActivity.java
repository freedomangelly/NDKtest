package com.android.ndktest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private TextView tvHello;
    private TextView tvIntAdd,tvIntSubtract,tvIntMultiply,tvIntDivide;
    private TextView tvDoubleAdd,tvDoubleSubtract,tvDoubleMultiply,tvDoubleDivide;
    private TextView tvBooleanView;
    private TextView tvString;

    private TextView tvInstance;

    private TextView tvDoubleArr,tvDoubleArr2;

    private TextView tvcpp;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        setupView();

        tvHello.setText(MyNDK.Hello());

        setInt();
        setDouble();
        setString();
        setBoolean();

        setEntityEmployee();

        double[] arr=new double[]{1,2,3,4};

        MyNDK my=new MyNDK();
        tvDoubleArr.setText(my.print(arr));

        double[] arr2=my.HelloDoubleArray(arr);
        tvDoubleArr2.setText(my.print(arr2));
        MyLog.HelloLog();

        tvcpp.setText(MyCpp.hello());
    }

    private void setEntityEmployee() {
        Employee em=new Employee("hello world",32000);
        em.raiseSalary(5);
        tvInstance.setText(em.print());
    }

    private void setBoolean() {

        StringBuffer sBoolean=new StringBuffer("true=");
        sBoolean.append(MyNDK.HelloBoolean(true));
        tvBooleanView.setText(sBoolean);
    }

    private void setString() {
        tvString.setText(MyNDK.HelloStringSprint("Amount due = %8.2f", 33.4556));
    }

    private void setInt(){
        StringBuffer sbAdd=new StringBuffer("3+5=");
        sbAdd.append(MyNDK.HelloIntegerAdd(3,5));
        tvIntAdd.setText(sbAdd.toString());

        StringBuffer sbSubtract=new StringBuffer("33-100=");
        sbSubtract.append(MyNDK.HelloIntegerSubtract(33,100));
        tvIntSubtract.setText(sbSubtract.toString());

        StringBuffer sbMultiply=new StringBuffer("6*32=");
        sbMultiply.append(MyNDK.HelloIntegerMultiply(6,32));
        tvIntMultiply.setText(sbMultiply.toString());

        StringBuffer sbDivide=new StringBuffer("90/32=");
        sbDivide.append(MyNDK.HelloIntegerDivide(90,32));
        tvIntDivide.setText(sbDivide.toString());


    }

    private void setDouble(){
        StringBuffer sbAdd=new StringBuffer("3.0+5.0=");
        sbAdd.append(MyNDK.HelloDoubleAdd(3.0,5.0));
        tvDoubleAdd.setText(sbAdd.toString());

        StringBuffer sbSubtract=new StringBuffer("33.0-100.0=");
        sbSubtract.append(MyNDK.HelloDoubleSubtract(33.0,100.0));
        tvDoubleSubtract.setText(sbSubtract.toString());

        StringBuffer sbMultiply=new StringBuffer("6.0*32.0=");
        sbMultiply.append(MyNDK.HelloDoubleMultiply(6.0,32.0));
        tvDoubleMultiply.setText(sbMultiply.toString());

        StringBuffer sbDivide=new StringBuffer("90.0/32.0=");
        sbDivide.append(MyNDK.HelloDoubleDivide(90.0,32.0));
        tvDoubleDivide.setText(sbDivide.toString());
    }

    private void setupView() {
        tvHello=(TextView) findViewById(R.id.tv_hello);

        tvIntAdd=(TextView) findViewById(R.id.tv_int_add);
        tvIntSubtract=(TextView) findViewById(R.id.tv_int_subtart);
        tvIntMultiply=(TextView) findViewById(R.id.tv_int_multiply);
        tvIntDivide=(TextView) findViewById(R.id.tv_int_divide);

        tvDoubleAdd=(TextView) findViewById(R.id.tv_double_add);
        tvDoubleSubtract=(TextView) findViewById(R.id.tv_double_subtart);
        tvDoubleMultiply=(TextView) findViewById(R.id.tv_double_multiply);
        tvDoubleDivide=(TextView) findViewById(R.id.tv_double_divide);

        tvBooleanView=(TextView)findViewById(R.id.tv_boolean_view);

        tvString=(TextView)findViewById(R.id.tv_string_view);
        tvInstance=(TextView)findViewById(R.id.tv_instance_view);

        tvDoubleArr=(TextView)findViewById(R.id.tv_array_view);
        tvDoubleArr2=(TextView)findViewById(R.id.tv_array2_view);

        tvcpp= (TextView) findViewById(R.id.tv_cpp_view);
    }
}
