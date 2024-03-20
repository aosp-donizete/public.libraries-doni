#include <jni.h>

extern "C" {
    JNIEXPORT jstring JNICALL
    Java_com_doni_java_DoniLibNative_helloWord(JNIEnv *env, jobject) {
        return env->NewStringUTF("Hello World from JNI call");
    }
}