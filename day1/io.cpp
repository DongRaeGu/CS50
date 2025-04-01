#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    //std::endl 是 C++ 标准库提供的一个流操作符（manipulator），其作用主要有两个：
    // 输出换行符
    // 它将一个换行符（通常是 '\n'）写入到输出流中，相当于在文本中插入一行结束符。
    // 刷新输出缓冲区
    // 在写入换行符后，std::endl 会调用流的 flush() 方法，这个方法将缓冲区内存的数据强制写入到输出设备（例如终端、文件等）。
    // 如果直接使用cout而不加std::前缀，会出现编译错误，因为cout位于std命名空间中。
    return 0;
}