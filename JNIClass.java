//JNI类
public class JNIClass{
	//JNI方法
	public native void jniMethod();
	//测试
	public static void main(String[] args){
		//加载实现了JNI方法的DLL
		System.loadLibrary("JNIImplDll");
		//测试调用JNI方法
		new JNIClass().jniMethod();
	}
}