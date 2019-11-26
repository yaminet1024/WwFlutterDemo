package cn.yamicp.wwflutterdemo.JNI

object FlutterJNIEngine{

    init {
        System.loadLibrary("native-lib")
    }

    external fun start():String

}