#include "JNIClass.h"

//实现JNI方法 
JNIEXPORT void JNICALL Java_JNIClass_jniMethod
  (JNIEnv *, jobject){
  	printf("%s","this is print by cpp");
  }
