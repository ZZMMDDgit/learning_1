/*#include<stdio.h>

int main() {
    char category;//自己写的
    float price;

    printf("商品类别A-电子产品，B-服装\n请按顺序输入商品类别和价格");
    scanf(" %c %f", &category, &price);

    switch (category) {
    case 'A':
        if (price < 500) {
            printf("电子产品价格较低，无优惠\n");
        }
        else if (price <= 1000) {
            printf("电子产品可享受5%的优惠\n");
        }
        else {
            printf("电子产品可享受10%的优惠\n");
        }
        break;
    case 'B':
        if (price < 200) {
            printf("服装价格较低，无优惠\n");
        }
        else if (price <= 500) {
            printf("服装可享受8%的优惠\n");
        }
        else {
            printf("服装可享受15%的优惠\n");
        }
        break;
    }
}*/

/*#include<stdio.h>

int main() { 
    double price = 2999.9;//手机价格
    int saved_money = 0;//存下来的钱

    while (saved_money < price) {
        saved_money = saved_money + 100;
        printf("现在攒了%d元了\n", saved_money);
    }
    printf("攒了%d元，够买手机啦！\n", saved_money);
}*/

/*#include<stdio.h>

main() {
    int a = 1;
    int sum_1 = 0;
    int sum_2 = 0;

    while (a <= 100) {//先判断
        if (a % 2 == 0) {
            sum_1 = sum_1 + a;
        }
        a = a + 1;
    }
    printf("1到100中所有偶数的和为：%d\n", sum_1);

    a = 1;
    do {//              先执行一次再判断
        if (a % 2 != 0) {
            sum_2 = sum_2 + a;
        }
        a = a + 1;
    } while (a <= 100);
    printf("1到100中所有奇数之和为：%d\n", sum_2);
}*/

/*#include<stdio.h>

int main() {
    for (int i = 1; i <= 10; i = i + 1) {
        printf("%d\n", i);
    }
}*/

/*#include<stdio.h>

int main() {

    for (int i = 1; i <= 50; i = i ++) {
        if (i % 2 != 0) {
            continue;
        }
        if (i % 3 == 0) {
            continue;
        }
        if (i > 40) {
            break;
        }
        printf("%d\n", i);
    }
}*/

/*#include<stdio.h>

int main() {
    float score[10] = { 90.5,59,84.5,98,77,60,50.5,69.8,72.5,92 };

    for (int i = 0; i < 10; i++) {
        if (score[i] < 60) {
            printf("索引：%d", i);
            printf("分数：%.2f\n", score[i]);
        }
    }
}*/

/*#include<stdio.h>

int main() {
    int arr[5];

    //scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("请分5次逐一输入一个整数：\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("输入完毕!\n");
    for (int i = 0; i < 5; i++) {
        printf("输入的分别是：%d\n", arr[i]);
    }
}*/

/**#include<stdio.h>

main() {
    int ree = 1;
    while (1) {
        printf("%d ", ree);
        ree = ree + 1;
    }
}*/

/*#include<stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("输入被除数：");
    scanf("%d", &dividend);

    printf("输入除数：");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("商=%d\n余数=%d", quotient,remainder);
}*/

/*#include<stdio.h>

int main() {

    int n;
    char name[16];

    printf("请输入你想打招呼的总人数：");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("请输入你想打招呼的人的名字，不要超过五个汉字:");
        scanf("%15s", name);
        printf("%s,你好\n", name);
    }

    printf("你已经打完所有招呼\n");
}*/

/*#include<stdio.h>

int main() {
    int i = 10;
    int* i_ptr = &i;
    
    printf("%d\n", *i_ptr);

    *i_ptr = 20;

    printf("%d\n", *i_ptr);
}*/

/*#include<stdio.h>

int main() {
    char ch = 'A';
    char* ch_ptr = &ch;
    printf("修改前：%c", *ch_ptr);
    *ch_ptr = 'a';
    printf("修改后：%c", ch);
}*/


//练习a+b
/*#include<stdio.h>
int main()
{
    int a, b;
    while (~scanf("%d%d", &a, &b))
        printf("%d\n", a + b);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    scanf(" %d %d %d", &a,&b,&c);
    if (a > b && a > c) {
        printf("%d", a);
    }
    else if (b > a && b > c) {
        printf("%d", b);
    }
    else if (c > a && c > b) {
        printf("%d", c);
    }
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    int max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("%d", max);
}*/

/*#include<stdio.h>
int main() {
    printf("         ********\n               ************\n               ####....#.\n             #..###.....##....\n             ###.......######              ###            ###\n                ...........               #...#          #...#\n               ##*#######                 #.#.#          #.#.#\n            ####*******######             #.#.#          #.#.#\n           ...#***.****.*###....          #...#          #...#\n           ....**********##.....           ###            ###\n           ....****    *****....\n             ####        ####\n           ######        ######\n##############################################################\n#...#......#.##...#......#.##...#......#.##------------------#\n###########################################------------------#\n#..#....#....##..#....#....##..#....#....#####################\n##########################################    #----------#\n#.....#......##.....#......##.....#......#    #----------#\n##########################################    #----------#\n#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n##########################################    ############");
}*/

/*#include<stdio.h>

int main() {
    int n,k;
    n = 1;
    scanf("%d",&k);

    double S;
    S = 1.0 / n;
    while (S <= k) {
        n = n +1;
        S = S + 1.0 / n;
    }
    printf("%d", n);
}*/

/*#include<stdio.h>

int main() {
    int hight[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &hight[i]);
    }
    int taotao;
    scanf("%d", &taotao);
    int a = 0;
    for (int i = 0; i < 10; i++) {
        if (hight[i] <= taotao + 30) {
            a = a + 1;
        }
    }
    printf("%d", a);
}*/

/*#include<stdio.h>

int main() {
    int a, b;
    for (int i = 1; i <= 7; i++) {
        scanf("%d %d", &a, &b);
    }
}*/

/*#include <stdio.h>

int main() {
    int max_unhappy_day = 0;    // 最不高兴的日期（0表示没有）
    int max_unhappy_hours = 0;  // 最大的不高兴时长

    // 处理7天的数据（周一到周日）
    for (int day = 1; day <= 7; day++) {
        int school, mom;
        scanf("%d %d", &school, &mom);

        int total_hours = school + mom;  // 当天总上课时间

        // 如果当天上课超过8小时会不高兴
        if (total_hours > 8) {
            // 计算不高兴程度（超过8小时的部分）
            int unhappy_level = total_hours - 8;

            // 如果当前的不高兴程度大于之前记录的最大值
            if (unhappy_level > max_unhappy_hours) {
                max_unhappy_hours = unhappy_level;
                max_unhappy_day = day;
            }
        }
    }

    // 输出结果
    printf("%d\n", max_unhappy_day);

    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    // 创建网格并初始化为false
    bool** grid = (bool**)malloc(n * sizeof(bool*));
    for (int i = 0; i < n; i++) {
        grid[i] = (bool*)malloc(n * sizeof(bool));
        for (int j = 0; j < n; j++) {
            grid[i][j] = false;
        }
    }

    // 处理火把
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int cx = x - 1;  // 转换为0-based索引
        int cy = y - 1;

        // 遍历曼哈顿距离不超过2的所有位置
        for (int dx = -2; dx <= 2; dx++) {
            for (int dy = -2; dy <= 2; dy++) {
                if (abs(dx) + abs(dy) <= 2) {
                    int nx = cx + dx;
                    int ny = cy + dy;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        grid[nx][ny] = true;
                    }
                }
            }
        }
    }

    // 处理萤石
    for (int i = 0; i < k; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int cx = x - 1;  // 转换为0-based索引
        int cy = y - 1;

        // 遍历5×5范围内的所有位置
        for (int dx = -2; dx <= 2; dx++) {
            for (int dy = -2; dy <= 2; dy++) {
                int nx = cx + dx;
                int ny = cy + dy;
                if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                    grid[nx][ny] = true;
                }
            }
        }
    }

    // 统计未被照亮的格子数量
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!grid[i][j]) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    // 释放内存
    for (int i = 0; i < n; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}*/

//#include<stdio.h>
//
//int main() {
//
//    int money = 0;
//    int budget[12];
//    int saved_money=0;
//
//    printf("请分别输入12个月预算：\n");
//    for (int i=0; i < 12; i++) {
//        scanf("%d", &budget[i]);
//    }
//    printf("你已输入完所有预算\n");
//
//    int balance;
//
//    for (int i = 0; i < 12; i++) {
//        money = money + 300;
//        balance = money - budget[i];
//        if (balance < 0) {
//            printf("-%d\n", i);
//        }
//        while(balance / 100 >= 1) {
//            saved_money = saved_money + 100;
//            balance = balance - 100;
//        }
//    }
//    int p = saved_money * 1.2 + balance;
//    printf("%d", p);
//}

/*#include<stdio.h>

int main() {

    int budget;
    int month;
    int hand = 0;
    int save = 0;

    for (int month = 1; month <= 12; month++) {
        hand += 300;
        scanf("%d", &budget);
        if (hand < budget) {
            printf("-%d\n", month);
            return 0;
        }
        hand -= budget;
        if (hand >= 100) {
            save += hand / 100 * 100;
            hand -= hand / 100 * 100;
        }
    }
    printf("%d",save * 1.2 + hand);
}*/

/*#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max;
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}*/

/*#include<stdio.h>

int main() {

    char code[5];
    for (int i = 0; i < 5; i++) {
        scanf("%c", &code[i]);
        code[i] = code[i] + 4;
    }
    for (int i = 0; i < 5; i++) {
        printf("%c", code[i]);
    }
}*/


/*#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF && n != 0) {
        if (n <= 0) continue;

        long long dp[55] = { 0 };

        // 基础情况
        dp[1] = 1; // 第1年：1头母牛
        dp[2] = 2; // 第2年：2头母牛
        dp[3] = 3; // 第3年：3头母牛

        // 递推公式：第n年的牛数 = 第n-1年的牛数 + 第n-3年的牛数（新生的牛）
        for (int i = 4; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 3];
        }

        printf("%lld\n", dp[n]);
    }

    return 0;
}*/

/*#include<stdio.h>

int main() {

    float c;
    float F;

    scanf("%f", &F);
    c = 5*(F - 32.0) / 9;
    printf("c=%.2f", c);
}*/

/*#include<stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max;
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        printf("%d", max);
}*/

/*#include<stdio.h>

int main() {

    int x, y;

    scanf("%d", &x);

    if (x < 1) {
        y = x;
    }
    else if (1 <= x && x < 10) {
        y = 2 * x - 1;
    }
    else {
        y = 3 * x - 11;
    }
    printf("%d", y);
}*/

/*#include<stdio.h>

int main() {

    int S;
    scanf("%d", &S);
    if (S >= 90 && S <= 100) {
        printf("A");
    }
    else if (S >= 80 && S < 90) {
        printf("B");
    }
    else if (S >= 70 && S < 80) {
        printf("C");
    }
    else if (S >= 60 && S < 70) {
        printf("D");
    }
    else {
        printf("E");
    }
}*/

/*#include<stdio.h>
int main() {
    int arr[4] = { 90,80,70,60 };
    char arrc[4] = { 'A','B','C','D' };
    int i=0;
    int chengji;
    scanf("%d", &chengji);
    //while (1) {
    //    if (chengji >= arr[i]) {
    //        printf("%c", arrc[i]);
    //        break;
    //    }
    //    i++;
    //}
    for (int i = 0; i < 5; i++) {
        if (chengji >= arr[i]) {
            printf("%c", arrc[i]);
            break;
        }
    }

}*/

/*#include<stdio.h>

int main() {

    int err[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", err[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\0", err[i]);
    }
    printf("\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d", err[i]);
    }
}*/