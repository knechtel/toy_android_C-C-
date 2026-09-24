#include <jni.h>
#include <string>

#include <android/log.h>
extern "C"

#define LOG_TAG "MEU_CPP"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

void onClick() {

    LOGI("BOTAO CLICADO NO C++!");

}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    // Passa meuCallback para doConfig

    std::string hello = "Hello from C/C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_myapplication_MainActivity_onClick(JNIEnv *env, jobject thiz) {
    // TODO: implement onClick()
    onClick();
}