#include <stdio.h>

// 定义一个类（结构体）
typedef struct {
    int (*print)(const char *msg); // 模拟虚函数
} Base;

// 实现Base类的print方法
int basePrint(const char *msg) {
    printf("Base: %s\n", msg);
    return 0;
}

// 初始化Base类
Base createBase() {
    Base base = { .print = basePrint };
    return base;
}

// 派生类Derived，通过组合实现“继承”
typedef struct {
    Base base; // 继承自Base
    int (*derivedPrint)(const char *msg); // 新增的方法
} Derived;

// 实现派生类的print方法（覆盖父类的方法）
int derivedPrint(const char *msg) {
    printf("Derived: %s\n", msg);
    return 0;
}

// 初始化派生类
Derived createDerived() {
    Derived derived = {
        .base = createBase(),
        .derivedPrint = derivedPrint,
    };
    // 覆盖基类的print方法
    derived.base.print = derivedPrint;
    return derived;
}

// 使用
int main() {
    Base base = createBase();
    base.print("Hello from Base");

    Derived derived = createDerived();
    derived.base.print("Hello from Derived"); // 多态

    return 0;
}