#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_cn_yamicp_wwflutterdemo_JNI_FlutterJNIEngine_start(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Flutter NDK start!";
    return env->NewStringUTF(hello.c_str());
}
