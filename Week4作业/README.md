# C 语言程序设计作业（Week4作业）

> 大一《C 语言程序设计》课程第 4 周作业，Visual Studio 2022 编写，`.cpp` 后缀（老师要求，语法为 C 语言）。
> 本文件夹用于期末复习回顾，每题一个 `.cpp` 文件，附知识点总结。
> 本作业主题：**选择结构**（`if / else if / switch`）。

---

## 📂 项目结构

```
Week4作业/
├── Week4作业.slnx           # 解决方案文件
└── Week4作业/               # 项目
    ├── 1.cpp                # 三变量交换法（大数换到后面）
    ├── 2.cpp                # 三个数从小到大排序
    ├── 3.cpp                # 求绝对值 |x|
    ├── 4.cpp                # 判断字符：数字/大写/小写/其他
    ├── 5.cpp                # 判断三条边能否构成三角形
    ├── 6.cpp                # 判断坐标点所在象限
    ├── 7.cpp                # switch 判断季节
    ├── 8.cpp                # switch 会员等级折扣
    └── Week4作业.vcxproj
```

---

## 📝 题目与知识点（期末回顾重点）

| 文件 | 题目 | 考查知识点 |
|------|------|-----------|
| `1.cpp` | 输入两数，若 a>b 则交换后输出 | 三变量交换（`c=b; b=a; a=c`）、`if` 单分支 |
| `2.cpp` | 输入三个数，从小到大排序输出 | 三次 `if` 两两比较交换（冒泡思想雏形） |
| `3.cpp` | 求 x 的绝对值 | `if/else`、负数取反 `x * -1` |
| `4.cpp` | 判断字符类型 | 字符比较 `'0'~'9'`、`'A'~'Z'`、`'a'~'z'`、`else if` 链 |
| `5.cpp` | 判断能否构成三角形 | 三边都大于 0、任意两边之和大于第三边 |
| `6.cpp` | 判断坐标点在第几象限 | 嵌套 `if`、坐标正负判断、轴/原点特判 |
| `7.cpp` | 输入月份输出季节 | `switch` 多 case 合并（3/4/5 春…） |
| `8.cpp` | 会员等级折扣计算 | `switch` + `break`、`default`、`double` 计算 |

---

## 🎓 核心知识点速查（复习笔记）

### 1. 三变量交换法（两数）
```c
c = b;   // 先把 b 存到 c
b = a;   // b 拿到 a
a = c;   // a 拿到原来 b
```
> 比大小/排序时最常用的基本功，没有第三个变量会丢值。

### 2. 三个数从小到大排序（三个 if）
```c
if (a > b) { temp = a; a = b; b = temp; }   // 保证 a <= b
if (a > c) { temp = a; a = c; c = temp; }   // 保证 a <= c（a 最小）
if (b > c) { temp = b; b = c; c = temp; }   // 最后保证 b <= c
// 结果：a <= b <= c
```

### 3. 字符范围判断（ASCII 码连续）
```c
ch >= '0' && ch <= '9'    // 数字
ch >= 'A' && ch <= 'Z'    // 大写字母
ch >= 'a' && ch <= 'z'    // 小写字母
```
> 字符可以直接用比较运算符，因为背后是 ASCII 码。

### 4. 三角形判断
```c
a + b > c && a + c > b && c + b > a   // 任意两边之和 > 第三边
```
> 还要先判断三边都大于 0。

### 5. switch 多 case 合并（季节）
```c
switch (month)
{
    case 3: case 4: case 5:  printf("spring");  break;
    case 6: case 7: case 8:  printf("summer");  break;
    case 9: case 10: case 11: printf("autumn");  break;
    case 12: case 1: case 2:  printf("winter");  break;
}
```
> 多个 case 共用一个 `break`，代码更简洁。

### 6. switch 做"折扣表"（会员等级）
```c
switch (level)
{
    case 1: pay = price * 0.9; break;   // 9 折
    case 2: pay = price * 0.8; break;   // 8 折
    case 3: pay = price * 0.7; break;   // 7 折
    default: pay = price; break;        // 其他等级不打折
}
```
> `default` 处理所有没列出的情况；每个 case 记得 `break`，否则会"穿透"。

---

## ⚠️ 本作业待办提醒

- `6.cpp`（坐标象限）中象限编号有误：`x>0 && y<0` 应为第四象限（fourth），`x<0 && y>0` 应为第二象限（second），代码里写反了，运行结果会错，练习时注意修正；
- `1.cpp` 的 `if` 只在 `a > b` 时交换输出，`a <= b` 时**没有输出**（代码不完整），练习时补上 `else` 分支；
- 本作业除 `8.cpp` 外，其余 7 个文件的 `main()` 都被注释，需要取消注释才能单独运行。

---

## ▶️ 如何运行

1. 用 Visual Studio 打开 `Week4作业.slnx`
2. 只保留一个带 `main()` 的文件参与编译（取消注释或「从生成中排除」其他 cpp），避免"多个 main 函数"错误
3. 点绿色三角「本地 Windows 调试器」运行

---

## 🔧 使用建议

- 期末复习重点练：三变量交换、三数排序、字符范围判断、三角形判定、`switch` 多 case 合并与 `default`
- 比较表达式注意 `==`（判断）和 `=`（赋值）别写混
- `scanf_s` 换标准 `scanf` 时，文件首行加 `#define _CRT_SECURE_NO_WARNINGS 1`

---

© 课程作业，供个人期末复习使用。
