#include "JNIClass.h"

//ʵ��JNI���� 
JNIEXPORT void JNICALL Java_JNIClass_jniMethod
  (JNIEnv *, jobject){
  	printf("%s","this is print by cpp");
  }
